#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<Car> carList;

    // Lisätään olioita listaan
    carList.emplace_back("Toyota", "Corolla", 2018);
    carList.emplace_back("Volvo", "V70", 2015);
    carList.emplace_back("Tesla", "Model 3", 2022);


    cout << "Toinen auto listassa:" << endl;
    carList[1].printData();

    cout << endl;

    cout << "Kaikki autot listassa:" << endl;
    for (Car &car : carList) {
        car.printData();
    }

    return 0;
}
