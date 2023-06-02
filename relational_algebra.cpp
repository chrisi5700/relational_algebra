#include <iostream>
#include <memory>

std::unique_ptr<int[]> func()
{
    std::unique_ptr<int[]> arr;
    return arr;
}

void say_hello(){
    std::cout << "Hello, from relational_algebra!\n";
}
