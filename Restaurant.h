#ifndef FOODDASH_RESTAURANT_H
#define FOODDASH_RESTAURANT_H


#include <string>
#include <vector>
#include <iostream>

#include "Order.h"
#include "MenuItem.h"
#include "DeliveryOrder.h"


class Restaurant {

private:
    
    std::string name;
    std::vector<MenuItem> menu;
    std::vector<Order*> orders;
    double restaurantTotalRevenue;


public:

    Restaurant( const std::string& name );

    std::string getName();

    void addMenuItem( MenuItem item );

    Order* makeOrder( std::string orderName );
    Order* makeOrder();
    DeliveryOrder* makeDeliveryOrder( std::string orderName, std::string address );
    DeliveryOrder* makeDeliveryOrder( std::string address );

    void markComplete( Order*& );
    void markComplete( DeliveryOrder*& );
    void markDelivered( DeliveryOrder*& );

    double totalRevenue() const;
    void displayMenu() const;
    void displayIncompleteOrders() const;
    void displayUndeliveredOrders() const;

};


#endif //FOODDASH_RESTAURANT_H