#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H

#include <vector>
#include <string>
using namespace std;

const vector<string> operator + ( const vector<string>& vec1, const vector<string>& vec2 ){
    size_t size = vec1.size();
    vector<string> output;
    for (size_t i = 0; i < size; i++)
    {
        output.push_back(vec1[i] + " " + vec2[i]);
    }
    
    return output;
}

#endif //!SUMOFVECTORS_H