// Made by Gavin Walker and Tong Xiong

#include <iostream>
#include <string>


#include "MenuItem.h" //including .cpp causes an error because when it includes the cpp file, it runs all the code in it, meaning it ran the declarations twice
#include "Order.h"
#include "Restaurant.h"

int main() {
   Order order1("Tong");
   Order order2("Ten");
   MenuItem item1("pizza", 9);
   MenuItem item2("hamburger", 10);
   Restaurant restaurant("Freddy FazBear");
   std::cout << restaurant.getName() << std::endl;
   restaurant.addMenuItem(item1);
   restaurant.addMenuItem(item2);
   restaurant.displayMenu();
   restaurant.makeOrder(order1, vector<MenuItem>{item1, item2});
   for (auto i : order1.getOrderItems()) {
      std::cout << i.getItemName() << std::endl;
   }// restaurant.makeOrder(order2, vector<MenuItem>{item1, item2});



}

// :)
