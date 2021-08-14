#include "Sale.h"

int main(){

    SaleTable saleTable;
    int entries;
    std::cin >> entries;
    std::cin.ignore();
    saleTable.addNewEntry(entries);
    saleTable.printSales();
    return 1;
}