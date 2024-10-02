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

    DeliveryOrder( const std::string& name, const std::string& address );
    DeliveryOrder( const std::string& address );

    std::string getDeliveryAddress() const;
    bool getOrderDelivered() const;

    void markOrderDelivered();
    void displayOrder() const override;

};


#endif //FOODDASH_DELIVERYORDER_H