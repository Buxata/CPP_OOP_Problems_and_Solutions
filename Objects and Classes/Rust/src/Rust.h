#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <list>

const int MATRIX_SIZE = 10;
typedef std::vector <char> Line;
typedef std::vector <Line> Matrix;
typedef std::pair<int, int> Coordinates;
typedef std::list <Coordinates> CoordinatesList;


class Rust{
    public:
    Matrix getMatrix(){
        return matrix;
    }
    void getInputMatrix(){
        std::string inputLine;
        for (size_t i = 0; i < MATRIX_SIZE; i++)
        {
            getline(std::cin,inputLine);
            std::stringstream str(inputLine);
            Line line;
            

            char token;
            while (str>>token){
                line.push_back(token);
            }
            matrix.push_back(line);
        }
    }
    void progressRust(){
        this->gatherCoordinates();
        for (Coordinates coord : coordinatesList){
            this->expandRust(coord.first, coord.second);
        }
        coordinatesList.clear();
    }
    void printMatrix(){
        for (size_t i = 0; i < MATRIX_SIZE; i++)
        {
            for (size_t j = 0; j < MATRIX_SIZE; j++)
            {
                std::cout << matrix[i][j];
            }
            std::cout << "\n";
        }
        
    }

    void progressRust(size_t a){
        for (size_t i = 0; i < a; i++) this->progressRust();
    }
    private:
    Matrix matrix;
    CoordinatesList coordinatesList;

    bool canExpand(int i, int j) {
        if (i < MATRIX_SIZE &&
            j < MATRIX_SIZE &&
            i >= 0 &&
            j >= 0 &&
            matrix[i][j] != '#' &&
            matrix[i][j] != '!' ) {
            return true;
        }
    else return false;
    }

    void gatherCoordinates(){
        for (size_t i = 0; i < MATRIX_SIZE; i++)
        {
            for (size_t j = 0; j < MATRIX_SIZE; j++)
            {
                if(matrix[i][j] == '!')
                {
                    Coordinates c = std::make_pair(i,j);
                    coordinatesList.push_back(c);
                }
            }
        }        
    }
    void expandRust(int i, int j) {
        if (this->canExpand(i + 1, j)) matrix[i + 1][j] = '!';
        if (this->canExpand(i - 1, j)) matrix[i - 1][j] = '!';
        if (this->canExpand(i, j + 1)) matrix[i][j + 1] = '!';
        if (this->canExpand(i, j - 1)) matrix[i][j - 1] = '!';
    }
};