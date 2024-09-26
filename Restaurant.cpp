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
    return name;
}

void Restaurant::addMenuItem(MenuItem object) {

    // add menu items
    theMenu.push_back(object);
}

void Restaurant::displayMenu() {
    for (auto & i : theMenu) {

        // print both item name and item price
        std::cout << i.getItemName() << std::endl;
        std:: cout << i.getItemPrice() << std::endl;
    }
}

void Restaurant::makeOrder(Order& order, vector<MenuItem> items) {
    std::cout << order.getOrderName() << std::endl;

    /*
     iterate through items (the vector of items wanting to be ordered)
     If the items matches theMenu name, add it to std::vector<MenuItem> orderItems -> "Order.h";
     */
    for (auto & i : items) {
        for (auto & j : theMenu) {
            if (i.getItemName() == j.getItemName()) {
                order.orderItems.push_back(i);
            };
        };
    };
};


