#include <string>

class Person
{

private:
    std::string m_name;
    std::string m_surname;
    int m_age;

public:
    Person(std::string name, std::string surname, int age);

    Person(int number);

    std::string getName();
};