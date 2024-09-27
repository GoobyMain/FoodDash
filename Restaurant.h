//
// Created by Admin on 9/4/2024.
//

#include "Order.h"
#include "MenuItem.h"
#include "DeliveryOrder.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_map>
using std::vector, std::string, std::unordered_map;
#ifndef FOODDASH_RESTAURANT_H
#define FOODDASH_RESTAURANT_H


class Restaurant {
    private:
    string name;
    vector<MenuItem> theMenu;
    vector<Order> completedOrders;
    vector<Order> theOrders;


    public:
    Restaurant(string stand);
    string getName();

    // new items can be added whenever
    void addMenuItem(MenuItem object);

    //Only names that match items on the restaurants menu should be added
    // Order Objects take MenuItem objects and not just the same copy.

    void makeOrder(Order&, vector<MenuItem>);

    //does what makeOrder do, but also takes an address and creates the
    //correct type of deliveryOrder object and fills data members appropriately
    void makeDeliveryOrder(Order&, vector<MenuItem>, string address);

    // takes both order and dOrder and mark complete
    void markComplete(Order&);

    // takes dOrder and mark delivered
    void markDelivered(DeliveryOrder&);

    // return total revenue from all orders marked complete
    double totalRevenue();

    // display the name of the restaurant and menu item and prices available
    void displayMenu();

    // display details for all orders yet not completed
    void displayUnfilledOrders();
};


#endif //FOODDASH_RESTAURANT_H
