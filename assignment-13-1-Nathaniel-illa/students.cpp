#include "students.hpp"

// Constructor
Student::Student()
{
    sid = 0;
    sname = "";
    sum = 0.0;
    average = 0.0;
    for (int i = 0; i < Nscores; i++)
    {
        scores[i] = 0.0;
    }
}

// Setters
void Student::setSid(int id)
{
    sid = id;
}

void Student::setSname(string name)
{
    sname = name;
}

void Student::setScores(int index, double score)
{
    if (index >= 0 && index < Nscores)
    {
        scores[index] = score;
        sum = 0.0;
        for (int i = 0; i < Nscores; i++)
        {
            sum += scores[i];
        }
        average = sum / Nscores;
    }
}

// Getters
int Student::getSID() const
{
    return sid;
}

string Student::getSname() const
{
    return sname;
}

double Student::getScores(int index) const
{
    if (index >= 0 && index < Nscores)
    {
        return scores[index];
    }
    return 0.0;
}

double Student::getSum() const
{
    return sum;
}

double Student::getAvg() const
{
    return average;
}