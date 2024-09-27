//
// Created by Admin on 9/4/2024.
// dont forget to add std::
#include <stdio.h>
#include <string>

#include "Restaurant.h"
#include "MenuItem.h"
#include "DeliveryOrder.h"

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

    /*
    iterate through items (the vector of items wanting to be ordered)
    If the items matches theMenu name, add it to std::vector<MenuItem> orderItems -> "Order.h";
    makes theMenu
    */

    for (auto & i : items) {
        for (auto & j : theMenu) {
            if (i.getItemName() == j.getItemName()) {
                order.orderItems.push_back(i);
            };
        };
    };
};

void Restaurant::makeDeliveryOrder(Order& order, vector<MenuItem> items, string address) {
    //Make DeliveryMenu
    for (auto & i : items) {
        for (auto & j : theMenu) {
            if (i.getItemName() == j.getItemName()) {
                order.orderItems.push_back(i);
            };
        };
    };
};

void Restaurant::markComplete(Order& order) {
    order.completeOrder();
    completedOrders.push_back(order); // holds all orders that are marked completed ? ?
}

void Restaurant::markDelivered(DeliveryOrder& deOrder) {
    deOrder.markOrderDelivered();
}

double Restaurant::totalRevenue() {
    // All completed orders total Revenue
    double totalRevenue = 0;
    for (auto & order : completedOrders) {
        totalRevenue += order.totalPrice();
    }
    return totalRevenue;
};

void Restaurant::displayUnfilledOrders() {

}



