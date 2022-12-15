#include "Person.h"

Person::Person(std::string firstname, std::string lastname, int number) : name(firstname), surname(lastname), age(number) {}

Person::Person(int number) : name("Foo"), surname("Bar"), age(number) {}

std::string Person::getName()
{
    return name + " " + surname;
}