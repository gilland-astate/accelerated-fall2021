#ifndef ITEM_H
#define ITEM_H

#include <string>

// ----------

class Item {
  public:
    Item(std::string name, double price, int quantity=1);
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const { return quantity; }
    void setPrice(double newPrice);
    void setQuantity(int newQuantity);
  private:
    std::string name;
    double      price;
    int         quantity;
};

#endif