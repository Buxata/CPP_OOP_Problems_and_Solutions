#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

ostream& operator<<(ostream& os, const vector<string>& str){
    for(string s:str){
        os << s << endl;
    }
    return os;
}

vector<string>& operator<<(vector<string> &a, const string& b){
    a.push_back(b);
    return a;
}

string operator+( string &a, int b){
    ostringstream result;
    result << a << b;
    return result.str();
}

#endif // !OPERATORS_H
