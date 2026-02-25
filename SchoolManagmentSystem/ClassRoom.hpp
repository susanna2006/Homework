#pragma once
#include <iostream>
#include "Student.hpp"
#include "Teacher.hpp"

class ClassRoom {
private:
    std::string className;
    Teacher m_teacher;
    Student m_student[5];
    int studentCount;
    int maxStudents;
public:
    ClassRoom(); 
    ClassRoom(const std::string& name, const Teacher& teacher, int max); 
    
    void add_student(const Student& student);
    void classRoom_info();
};