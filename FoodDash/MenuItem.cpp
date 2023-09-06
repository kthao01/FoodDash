//
// Created by kthao on 9/5/2023.
//

#include "MenuItem.h"
#include <string>
using namespace std;

menuItem::menuItem(string itemName, float itemPrice) {
    this->itemName = itemName;
    this->itemPrice = itemPrice;
}

menuItem::menuItem(string itemName)
    : menuItem(itemName, 0){};


string menuItem::getItemName(){
    return this->itemName;
}

float menuItem::getItemPrice(){
    return this->itemPrice;
}

void menuItem::setItemName(string name){
    this->itemName = itemName;
}

void menuItem::setItemPrice(float price){
    this->itemPrice = price;
}
