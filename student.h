#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <vector>
#include <string>

using namespace std;

struct Student {
    // Constructors
    Student();
    Student(int id, string name, int final, int midterm, const vector<int>& hw_grades);

    // Member variables
    int id;
    string name;
    int final;
    int midterm;
    vector<int> hw_grades;

};

Student get_student(); 

void print_student(const Student& s);

#endif
