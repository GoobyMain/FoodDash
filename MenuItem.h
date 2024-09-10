#include <iostream>
#include <string>

#ifndef FOODDASH_MENUITEM_H
#define FOODDASH_MENUITEM_H


class MenuItem {
private:
    std::string itemName;
    float itemPrice{};

public:
    MenuItem(const std::string& itemName, float itemPrice);

    std::string getItemName();
    float getItemPrice();
};


#endif //FOODDASH_MENUITEM_H