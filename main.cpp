// Made by Gavin Walker and Tong Xiong

#include <iostream>


#include "MenuItem.h" //including .cpp causes an error because when it includes the cpp file, it runs all the code in it, meaning it ran the declarations twice
#include "Order.h"
#include "Restaurant.h"

int main() {
   Order order1("Tong");
   MenuItem item1("pizza", 9);
   MenuItem item2("hamburger", 10);
   Restaurant restaurant("Freddy FazBear");
   restaurant.getName();
   restaurant.addMenuItem(item1);
   restaurant.addMenuItem(item2);
   restaurant.displayMenu();


}

// :)
