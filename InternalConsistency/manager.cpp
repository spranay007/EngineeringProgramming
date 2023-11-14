/**
 * @author Pranay Saha
 * @date 13th of November 2023
 * @details this programmes emulates a warehouse where the user can add and remove goods and also check for goods at a given time
*/

#include "Warehouse.h"

int main() {
    Warehouse warehouse(0); // Creating an instance of Warehouse with initial goods set to 0

    int choice;

    do {
        // Display menu
        cout << "\nPlease select from the following options:\n";
        cout << "1. Add goods\n";
        cout << "2. Remove goods\n";
        cout << "3. Output total goods\n";
        cout << "4. Quit\n";
        cout << "Choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                warehouse.addGoods();
                break;
            case 2:
                warehouse.removeGoods();
                break;
            case 3:
                cout << "There are " << warehouse.getTotalGoods() << " goods in the warehouse."<< endl;
                break;
            case 4:
                cout << "Good bye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}
