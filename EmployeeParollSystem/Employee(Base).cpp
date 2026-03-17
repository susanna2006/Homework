#include <iostream>
#pragma once

class Employee {
protected:
    int id;
    std::string name;
public:
    Employee(int Id, std::string Name);
    virtual double calculateSalary() = 0;
    virtual void displayInfo();
    int getId();
    std::string getName();
    virtual ~Employee() {}
};

Employee::Employee(int Id, std::string Name) : id(Id), name(Name){ }

void Employee::displayInfo(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Id" << id << std::endl;
}

int Employee::getId() {
    return id;
}

std::string Employee::getName(){
    return name;
}