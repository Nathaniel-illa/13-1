#include <iostream>
#include "students.hpp"

using namespace std;

void printStudent(Student s);

int main()
{
    int id;
    string name;
    double score;
    Student student;

    // Input student ID and name
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your name: ";
    cin >> name;

    student.setSid(id);
    student.setSname(name);

    // Input scores for the student
    for (int i = 0; i < Nscores; i++)
    {
        cout << "Enter your score " << i + 1 << ": ";
        cin >> score;
        student.setScores(i, score);
    }

    // Print the student details
    printStudent(student);

    return 0;
}

void printStudent(Student s)
{
    cout << "\nID\t Name\t\t Scores\t\t\t Sum\t Average" << endl;
    cout << s.getSID() << "\t";
    cout << s.getSname() << "\t\t";

    for (int i = 0; i < Nscores; i++)
    {
        cout << s.getScores(i) << "\t";
    }

    cout << s.getSum() << "\t";
    cout << s.getAvg() << "\t";
    cout << endl;
}