#include <iostream>
#pragma once

class Product {
    std::string m_name;
    double m_price;
public:
    Product(const std::string& name,const double& price) 
        : m_name(name), m_price(price) {} 

    double getPrice(){
        return m_price;
    }
    std::string getName(){
        return m_name;
    }

    std::string product_info(){
        return m_name + " - $" + std::to_string(m_price);
    }

    void discount(int percentage){
        percentage = 100 - percentage;
        double result = (m_price * percentage) / 100;
        m_price = result;

    }
};

