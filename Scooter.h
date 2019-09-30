// Borrowed most of this code from the other classes aready built.
#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "Vehicle.h"

class Scooter : public Vehicle {

private:
  bool electricScoot;
public:
    // Took out a lot, and trimmed it to the basics.
    explicit Scooter(string brand, string model, bool elec = 0);

    virtual ~Scooter();
    virtual double mileageEstimate(double stime);
    string isElectric();
    void setElectricScoot(bool elec);
    bool getElectricScoot();

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
