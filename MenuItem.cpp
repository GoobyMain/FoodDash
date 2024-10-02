#include "MenuItem.h"


// Constructors

MenuItem::MenuItem( const std::string& name, const double& price ) {

    this->itemName = name;
    this->itemPrice = price;

}


// Getters

std::string MenuItem::getItemName() const {
    return itemName;
}

double MenuItem::getItemPrice() const {
    return itemPrice;
}