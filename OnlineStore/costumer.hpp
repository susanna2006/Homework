#include <iostream>
#include <vector>
#include "cart.hpp"
#pragma once

class Costumer {
private:
    Cart cart;
public:
    void addToCart(const Product& product){
        cart.add_product(product);
    }

    void removeFromCart(int index){
        cart.remove_product(index);
    }

    void applyDiscountToCart(int persentage){
        cart.Discount_All(persentage);
    }

    void viewCart(){
        cart.display_product();
    }

};
