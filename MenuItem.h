#ifndef FOODDASH_MENUITEM_H
#define FOODDASH_MENUITEM_H


#include <iostream>
#include <string>


class MenuItem {

private:

    std::string itemName;
    double itemPrice;


public:

    MenuItem( const std::string& name, const double& price );

    std::string getItemName() const;
    double getItemPrice() const;

};


#endif //FOODDASH_MENUITEM_H