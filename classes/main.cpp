#include "Person.h"
#include "iostream"

int main()
{

    Person p1("John", "Doe", 24);
    Person p2(42);

    std::cout << p1.getName() << std::endl;
    std::cout << p2.getName() << std::endl;

    return 0;
}