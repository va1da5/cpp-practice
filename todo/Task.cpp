#include "Task.h"

Task::Task(string name) : m_name(name) {}

void Task::complete()
{
    m_done = true;
}

string Task::getName()
{
    return m_name;
}

bool Task::isDone()
{
    return m_done;
}