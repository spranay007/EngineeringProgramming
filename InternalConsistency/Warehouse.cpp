/**
 * @author Pranay Saha
 * @date 13th of November 2023
 * @details this programmes emulates a warehouse where the user can add and remove goods and also check for goods at a given time
*/

#include "Warehouse.h"

// Constructor
Warehouse::Warehouse(int initialGoods) : totalGoods(initialGoods) {}

// Getter for totalGoods
int Warehouse::getTotalGoods() const {
    return totalGoods;
}

// Function to add goods to the warehouse
void Warehouse::addGoods() {
    int additionalGoods;
    cout << "How many goods would you like to add: ";
    cin >> additionalGoods;

    if (additionalGoods > 0) {
        totalGoods += additionalGoods;
        cout << additionalGoods << " goods added to the warehouse.\n";
    } else {
        cout << "Invalid input. Please enter a positive number of goods to add.\n";
    }
}

// Function to remove goods from the warehouse
void Warehouse::removeGoods() {
    int goodsToRemove;
    cout << "How many goods would you like to remove: ";
    cin >> goodsToRemove;

    if (goodsToRemove > 0 && goodsToRemove <= totalGoods) {
        totalGoods -= goodsToRemove;
        cout << goodsToRemove << " goods removed from the warehouse.\n";
    } else if (goodsToRemove > totalGoods) {
        cout << "You do not have that many goods!\n";
    } else {
        cout << "Invalid input. Please enter a positive number of goods to remove.\n";
    }
}
