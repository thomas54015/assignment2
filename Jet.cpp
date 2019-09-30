//
// Created by Thomas Rudolph on 9/30/19.
// Coppied most of the file from Esteban Parra
//

#include "Jet.h"
#include <ctime>
#include <math.h>
#include <cstdlib>

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int engineAmount) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineAmount(engineAmount);
}

Jet::~Jet() = default;

int Jet::getEngineAmount() {
    return numberOfEngines;
}

void Jet::setEngineAmount(int engineAmount) {

        numberOfEngines = engineAmount;
}

double Jet::mileageEstimate(double stime) {
    srand( unsigned(time(NULL)));
    double mileage = (rand() % 60 + 40) * (stime/60);
    if (fuelType == "Rocket" && numberOfEngines > 2) {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " +
           to_string(numberOfEngines);
}
