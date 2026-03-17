#include <iostream>
#include "Employee(Base).cpp"
#pragma once

class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    PartTimeEmployee(int id, const std::string& name,double HourlyRate, int HoursWorked);
    double calculateSalary()override;
    void displayInfo()override;
    virtual ~PartTimeEmployee() {}
};

PartTimeEmployee::PartTimeEmployee(int id, const std::string& name,double HourlyRate, int HoursWorked) 
    : Employee(id, name), hourlyRate(HourlyRate), hoursWorked(HoursWorked) { }

double PartTimeEmployee::calculateSalary(){
    return hourlyRate * hoursWorked;
}

void PartTimeEmployee::displayInfo(){
    std::cout << "Name: " << name << " " << "Salary" << calculateSalary() << std::endl;
}