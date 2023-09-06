//
// Created by kthao on 9/5/2023.
//

#ifndef FOODDASH_DELIVERYORDER_H
#define FOODDASH_DELIVERYORDER_H
#include "Order.h"
#include <string>

using namespace std;


class DeliveryOrder : public Order  {
private:
    string adress;
public:
    DeliveryOrder(string adress)
    DeliveryOrder(string itemName, float itemPrice, string address);
    virtual bool getDeliverStatus();
    virtual void completeOrder();



};


#endif //FOODDASH_DELIVERYORDER_H
