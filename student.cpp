#include "student.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#include "student.h"


Student::Student() : id(0), name(""), final(0), midterm(0), hw_grades({}) {} // Default constructor initializes hw_grades as empty vector

Student::Student(int id, string name, int final, int midterm, const vector<int>& hw_grades)
    : id(id), name(name), final(final), midterm(midterm), hw_grades(hw_grades) {
}

Student get_student() {
    string name = "John";
    vector<int> hws = {89, 100, 98, 100};
    Student student(9999, name, 99, 90, hws);
    return student;
}

void print_student(Student student) {
    cout << "ID: " << student.id << ", Name: " << student.name << endl;
    cout << "Midterm: " << student.midterm << endl;
    cout << "Final Exam: " << student.final << endl;
    cout << "Homework Grades: ";
    
    for (auto hw : student.hw_grades) {
        cout << hw << " ";
    }
    cout << endl;
}
