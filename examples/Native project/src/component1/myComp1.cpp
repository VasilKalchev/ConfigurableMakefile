#include "myComp1.hpp"
#include <iostream>

bool myComp1(int x) {
    std::cout << "Hello from myComp1 " << x << std::endl;
    return (x > 50);
}
