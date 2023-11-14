#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <iostream>
using namespace std;

class Warehouse {
private:
    int totalGoods;

public:
    Warehouse(int initialGoods);
    int getTotalGoods() const;
    void addGoods();
    void removeGoods();
};

#endif // WAREHOUSE_H
