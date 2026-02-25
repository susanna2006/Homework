#include <iostream>
#include "Student.hpp"
#include "Teacher.hpp"
#include "ClassRoom.hpp"

ClassRoom::ClassRoom() : className("Unknown"), m_teacher(), studentCount(0), maxStudents(5) {}

ClassRoom::ClassRoom(const std::string& name, const Teacher& teacher, int max) 
        : className(name),studentCount(0), m_teacher(teacher), maxStudents(max) {}
    
void ClassRoom::add_student(const Student& student) {
    if(studentCount < maxStudents){
        m_student[studentCount] = student;
        studentCount++;
    }
    else {
        std::cout << "ClassRoom is full" << std::endl;
    }
}

void ClassRoom::classRoom_info(){
    std::cout << className << " " << m_teacher.teacher_info() << std::endl;
     std::cout << "Students:\n";

    for (int i = 0; i < studentCount; i++) {
        std::cout << m_student[i].student_info() << std::endl;
    }
}


