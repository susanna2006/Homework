#include <iostream>
#include "Employee(Base).cpp"
#include "BonusEligible(interface).hpp"
#pragma once

class FullTimeEmployee : public Employee, public BonusEligible {
private:
    double monthlySalary;
public:
    FullTimeEmployee(int id, const std::string& name, double monthlySalary);
    double calculateSalary()override;
    double calculateBonus()override;
    void displayInfo()override;
    virtual ~FullTimeEmployee() {}
};

FullTimeEmployee::FullTimeEmployee(int id, const std::string& name, double monthlySalary)
    : Employee(id, name), monthlySalary(monthlySalary) {}
double FullTimeEmployee::calculateSalary() {
    return  monthlySalary + calculateBonus();
}

double FullTimeEmployee::calculateBonus(){
    return (monthlySalary * 10) / 100;
}

void FullTimeEmployee::displayInfo(){
    std::cout << "Name: " << name << " " << "Salary" << calculateSalary() << std::endl;
}