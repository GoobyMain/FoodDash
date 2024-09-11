//
// Created by Admin on 9/4/2024.
//

#ifndef FOODDASH_DELIVERYORDER_H
#define FOODDASH_DELIVERYORDER_H


#include <string>

#include "Order.h"


class DeliveryOrder : public Order {

private:

    inline static unsigned int nextDeliveryOrderNumber = 1;

    std::string deliveryAddress;
    bool orderDelivered;


public:

    DeliveryOrder( std::string name, std::string address );
    DeliveryOrder( std::string address );

    std::string getDeliveryAddress();
    bool getOrderDelivered();

    void markOrderDelivered();

};


#endif //FOODDASH_DELIVERYORDER_H
