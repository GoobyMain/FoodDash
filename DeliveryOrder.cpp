//
// Created by Admin on 9/4/2024.
//

#include "DeliveryOrder.h"


// Constructors

// When a delivery order is created it must set an address for the delivery,
// set itself to not delivered, as well as everything else for a normal order.
DeliveryOrder::DeliveryOrder( std::string name, std::string address ) : Order(name) {

    deliveryAddress = address;
    orderDelivered = false;

}

DeliveryOrder::DeliveryOrder( std::string address ) : DeliveryOrder("No Name Given", address) {}


// Getters
std::string DeliveryOrder::getDeliveryAddress() {
    return deliveryAddress;
}
bool DeliveryOrder::getOrderDelivered() {
    return orderDelivered;
}


// Class Methods

// Mark order as delivered
void DeliveryOrder::markOrderDelivered() {
    orderDelivered = true;
}