#include <iostream>
#pragma once

class Student {
private:
    std::string studentName;
    int studentID;
    int gradeLevel;
public:
    Student(); 
    Student(const std::string& name, int ID, int grade); 
    
    std::string student_info() const;
};