/**
 * @author Pranay Saha
 * @date 13th of November 2023
 * @details this programmes gets input by the user and calculates the bill amount
*/

#include "Product.h"

// Default constructor
Product::Product() : unitsOrdered(0), unitPrice(0.0), totalCost(0.0) {}

// Parameterized constructor
Product::Product(const string& name, int units, double price)
    : productName(name), unitsOrdered(units), unitPrice(price), totalCost(units * price) {}

// Getter and setter functions for productName
string Product::getProductName() const {
    return productName;
}

void Product::setProductName(const string& name) {
    productName = name;
}

// Getter and setter functions for unitsOrdered
int Product::getUnitsOrdered() const {
    return unitsOrdered;
}

void Product::setUnitsOrdered(int units) {
    unitsOrdered = units;
    totalCost = units * unitPrice; // Update totalCost when unitsOrdered changes
}

// Getter and setter functions for unitPrice
double Product::getUnitPrice() const {
    return unitPrice;
}

void Product::setUnitPrice(double price) {
    unitPrice = price;
    totalCost = unitsOrdered * price; // Update totalCost when unitPrice changes
}

// Getter and setter functions for totalCost
double Product::getTotalCost() const {
    return totalCost;
}

void Product::setTotalCost(double cost) {
    totalCost = cost;
}
