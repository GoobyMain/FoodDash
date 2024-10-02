#ifndef FOODDASH_ORDER_H
#define FOODDASH_ORDER_H


#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

#include "MenuItem.h"


class Order {

protected:

    inline static unsigned int nextOrderNumber = 1;

    std::string orderName;
    unsigned int orderNumber;
    std::vector<MenuItem> orderItems;
    double orderTotalPrice;
    bool orderCompleted;


public:

    Order( const std::string& name );
    Order();

    std::string getOrderName() const;
    int getOrderNumber() const;
    std::vector<MenuItem> getOrderItems() const;
    bool getOrderCompleted() const;

    void addOrderItem( MenuItem item );
    double totalPrice() const;
    void completeOrder();
    virtual void displayOrder() const;

};


#endif //FOODDASH_ORDER_H