//
// Created by kthao on 9/5/2023.
//

#ifndef FOODDASH_MENUITEM_H
#define FOODDASH_MENUITEM_H
#include <string>
using namespace std;


class menuItem {
private:
    string itemName;
    float itemPrice;
public:
    menuItem(string itemName, float itemPrice);
    string getItemName();
    float getItemPrice(); 
    void setItemName(string itemName);
    void setItemPrice(float price); 
    menuItem(string itemName);
};





#endif //FOODDASH_MENUITEM_H
