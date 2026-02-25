#include <iostream>
#include <vector>
#include "product.hpp"
#pragma once

class Cart {
private:
    std::vector<Product> products;
public:
    void add_product(const Product& product){
        products.push_back(product);
    }

    void remove_product(int index) {
        if(index >= 0 && index < products.size()){
            products.erase(products.begin() + index);
            std::cout << "Product removed successfully.\n";
        } else {
            std::cout << "Invalid index!\n";
        }
    }


    void display_product(){
        std::cout << "Product info" << std::endl;
        for(int i = 0; i < products.size(); ++i){
            std::cout << products[i].product_info() << std::endl;
        }
        double total = 0;
        for(int i = 0; i < products.size(); ++i){
            total += products[i].getPrice();
        }
        std::cout << "Total price: " << total;
    }

    void Discount_All(int persentage){
        for(int i = 0; i < products.size(); ++i){
            products[i].discount(persentage);
        }
    }

};

