

#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;
class Car
{
private:
    string _brand,_model;
    int _year;
public:
    Car(string brand, string model, int year){
        _brand = brand;
        _model = model;
        _year = year;
    }

    string GetBrand() const {
        return _brand;
    };
    string GetModel() const {
        return _model;
    }
    int GetYear() const {
        return _year;
    }
};

#endif // !CAR_H