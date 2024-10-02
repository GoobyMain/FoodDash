#include "DeliveryOrder.h"


// Constructors

// When a delivery order is created it must set an address for the delivery,
// set itself to not delivered, as well as everything else for a normal order.
DeliveryOrder::DeliveryOrder( const std::string& name, const std::string& address ) {

    orderName = name;
    orderCompleted = false;

    deliveryAddress = address;
    orderDelivered = false;

    orderNumber = nextDeliveryOrderNumber;
    nextDeliveryOrderNumber++;

}

DeliveryOrder::DeliveryOrder( const std::string& address ) : DeliveryOrder("No Name Given", address) {}


// Getters

std::string DeliveryOrder::getDeliveryAddress() const {
    return deliveryAddress;
}

bool DeliveryOrder::getOrderDelivered() const {
    return orderDelivered;
}


// Class Methods

// Mark order as delivered
void DeliveryOrder::markOrderDelivered() {
    orderDelivered = true;
}

// Display Order Information
void DeliveryOrder::displayOrder() const {

    std::cout << "--Delivery Order--\n"
              << "Order Number: " << getOrderNumber() << "\n"
              << "Order Name: " << getOrderName() << "\n"
              << "Delivery Address: " << getDeliveryAddress() << "\n"
              << "Order Price: " << totalPrice() << "\n"
              << "Items:\n";

    for ( auto & item : getOrderItems() ) {

        std::cout << "    "
                  << std::left << std::setw(26) << item.getItemName()
                  << item.getItemPrice() << "\n";

    }

    std::cout << "\n";

}