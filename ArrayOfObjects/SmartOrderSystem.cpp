/**
 * @author Pranay Saha
 * @date 13th of November 2023
 * @details this programmes gets input by the user and calculates the bill amount a smarter variation of the ordering system
*/
#include "SmartProduct.h"

// Function to calculate and return the total cost of all products
double calcTotal(SmartProduct* products[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += products[i]->getTotalCost();
    }
    return total;
}

int main(void) {
    cout << "How many products do you wish to order? ";
    int numProducts;
    cin >> numProducts;

    // Creating an array of SmartProduct object pointers
    SmartProduct* productArray[numProducts];

    for (int i = 0; i < numProducts; ++i) {
        cout << "\nEnter details for Product " << i + 1 << ":\n";

        cout << "Please enter the name of the product you wish to order: ";
        string productName;
        cin.ignore();
        getline(cin, productName);

        cout << "Please enter the number of units of product you wish to order: ";
        int units;
        cin >> units;

        // Dynamically instantiate a new Product object with a unique product ID
        productArray[i] = new SmartProduct(i + 1, productName, units, 9.99);
    }

    // Output information regarding the products ordered and the sum total
    cout << "\nYou ordered:\n";
    for (int i = 0; i < numProducts; ++i) {
        cout << "ID: " << productArray[i]->getProductId() << endl;
        cout << "Name: " << productArray[i]->getProductName() << endl;
        cout << "Units: " << productArray[i]->getUnitsOrdered() << endl;
        cout << "Price: $" << fixed << setprecision(2) << productArray[i]->getUnitPrice() << endl;
        cout << "Total Cost: $" << fixed << setprecision(2) << productArray[i]->getTotalCost() << endl;
    }

    // Calculate and output the sum total
    double sumTotal = calcTotal(productArray, numProducts);
    cout << "\nThe total cost of your order is: $" << fixed << setprecision(2) << sumTotal << endl;

    // Free dynamically allocated memory
    for (int i = 0; i < numProducts; ++i) {
        delete productArray[i];
    }

    return 0;
}
