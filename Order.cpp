//
// Created by Admin on 9/4/2024.
//

#include "Order.h"


Order::nextOrderNumber = 1;

Order::Order(std::string ordererName) {

        ordererName = ordererName;

        orderNumber = this->nextOrderNumber + 1;
        orderNumber++;
}

Order::Order() : Order("No Name Given") {}


std::string Order::getOrderName() {
    return ordererName;
}
int getOrderNumber();
std::vector<MenuItem> getOrderItems();
bool getOrderCompleted();

float totalPrice();
void completeOrder();