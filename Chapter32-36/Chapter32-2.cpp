mylibrary.h:
void myfunction();  //function declaration
mylibrary.cpp:
#include "mylibrary.h"
#include <iostream>
// function definition
void myfunction()
{
    std::cout << "Hello World from multiple files.";
}
source.cpp:
#include "mylibrary.h"
int main()
{
    myfunction();
}
#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H
void myfunction();
#endif // !MY_LIBRARY_H
