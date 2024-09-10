//
// Created by Admin on 9/4/2024.
//

#include "Order.h"


// Constructors

// When an order is created it must set (a) a name for the order, (b) a number for the order,
// (c) increment the number for the next order, (d) and set itself to not completed.

Order::Order(std::string Name) {
    ordererName = Name;
    orderCompleted = false;

    orderNumber = nextOrderNumber;
    nextOrderNumber++;
    std::cout << ordererName << std::endl;
    std::cout << nextOrderNumber << std::endl; // static cant use this->nextOrderNumber bc, static belongs to all class, not a specific instance
}

Order::Order() : Order("No Name Given") {}


// Getters
std::string Order::getOrderName() {
    return ordererName;
}
int Order::getOrderNumber() {
    return orderNumber;
}
std::vector<MenuItem> Order::getOrderItems() {
    return orderItems;
}
bool Order::getOrderCompleted() {
    return orderCompleted;
}


// Class Functions

// Returns the price of all the items in the order added together
float Order::totalPrice() {

    float runningTotal = 0;

     // Iterate through each item in the order, add the price of the item to running total
     for (MenuItem &currentItem : orderItems) {

         runningTotal += currentItem.getItemPrice();

     }

     return runningTotal;

}

// Mark order as complete
void Order::completeOrder() {
    orderCompleted = true;
}
