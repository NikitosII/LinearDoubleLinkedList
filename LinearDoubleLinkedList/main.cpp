#include <iostream> 
#include <string> 
#include"LinearDoubleLinkedList.h" 
using namespace std;

int main() {
    DoubleLinkedList cityList;
    DoubleLinkedList regionList;

    string cityName, regionName;
    int population;
    int choice;
    string regionToDelete;


    do {
        cout << "1. Add city" << endl;
        cout << "2. Display regions by population" << endl;
        cout << "3. Delete cities by region" << endl;
        cout << "4. Display all cities" << endl;
        cout << "0. Delete all list" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter city name: ";
            cin.ignore();
            getline(cin, cityName);
            cout << "Enter region name: ";
            getline(cin, regionName);
            cout << "Enter population: ";
            cin >> population;
            cityList.insertCity(cityName, regionName, population);
            cout << endl;
            break;

        case 2:
            regionList = cityList.convertReg();
            regionList.displayRegionsByPopulation();

            cout << endl;
            break;

        case 3:
            cout << "Enter the region to delete cities from: ";
            cin >> regionToDelete;
            cityList.deleteCitiesByRegion(regionToDelete);
            cout << endl;
            break;
        case 4:
            cityList.displayCities();
            cout << endl;
            break;
        }
    } while (choice != 0);

    cityList.deleteCities();

    return 0;
}
