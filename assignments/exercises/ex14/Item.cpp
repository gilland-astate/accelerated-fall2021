#include "Item.h"
#include <iostream>

/**
 * Constructs an item given name, price, and optionally a quantity.
 * 
 * @param name      name of the item
 * @param price     price for one item
 * @param quantity  number of items desired (default 1)
 */
Item::Item(std::string name, double price, int quantity){
    this->name      = name;
    this->price     = price;
    this->quantity  = quantity;
}

std::string Item::getName() const {
    return name;
}

double Item::getPrice() const {
    return price;
}

void Item::setPrice(double newPrice) {
    price = newPrice;
}

void Item::setQuantity(int newQuantity) {
    quantity = newQuantity;
}