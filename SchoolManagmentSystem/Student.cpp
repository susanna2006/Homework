#include <iostream>
#include "Student.hpp"


Student::Student() : studentName("unknown"), studentID(0), gradeLevel(0) {}
Student::Student(const std::string& name, int ID, int grade) 
        : studentName(name), studentID(ID), gradeLevel(grade) {}
    
std::string Student:: student_info()const{
        return studentName + " - " + std::to_string(studentID) + " - " + std::to_string(gradeLevel);
}