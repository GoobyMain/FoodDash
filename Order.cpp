#include "Order.h"


// Constructors

// When an order is created it must set (a) a name for the order, (b) a number for the order,
// (c) increment the number for the next order, (d) and set itself to not completed.

Order::Order( const std::string& name ) {

    orderName = name;
    orderTotalPrice = 0;
    orderCompleted = false;

    orderNumber = nextOrderNumber;
    nextOrderNumber++;

}

Order::Order() : Order("No Name Given") {}


// Getters

std::string Order::getOrderName() const {
    return orderName;
}

int Order::getOrderNumber() const {
    return orderNumber;
}

std::vector<MenuItem> Order::getOrderItems() const {
    return orderItems;
}

bool Order::getOrderCompleted() const {
    return orderCompleted;
}


// Class Methods

// Adds a new item to the end of orderItems, and adds its cost to the order total
void Order::addOrderItem( MenuItem item ) {

    orderItems.push_back(item);

    orderTotalPrice += item.getItemPrice();

}

// Returns the price of all the items in the order
double Order::totalPrice() const {
    return orderTotalPrice;
}

// Mark order as complete
void Order::completeOrder() {
    orderCompleted = true;
}

// Display Order Information
void Order::displayOrder() const {

    std::cout << "--Dine-In Order--\n"
              << "Order Number: " << getOrderNumber() << "\n"
              << "Order Name: " << getOrderName() << "\n"
              << "Order Price: " << totalPrice() << "\n"
              << "Items:\n";

    for ( auto & item : getOrderItems() ) {

        std::cout << "    "
                  << std::left << std::setw(26) << item.getItemName()
                  << item.getItemPrice() << "\n";

    }

    std::cout << "\n";

}