//
// Created by Admin on 9/4/2024.
//

#include <string>

#include "MenuItem.h"


// Constructors
MenuItem::MenuItem(const std::string& name, float price) {

    this->itemName = name;
    this->itemPrice = price;

}

// Getters
std::string MenuItem::getItemName() {
    return itemName;
}
float MenuItem::getItemPrice() {
    return itemPrice;
}


