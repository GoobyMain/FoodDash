//
// Created by Admin on 9/4/2024.
//

#ifndef FOODDASH_ORDER_H
#define FOODDASH_ORDER_H


#include <string>
#include <vector>

#include "MenuItem.h"


class Order {

private:

    inline static int nextOrderNumber = 0; // inline allows in-class instantiation instead of out of class instantiation.
    std::string ordererName;
    unsigned int orderNumber;
    std::vector<MenuItem> orderItems;
    bool orderCompleted;


public:

    Order(std::string ordererName);
    Order();


    std::string getOrderName();
    int getOrderNumber();
    std::vector<MenuItem> getOrderItems();
    bool getOrderCompleted();

    float totalPrice();
    void completeOrder();


};



#endif //FOODDASH_ORDER_H
