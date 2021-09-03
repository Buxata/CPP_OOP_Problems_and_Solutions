#include <iostream>
#include <iterator>
#include <vector>
#include <string>

enum Direction{ SOUTH = 'S', EAST = 'E', NORTH = 'N', WEST = 'W', BREAKER = 'B', TELEPORT = 'T',
                IVERTED = 'I', START = '@', EMPTY = ' ', WALL = '#', OBSTACLE = 'X', END = '$'};

struct Point{
    int x,y;
    bool operator ==(Point& a){
        if (a.x == x && a.y == y){
            return true;
        }        
        return false;
    }
};

class Map{
    private:
    std::vector<std::vector <char>> _map;
    std::vector<Point> _teleporters;
    public:
    void collectData(Point &startingpoint){
        int x=0,y=0;
        std::cin >> x>> y;
        std::cin.ignore();
        for (int i = 0; i < x; i++)
        {
            std::vector <char> line;
            std::string stringLine;
            getline(std::cin,stringLine);
            for (int j = 0; j < y; j++)
            {
                char token = stringLine[j];
                if(token == START){
                    startingpoint.x = i;
                    startingpoint.y = j;
                }
                line.push_back(token);
                if(token == TELEPORT){
                    Point tel;
                    tel.x = i;
                    tel.y = j;
                    _teleporters.push_back(tel);
                }
            }
            _map.push_back(line);
        }
    }
    char getChar(Point point){
        return _map[point.x][point.y];
    }
    void removeChar(Point point){
        _map[point.x][point.y] = EMPTY;
    }
    Point getTeleportLocation(Point p){
        //This will get the other location from the teleporter vector.
        return p ==_teleporters[0] ? _teleporters[1] : _teleporters[0];
    }

};

class Splender
{
private:

    std::vector<char> _dirPriorities = {SOUTH, EAST, NORTH, WEST};
    bool _endCondition = false;
    bool _inverted = false;
    bool _breaker = false;
    std::vector<char>::iterator _currPriorioty = _dirPriorities.begin();
    Map _map;
    Point _currentLocation;
   
    void _changePriority(char p){
        for (auto it = _dirPriorities.begin(); it != _dirPriorities.end(); it++){
            if(*it == p){
                _currPriorioty = it;
                break;
            }
        }
    }
    void _changeLocation (Point p){
        _currentLocation = p;
    }

    void _resetPriority(){
        if(!_inverted){
            _currPriorioty = _dirPriorities.begin();
        }
        else _currPriorioty = _dirPriorities.end();
    }

    void _advancePriority(){
        if(!_inverted){
            if(_currPriorioty == _dirPriorities.end()){
                _currPriorioty = _dirPriorities.begin();
            }
            else _currPriorioty++;

        }
        else{
            if(_currPriorioty == _dirPriorities.begin()){
                _currPriorioty = _dirPriorities.end();
            }
            else _currPriorioty--;
        }
    }

    void _calcNextDir(Point& a){
        while (_map.getChar(a=_futureLocation()) == OBSTACLE || _map.getChar(a=_futureLocation()) == WALL){
            _advancePriority();
        }
    }

    Point _futureLocation(){
        auto output = _currentLocation;
        switch (*_currPriorioty)
        {
        case SOUTH:
            output.x++;
            break;
        case EAST:
            output.y++;
            break;
        case NORTH:
            output.x--;
            break;
        case WEST:
            output.y--;
            break;
        default:
            std::cout << "something went wrong in calculating the future direction";
            break;
        }
        return output;
    }   
    void _printMove(){
        switch (*_currPriorioty)
        {
        case SOUTH:
            std::cout << "SOUTH\n";
            break;
        case EAST:
            std::cout << "EAST\n";
            break;
        case NORTH:
            std::cout << "NORTH\n";
            break;
        case WEST:
            std::cout << "WEST\n";
            break;
        default:
            std::cout << "something went wrong in calculating the future direction";
            break;
        }
    }
    void _calculateFuture(char nextStep, Point futurelocation){
        switch (nextStep)
        {
        case EMPTY:
            _changeLocation(futurelocation);
            _printMove();
            break;
        case WALL:
            _resetPriority();
            _calcNextDir(futurelocation);
            _changeLocation(futurelocation);
            _printMove();
            break;
        case OBSTACLE:
            if(_breaker){
                _map.removeChar(futurelocation);
                _changeLocation(futurelocation);
                _printMove();
            }
            else {
                _resetPriority();
                _calcNextDir(futurelocation);
                _changeLocation(futurelocation);
                _printMove();
            }
            break;
        case BREAKER:
            _breaker = !_breaker;
            _changeLocation(futurelocation);
            _printMove();
            break;
        case IVERTED:
            _inverted = !_inverted;
            _changeLocation(futurelocation);
            _printMove();
            break;
        case TELEPORT:
            _map.getTeleportLocation(futurelocation);
            _changeLocation(futurelocation);
            break;
        case SOUTH:
        case EAST:
        case NORTH:
        case WEST:
            _printMove();
            _changePriority(nextStep);
            _changeLocation(futurelocation);
        case END:
            _printMove();
            _endCondition = true;
            break;
        default:
            break;
        }
    }

public:
    Splender(){
        _map.collectData(_currentLocation);
    }
    ~Splender(){
    }
    bool getEndGoal(){
        return _endCondition;
    }
    void makeTurn(){
        auto futurelocation = _futureLocation();
        char nextStep = _map.getChar(futurelocation);
        _calculateFuture(nextStep, futurelocation);
    }

};