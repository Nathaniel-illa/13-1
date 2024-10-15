#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

const int Nscores = 3;

class Student
{
private:
    int sid;
    string sname;
    double scores[Nscores];
    double sum;
    double average;

public:
    // Constructors
    Student();

    // Setters
    void setSid(int id);
    void setSname(string name);
    void setScores(int index, double score);

    // Getters
    int getSID() const;
    string getSname() const;
    double getScores(int index) const;
    double getSum() const;
    double getAvg() const;
};

#endif
