#include <iostream>
#include "Employee(Base).cpp"
#pragma once

class Freelancer : public Employee {
private:
    int projectsCompleted;
    double paymentPerProject;
public:
    Freelancer(int id, const std::string& name, int projectsCompleted, double paymentPerProject);    
    double calculateSalary()override;
    void displayInfo()override;
    virtual ~Freelancer() {}
};

Freelancer::Freelancer(int id, const std::string& name, int projectsCompleted, double paymentPerProject)
    : Employee(id, name), projectsCompleted(projectsCompleted), paymentPerProject(paymentPerProject) { }

double Freelancer::calculateSalary() {
    return projectsCompleted * paymentPerProject;
}

void Freelancer::displayInfo(){
    std::cout << "Name: " << name << " " << "Salary" << calculateSalary() << std::endl;
}