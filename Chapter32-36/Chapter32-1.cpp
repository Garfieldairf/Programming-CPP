myheader.h:
void myfunction();  //function declaration
source.cpp:
#include "myheader.h" //include the header
#include <iostream>
int main()
{
    myfunction();
}
// function definition
void myfunction()
{
    std::cout << "Hello World from multiple files.";
}
