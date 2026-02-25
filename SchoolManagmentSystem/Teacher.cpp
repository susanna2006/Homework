#include <iostream>
#include "Teacher.hpp"


Teacher::Teacher() : teacherName("Unknown"), teacherID(0), m_subject("Unknown") {}
Teacher::Teacher(const std::string& name, int ID, const std::string& subject)
        : teacherName(name), teacherID(ID), m_subject(subject) {}
    
std::string Teacher::teacher_info(){
        return teacherName + " - " + std::to_string(teacherID) + " - " + m_subject;
}