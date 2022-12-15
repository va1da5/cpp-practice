#include <string>

class Person
{

private:
    std::string name;
    std::string surname;
    int age;

public:
    Person(std::string firstname, std::string lastname, int number);

    Person(int number);

    std::string getName();
};