//
// Created by kthao on 9/5/2023.
//

#ifndef FOODDASH_ORDER_H
#define FOODDASH_ORDER_H
#include "MenuItem.h"
#include <string>
#include <vector>


class Order {
private:
    string orderName;
    vector<menuItem> itemsOrdered;  //in c++ you have to make sure vector includes object name hence "menutItem"
    bool deliverStatus;
public:
    Order(): deliverStatus(false){};
    Order(string orderName);
    string getorderName();
    bool getDeliverStatus();
    vector<menuItem> getItems();
    void addItem(menuItem);
    void completeOrder();
    float totalPrice();




};



#endif //FOODDASH_ORDER_H
