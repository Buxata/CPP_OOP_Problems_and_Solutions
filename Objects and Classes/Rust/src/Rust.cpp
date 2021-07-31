#include <iostream>
#include "Rust.h"

int main (){

    Rust rust;
    rust.getInputMatrix();
    int a;
    std::cin >> a;
    rust.progressRust(a);
    rust.printMatrix();

    return 1;
}