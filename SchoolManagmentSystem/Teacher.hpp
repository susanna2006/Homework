#include <iostream>
#pragma once

class Teacher {
private:
    std::string teacherName;
    int teacherID;
    std::string m_subject;
public:
    Teacher(); 
    Teacher(const std::string& name, int ID, const std::string& subject);
    
    
    std::string teacher_info();
};