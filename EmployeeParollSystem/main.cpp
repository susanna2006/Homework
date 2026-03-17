#include <iostream>
//#include "Employee(Base).cpp"
//#include "BonusEligible(interface).hpp"
#include "Freelancer(derived).cpp"
#include "PartTime(derived).cpp"
#include "PayrollSystem(manager).cpp"
#include "FullTime(derived).cpp"

int main(){
    PayrollSystem system;
    system.addEmployee(new FullTimeEmployee(1, "Armen", 800000));
    system.addEmployee(new PartTimeEmployee(2, "Ashot", 80, 2000));
    system.addEmployee(new Freelancer(3, "Alice", 7, 100000));
    system.displayEmployees();
    system.calculateAllSalaries();
    return 0;
}