#include "Python.h"

#include <iostream>
#include <fstream>
#include "reader.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    display();

    Py_Initialize();

    Py_Finalize();

    return 0;
}
