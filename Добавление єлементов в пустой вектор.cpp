/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> fruits;
    
    fruits.push_back("Apple");
    fruits.push_back("Watermelon");
    fruits.push_back("Strawberry");
    for(std::string f : fruits)
        std::cout << f << "\t";
     
    std::cout << std::endl;

    return 0;
}