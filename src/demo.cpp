#include "../include/demo.h"
#include <iostream>

void Demo::squareId() {
    id *= id;
}

void Demo::print() {
    std::cout << "Id: " << id << std:: endl;
}