#include <iostream>
#include <string>

using namespace std;

class Car { //klasa Car
    public:
        string make;
        string model;
        int year;
        int currentYear=2024;;
        void displayInfo(){ //funkcja wyświetlająca  atrybuty
            cout<<make<<" "<<model<<" "<<year<<endl;
        }
        int getCarAge(){ //funkcja obliczająca wiek samochdu
            return currentYear-year;
        }
        bool isSameCar(Car &otherCar){ //funkcja porównująca samochody
            if(make==otherCar.make && model==otherCar.model && year==otherCar.year) return true;
            return false;
        }
};

int main() {
    Car sam; //tworzenie instancji
    sam.make="Reno"; //nadawanie atrybutów instancji
    sam.model="Megan";
    sam.year=2004;
    sam.displayInfo();//wywolywanie funkcji
    cout<<sam.getCarAge()<<endl;
    
    Car aut; //tworzenie drugiej instancji
    aut.make="Skoda"; //nadawanie atrybutów drugiej instancji
    aut.model="Superb";
    aut.year=2018;
    aut.displayInfo(); //wywolywanie funkcji
    cout<<aut.getCarAge()<<endl;

    cout<<sam.isSameCar(aut)<<endl; //porównanie instancji 0=false
    return 0;
}