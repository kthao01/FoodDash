//
// Created by kthao on 9/5/2023.
//

#include "Order.h"
#include "MenuItem.h"
#include <string>
#include <vector>
using namespace std;

Order::Order(string orderName){
    this->orderName = orderName;
}

string Order::getorderName() {
    return this->orderName;
}

bool Order::getDeliverStatus(){
    return deliverStatus;
}

vector<menuItem> Order::getItems() {
    return this->itemsOrdered;
}

void Order::addItem(menuItem menuItem){
    itemsOrdered.push_back(menuItem.getItemName());
}

void Order::completeOrder(){
    deliverStatus = true;
}

float Order::totalPrice() {
    float total = 0.0;
    for (menuItem i : itemsOrdered){
        total += i.getItemPrice();
    }
    return total;
}

