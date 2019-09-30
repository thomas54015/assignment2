// Borrowed most of this code from the other classes aready built.
#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:

public:
    // Took out a lot, and trimmed it to the basics.
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double stime);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BICYCLE_H
