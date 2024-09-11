//
// Created by Admin on 9/4/2024.
//

#ifndef FOODDASH_ORDER_H
#define FOODDASH_ORDER_H


#include <string>
#include <vector>

#include "MenuItem.h"


class Order {

protected:

    inline static unsigned int nextOrderNumber = 1;

    std::string ordererName;
    unsigned int orderNumber;
    bool orderCompleted;


public:

    std::vector<MenuItem> orderItems;

    Order( std::string name );
    Order();

    std::string getOrderName();
    int getOrderNumber();
    std::vector<MenuItem> getOrderItems();
    bool getOrderCompleted();

    float totalPrice();
    void completeOrder();

};


#endif //FOODDASH_ORDER_H
