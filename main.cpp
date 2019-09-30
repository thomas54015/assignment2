#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Skateboard.h"
#include "Jet.h"
#include "Scooter.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
    std::cout << "Driving simulator" << std::endl;
    int size = 12;
    int capacity = 20;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Skateboard("Zero", "Thomas Deck");
    vehiclesArray[7] = new Jet("Nasa", "Apolo11", "Jet", 2);
    vehiclesArray[8] = new Jet("Boeing", "757", "Rocket", 3);
    vehiclesArray[9] = new Skateboard("CCS", "Blank");
    vehiclesArray[10] = new Scooter("Razor", "none");
    vehiclesArray[11] = new Scooter("Skool", "32C", 1);




    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
