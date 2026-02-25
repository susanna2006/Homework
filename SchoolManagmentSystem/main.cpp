#include <iostream>
#include "Student.cpp"
#include "Teacher.cpp"
#include "ClassRoom.cpp"

int main(){
    Teacher teacher1("Mr. John Doe", 101, "Mathematics");
    Student student1("Alice Johnson", 201, 10);
    Student student2("Bob Moore", 202, 10);
    Student student3("Charlie Brown", 203, 10);

    ClassRoom class_room("10th Grade Mathematics", teacher1, 2);

    class_room.add_student(student1);
    class_room.add_student(student2);
    class_room.add_student(student3);
    
    class_room.classRoom_info();

    return 0;
}