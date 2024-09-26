//
// Created by Admin on 9/4/2024.
// dont forget to add std::
#include <stdio.h>
#include <string>

#include "Restaurant.h"
#include "MenuItem.h"

Restaurant::Restaurant(string name) {
    this->name = name;
}

string Restaurant::getName() {
    std::cout << this->name << std::endl;
    return "";
    // return name;
}

void Restaurant::addMenuItem(MenuItem object) {
    theMenu.push_back(object);
}

void Restaurant::displayMenu() {

    for (auto & i : theMenu) {
        std::cout << i.getItemName() << std::endl;
        std:: cout << i.getItemPrice() << std::endl;
    }
}


