#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

    class SmartProduct {
    private:
        int productId;
        string productName;
        int unitsOrdered;
        double unitPrice;
        double totalCost;

    public:
        // Constructors
        SmartProduct();
        SmartProduct(int productId, const string& name, int units, double price);

        // Getter and setter functions
        int getProductId() const;
        void setProductId(int id);

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
