#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Product {
private:
    string productName;
    int unitsOrdered;
    double unitPrice;
    double totalCost;

public:
    // Constructors
    Product();
    Product(const string& name, int units, double price);

    // Getter and setter functions
    string getProductName() const;
    void setProductName(const string& name);

    int getUnitsOrdered() const;
    void setUnitsOrdered(int units);

    double getUnitPrice() const;
    void setUnitPrice(double price);

    double getTotalCost() const;
    void setTotalCost(double cost);
};

#endif // PRODUCT_H
