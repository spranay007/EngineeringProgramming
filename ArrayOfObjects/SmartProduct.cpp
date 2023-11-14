/**
 * @author Pranay Saha
 * @date 13th of November 2023
 * @details this programmes gets input by the user and calculates the bill amount a smarter variation of the ordering system
*/
#include "SmartProduct.h"

// Default constructor
SmartProduct::SmartProduct() : productId(0), unitsOrdered(0), unitPrice(0.0), totalCost(0.0) {}

// Parameterized constructor
SmartProduct::SmartProduct(int id, const string& name, int units, double price)
    : productId(id), productName(name), unitsOrdered(units), unitPrice(price), totalCost(units * price) {}

// Getter and setter functions for productId
int SmartProduct::getProductId() const {
    return productId;
}

void SmartProduct::setProductId(int id) {
    productId = id;
}

// Getter and setter functions for productName
string SmartProduct::getProductName() const {
    return productName;
}

void SmartProduct::setProductName(const string& name) {
    productName = name;
}
// Getter and setter functions for unitsOrdered
int SmartProduct::getUnitsOrdered() const {
    return unitsOrdered;
}

void SmartProduct::setUnitsOrdered(int units) {
    unitsOrdered = units;
    totalCost = units * unitPrice; // Update totalCost when unitsOrdered changes
}
// Getter and setter functions for unitPrice
double SmartProduct::getUnitPrice() const {
    return unitPrice;
}

void SmartProduct::setUnitPrice(double price) {
    unitPrice = price;
    totalCost = unitsOrdered * price; // Update totalCost when unitPrice changes
}

// Getter and setter functions for totalCost
double SmartProduct::getTotalCost() const {
    return totalCost;
}

void SmartProduct::setTotalCost(double cost) {
    totalCost = cost;
}