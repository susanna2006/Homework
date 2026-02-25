#include <iostream>
#include <string>
#include <vector>
#include "product.hpp"
#include "cart.hpp"
#include "costumer.hpp"

int main() {
    Product laptop("Laptop", 1000);
    Product headphones("Headphones", 200);
    Product mouse("Mouse", 50);

    Costumer customer;

    customer.addToCart(laptop);
    customer.addToCart(headphones);
    customer.addToCart(mouse);

    customer.viewCart();

    // 10% 
    customer.applyDiscountToCart(10);

    std::cout << "\nAfter 10% discount:\n";
    customer.viewCart();

    std::cout << "\nAfter removing product 1:\n";
    customer.viewCart();

    return 0;
}
