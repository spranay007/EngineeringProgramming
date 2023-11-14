/**
 * @author Pranay Saha
 * @date 13th of November 2023
 * @details this programmes gets input by the user and calculates the bill amount
*/

#include "Product.h"

// Function to calculate and store the total cost of the order in the Product object
void calcTotal(Product& product) {
    double totalCost = product.getUnitsOrdered() * product.getUnitPrice();
    product.setTotalCost(totalCost);
}

int main(void) {
    // Create an instance of the Product object
    Product myProduct;

    cout << "Please enter the name of the product you wish to order: ";
    string productName;
    getline(cin, productName);
    myProduct.setProductName(productName);

    cout << "Please enter the number of units of product you wish to order: ";
    int units;
    cin >> units;
    myProduct.setUnitsOrdered(units);

    // Set the price of the Product object
    myProduct.setUnitPrice(9.99);

    // Calculate and store the total price of the order
    calcTotal(myProduct);

    // Output the order statement
    cout << "\nYou ordered:\n";
    cout << "Name: " << myProduct.getProductName() << endl;
    cout << "Units: " << myProduct.getUnitsOrdered() << endl;
    cout << "Price: $" << fixed << setprecision(2) << myProduct.getUnitPrice() << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << myProduct.getTotalCost() << endl;

    return 0;
}
