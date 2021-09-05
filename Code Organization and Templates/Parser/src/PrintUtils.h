#ifndef PRINTUTILS_H
#define PRINTUTILS_H

template <typename T>
void printVector (const std::vector<T> vec){
    size_t vectorSize = vec.size();
    for (size_t i = 0; i < vectorSize; i++)
    {
        std::cout << vec[i] << " "; 
    }
    
}

#endif // !PRINTUTILS_H