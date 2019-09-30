//
// Created by Thomas Rudolph on 9/29/19.
//
// Used Esteban Parra's code as the main layout for this page.
#include "Skateboard.h"
#include <ctime>
#include <math.h>
#include <cstdlib>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;


double Skateboard::mileageEstimate(double stime) {
    srand( unsigned(time(NULL)));
    double mtime = (stime / 60);
    double randomMileage = ((double) rand() / (RAND_MAX));
    double ranCheck = 0;
    // making it between .1 and .5
    if (randomMileage > .6)
    {
      randomMileage -= .5;
    }
    else if (randomMileage < .1)
    {
      randomMileage += .1;
    }
    if (mtime > 25 && mtime < 250)
    {
      ranCheck = fmod(rand(), (mtime / 3)) + 1;
    }
    if (ranCheck > (mtime/3))
    {
      ranCheck -= (mtime/3);
    }
    if (ranCheck < 1)
    {
      ranCheck += 1;
    }

    randomMileage += ranCheck;
    double mileage = randomMileage;

    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
