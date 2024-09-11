//
// Created by Admin on 9/4/2024.
//

#ifndef FOODDASH_DELIVERYORDER_H
#define FOODDASH_DELIVERYORDER_H


#include <string> // don't technically have to do this because order.h is included and already includes the string library, but I like putting it here so you can tell it's going to be used in the class

#include "Order.h"


class DeliveryOrder : public Order {

private:

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
