//
// Created by Thomas Rudolph on 9/30/19.
// Coppied most of the file from Esteban Parra
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;
public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int engineAmount = 1);

    virtual ~Jet();
    int getEngineAmount();
    void setEngineAmount(int engineAmount);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_Jet_H
