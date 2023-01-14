#include <iostream>

using namespace std;

class Task
{
private:
    string m_name;
    bool m_done = false;

public:
    Task(string name);
    void complete();
    string getName();
    bool isDone();
};
