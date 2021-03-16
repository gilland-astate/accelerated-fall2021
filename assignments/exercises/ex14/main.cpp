#include <iostream>
#include <vector>
#include "Item.h"

int main(){

    std::vector<Item> cart;
    std::string input;
    std::cout << "Enter the name of the item: ";
    getline(std::cin, input); 

    while (input != " ") {
        Item tempItem{input,1.00};
        std::cout << "Enter the price of the item: ";
        std::cin >> input;
        tempItem.setPrice(std::stof(input.c_str()));

        std::cout << "Enter the quantity of the item: ";
        std::cin >> input;
        tempItem.setQuantity(std::stoi(input.c_str()));

        cart.push_back(tempItem);

        std::cout << "Enter the name of the item: ";
        std::cin.ignore(255, '\n');
        getline(std::cin, input); 
    }

    std::cout << "The items in your cart are:\n";
    for ( Item item : cart ) {
        std::cout << '\t' << item.getName() << '\n';
        std::cout << "\tPrice: $  " << item.getPrice()    << '\n';
        std::cout << "\tQuantity: " << item.getQuantity() << '\n';

    }

    return 0;
}
