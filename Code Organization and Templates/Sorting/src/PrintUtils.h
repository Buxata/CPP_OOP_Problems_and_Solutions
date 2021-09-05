#ifndef PRINTUTILS_H
#define PRINTUTILS_H

#include <vector>
#include <iterator>

template <typename T>
void printVector (const std::vector<T> vec){
    size_t vectorSize = vec.size();
    for (size_t i = 0; i < vectorSize; i++)
    {
        std::cout << vec[i] << " "; 
    }
    
}

template <typename C>
void printContainer (const typename C::iterator &begin, const typename C::iterator &end) {
    for (auto it = begin; it != end; it++){
        std::cout << *it << " ";
    }
    
}

#endif // !PRINTUTILS_H