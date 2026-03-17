#include <iostream>
#include "Employee(Base).cpp"
#include <vector>
#pragma once 
class PayrollSystem {
private:
    std::vector<Employee*> employees;
public:
    void addEmployee(Employee* emp);
    void displayEmployees();
    void calculateAllSalaries();
    void findEmployee(int id);
    ~PayrollSystem();
};  

void PayrollSystem::addEmployee(Employee* emp) {
    employees.push_back(emp);
}

void PayrollSystem::displayEmployees() {
    for(auto emp : employees){
        emp->displayInfo();
    }
}

void PayrollSystem::calculateAllSalaries() {
    for(auto emp : employees){
        std::cout << "Salary: " << emp->calculateSalary() << std::endl;
    }
}

void PayrollSystem::findEmployee(int id) {
    for (auto emp : employees) {
        if (emp->getId() == id) {
            emp->displayInfo();
            return;
        }
    }
    std::cout << "Employee not found" << std::endl;
}

PayrollSystem::~PayrollSystem(){
    for (auto emp : employees) {
        delete emp;       
    }
}
