#include "Person.h"

Person::Person(std::string name, std::string surname, int age) : m_name(name), m_surname(surname), m_age(age) {}

Person::Person(int number) : m_name("Foo"), m_surname("Bar"), m_age(number) {}

std::string Person::getName()
{
    return m_name + " " + m_surname;
}