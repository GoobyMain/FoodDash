// Made by Gavin Walker and Tong Xiong


#include <string>
#include <iostream>

#include "MenuItem.h"
#include "Order.h"
#include "DeliveryOrder.h"
#include "Restaurant.h"


int main() {

    std::cout << "\n";

    Restaurant chickenRestaurant("Fried Chicken Place");
    Restaurant caveRestaurant("Suspicious Cave");

    //{

        MenuItem chickenSandwich("Chicken Sandwich", 12.99);
        MenuItem fries("Fries", 4.99);
        MenuItem softDrink("Soda", 2.49);
        MenuItem grilledBulborb("Grilled Bulborb", 10000.99);

        chickenRestaurant.addMenuItem(chickenSandwich);
        chickenRestaurant.addMenuItem(fries);
        chickenRestaurant.addMenuItem(softDrink);

        caveRestaurant.addMenuItem(grilledBulborb);
        caveRestaurant.addMenuItem(softDrink);

    //}

    chickenRestaurant.displayMenu();
    caveRestaurant.displayMenu();


    Order* tongsOrder = chickenRestaurant.makeOrder("Tong");
    tongsOrder->addOrderItem(chickenSandwich);
    tongsOrder->addOrderItem(softDrink);

    Order* gavinsOrder = chickenRestaurant.makeOrder("Gavin");
    gavinsOrder->addOrderItem(softDrink);
    gavinsOrder->addOrderItem(softDrink);
    gavinsOrder->addOrderItem(softDrink);

    Order* olimarsOrder = caveRestaurant.makeOrder("Olimar");
    olimarsOrder->addOrderItem(softDrink);

    DeliveryOrder* louiesOrder = caveRestaurant.makeDeliveryOrder( "Louie", "Hocatate Ship, Awakening Wood, PNF-404" );
    louiesOrder->addOrderItem(grilledBulborb);
    louiesOrder->addOrderItem(softDrink);

    chickenRestaurant.displayIncompleteOrders();
    chickenRestaurant.displayUndeliveredOrders();
    caveRestaurant.displayIncompleteOrders();
    caveRestaurant.displayUndeliveredOrders();


    chickenRestaurant.markComplete(tongsOrder);
    caveRestaurant.markComplete(louiesOrder);
    std::cout << "--Completing Tong's order, Louie's order--\n\n";

    chickenRestaurant.displayIncompleteOrders();
    chickenRestaurant.displayUndeliveredOrders();
    caveRestaurant.displayIncompleteOrders();
    caveRestaurant.displayUndeliveredOrders();


    caveRestaurant.markComplete(olimarsOrder);
    caveRestaurant.markDelivered(louiesOrder);
    std::cout << "--Completing Olimar's order, delivering Louie's Order--\n\n";

    chickenRestaurant.displayIncompleteOrders();
    chickenRestaurant.displayUndeliveredOrders();
    caveRestaurant.displayIncompleteOrders();
    caveRestaurant.displayUndeliveredOrders();

}

/*
// Made by Gavin Walker and Tong Xiong

#include <iostream>
#include <string>

#include "MenuItem.h"
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
    restaurant.displayIncompleteOrders();


}
// restaurant.makeOrder(order2, vector<MenuItem>{item1, item2});
*/