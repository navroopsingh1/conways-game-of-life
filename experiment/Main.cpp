#include "View.h"
#include "Model.h"
#include <iostream>
#include <fstream>


int main(){
    Model d = Model("input.txt");
    std::cout << std::endl;
    writeFile(d.nextGen(), "output.txt");
    std::cout << std::endl;
    writeFile(d.nextGen(), "output.txt");

    return 0;
}
