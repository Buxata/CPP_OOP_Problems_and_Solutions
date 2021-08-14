#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <set>

class SaleTable
{
private:
    std::set<std::string> _cities;
    std::vector <std::string> _city;
    std::vector <std::string> _item;
    std::vector <double> _price;
    std::vector <int> _quantity;
public:
    ~SaleTable(){
        _cities.clear();
        _city.clear();
        _item.clear();
        _price.clear();
        _quantity.clear();
        
    }

    void addNewEntry(size_t entries){
        for (size_t i = 0; i < entries; i++)
        {  
            std::string line;
            getline(std::cin, line);

            std::string city,item;
            double price;
            int quantity;

            std::stringstream str(line);

            str >> city >> item >> price >>quantity;
            _city.push_back(city);
            _item.push_back(item);
            _price.push_back(price);
            _quantity.push_back(quantity);
            _cities.insert(city);
        }

    }

    void getLastRecord(){
        std::cout <<std::fixed << std::setprecision(2) << _city.back() << " " << _item.back() << " " << _price.back() << " " << _quantity.back();
    }

    void printSales(){
        for (auto city : _cities){
            double total = 0;
            size_t tableSize = _city.size();
            for(size_t i = 0; i<tableSize; i++){
                if(city == _city[i]){
                    total += _price[i]*_quantity[i];
                }
            }
            std::cout <<std::fixed << std::setprecision(2) << city << " -> " << total << "\n";
        }
    }
};

int main(){

    SaleTable saleTable;
    int entries;
    std::cin >> entries;
    std::cin.ignore();
    saleTable.addNewEntry(entries);
    saleTable.printSales();
    return 1;
}