#include "Restaurant.h"


// Constructors

Restaurant::Restaurant( const std::string& name ) {

    this->name = name;
    restaurantTotalRevenue = 0;

}


// Getters

std::string Restaurant::getName() {
    return name;
}


// Class Methods

void Restaurant::addMenuItem( MenuItem item ) {
    menu.push_back(item);
}

// Create new order using Order constructor, add it to restaurant orders,
// and return the address for that order
Order* Restaurant::makeOrder( std::string orderName ) {

    Order* tempOrder = new Order(orderName);

    orders.push_back(tempOrder);

    return tempOrder;

};

Order* Restaurant::makeOrder() {

    Order* tempOrder = new Order();

    orders.push_back(tempOrder);

    return tempOrder;

};

DeliveryOrder* Restaurant::makeDeliveryOrder( std::string orderName, std::string address ) {

    DeliveryOrder* tempOrder = new DeliveryOrder(orderName, address);

    orders.push_back(tempOrder);

    return tempOrder;

};

DeliveryOrder* Restaurant::makeDeliveryOrder( std::string address ) {

    DeliveryOrder* tempOrder = new DeliveryOrder(address);

    orders.push_back(tempOrder);

    return tempOrder;

};

// marks an order as complete, adds the cost of the order to the restaurant revenue
void Restaurant::markComplete( Order*& order ) {

    order->completeOrder();

    restaurantTotalRevenue += order->totalPrice();

}

void Restaurant::markComplete( DeliveryOrder*& order ) {
    order->completeOrder();
}

// marks a delivery order as delivered, adds the cost of the order to the restaurant revenue
void Restaurant::markDelivered( DeliveryOrder*& order ) {

    order->markOrderDelivered();

    restaurantTotalRevenue += order->totalPrice();

}

// return total revenue from all orders marked complete
double Restaurant::totalRevenue() const {
    return restaurantTotalRevenue;
};

// display the name of the restaurant and menu item and prices available
void Restaurant::displayMenu() const {

    // print restaurant name once
    std::cout << this->name << " Menu:\n";

    // print name and price for all items in menu
    for (auto & item : menu) {

        std::cout << std::left << std::setw(30) << item.getItemName()
                  << item.getItemPrice() << "\n";

    }

    std::cout << "\n";

}

// display details for all orders yet not completed
void Restaurant::displayUnfilledOrders() const {

    // track if orders contains any incomplete orders
    bool incompleteOrdersExist = false;


    // print restaurant name once
    std::cout << this->name << " Unfulfilled Orders:\n\n";

    // for each incomplete order, display details
    for ( auto & order : orders ) {

        if ( order->getOrderCompleted() ) {

            continue;

        } else {

            incompleteOrdersExist = true;

            order->displayOrder();

        }

    }

    // print this since nothing prints when there's no incomplete orders
    if ( !incompleteOrdersExist ) {
        std::cout << "All orders completed\n\n";
    }

}