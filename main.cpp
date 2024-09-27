// Made by Gavin Walker and Tong Xiong

#include <iostream>
#include <string>


#include "MenuItem.h" //including .cpp causes an error because when it includes the cpp file, it runs all the code in it, meaning it ran the declarations twice
#include "Order.h"
#include "Restaurant.h"
#include "DeliveryOrder.h"

int main() {
   Order order1("Tong");
   Order order2("Ten");
   MenuItem item1("pizza", 9);
   MenuItem item2("hamburger", 10);
   Restaurant restaurant("Freddy FazBear");
   std::cout << restaurant.getName() << "\n";
   restaurant.addMenuItem(item1);
   restaurant.addMenuItem(item2);
   restaurant.makeOrder(order1, vector<MenuItem>{item1, item2});
    restaurant.makeOrder(order2, vector<MenuItem>{item1, item2});
    DeliveryOrder order3("4949 N Raisin");
   restaurant.markComplete(order1);
    restaurant.markComplete(order2);
   // restaurant.makeDeliveryOrder(order3, vector<MenuItem>{item1, item2}, "4949 N Raisin");
   // for (auto i : order1.getOrderItems()) {
   //    std::cout << i.getItemName() << std::endl;
   // }
   // for (auto i : order1.getOrderItems()) {
   //    std::cout << i.getItemName() << std::endl;
   restaurant.markDelivered(order3);
   std::cout << restaurant.totalRevenue() << std::endl;
    restaurant.displayUnfilledOrders();


}
// restaurant.makeOrder(order2, vector<MenuItem>{item1, item2});


// :)
