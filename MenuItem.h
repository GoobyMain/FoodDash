#include <iostream>
#include <string>

#ifndef FOODDASH_MENUITEM_H
#define FOODDASH_MENUITEM_H


class MenuItem {
private:
    std::string itemName;
    float itemPrice;

    MenuItem(std::string name, float price) {
        itemName = name;
        itemPrice = price;
    };

public:
    std::string getItemName() {}
    float getItemPrice() { return itemPrice; }
};


#endif //FOODDASH_MENUITEM_H
