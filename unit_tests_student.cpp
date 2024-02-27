#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector>
#include "student.h"

TEST_CASE("Student") {
    SUBCASE("Edge Cases") {
        // Test case for an empty student
        Student student;
        CHECK(student.hw_grades.size() == 0);

        // Test case for getting a student
        Student student_1 = get_student();
        string name = student_1.name;
        CHECK(4 == student_1.hw_grades.size()); 
        CHECK(name == student_1.name); 
    }

    SUBCASE("Small Cases") {
        string name = "Grace Hopper";
        vector<int> hws = {89, 100, 98, 100}; 
        Student student(9999, name, 99, 100, hws);
        CHECK(student.name == name);

        CHECK(student.name == name);
        int i = 0;
        for (auto hw : student.hw_grades) {
            CHECK(hws[i++] == hw);
        }
    }

    SUBCASE("Fixed Grades") {
        // Test case for a student with known grades
        string name = "Albert Einstein";
        vector<int> hws = {90, 95, 88, 92}; 
        Student student(1234, name, 85, 88, hws);
        CHECK(student.final == 85);
        CHECK(student.midterm == 88);
        CHECK(student.hw_grades == hws);
    }

    SUBCASE("Zero Grades") {

        string name = "Marie Curie";
        vector<int> hws(4, 0); 
        Student student(5678, name, 0, 0, hws); 
        CHECK(student.name == name);
        CHECK(student.final == 0);
        CHECK(student.midterm == 0);
        CHECK(student.hw_grades == hws);
    }
}
