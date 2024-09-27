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
    */

    for (auto & i : items) {
        for (auto & j : theMenu) {
            if (i.getItemName() == j.getItemName()) {
                order.orderItems.push_back(i);
            };
        };
    };
    theOrders.push_back(order);
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
    theOrders.push_back(order);
};

void Restaurant::markComplete(Order& order) {
    string name = order.getOrderName();
    for (auto & currentOrder : theOrders) {
        if (name == currentOrder.getOrderName()) {
            currentOrder.completeOrder();
        }
    }
}

void Restaurant::markDelivered(DeliveryOrder& deOrder) {
    string name = deOrder.getOrderName();
    for (auto & currentOrder : theOrders) {
        if (name == currentOrder.getOrderName()) {
            currentOrder.completeOrder();
        }
    }
}

double Restaurant::totalRevenue() {
    // All completed orders total Revenue
    double totalRevenue = 0;
    for (auto & order : theOrders) {
        if (order.getOrderCompleted()) {
            totalRevenue += order.totalPrice();
        }
    }
    return totalRevenue;
};

void Restaurant::displayUnfilledOrders() {
    for (auto & order : theOrders) {
        if (order.getOrderCompleted() == false) {
            std::cout << "Order Name: " << order.getOrderName() << std::endl
            << "Order Number: " << order.getOrderNumber() << std::endl
            << "Price: " << order.totalPrice() << std::endl;
            for (auto & item : order.getOrderItems()) {
                std::cout << "Item Name: " << item.getItemName() << std::endl;
            }
            return;
        }
    }
    std::cout << "all orders completed";
}



