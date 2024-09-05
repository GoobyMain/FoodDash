//
// Created by Admin on 9/4/2024.
//

#include "Order.h"



Order::Order(std::string ordererName) {

        ordererName = ordererName;

        orderNumber = this->nextOrderNumber;
        this->nextOrderNumber++;
}

Order::Order() : Order("No Name Given") {}


std::string Order::getOrderName() {
    return ordererName;
}
int getOrderNumber() {
    return orderNumber;
}
std::vector<MenuItem> getOrderItems();
bool getOrderCompleted();

float totalPrice();
void completeOrder();


unsigned int Order::nextOrderNumber = 1;