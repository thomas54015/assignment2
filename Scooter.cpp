//
// Created by Thomas Rudolph on 9/29/19.
//
// Used Esteban Parra's code as the main layout for this page.
#include "Scooter.h"
#include <string>

Scooter::Scooter(string brand, string model, bool elec) {
    setBrand(brand);
    setModel(model);
    setElectricScoot(elec);
}

Scooter::~Scooter() = default;


double Scooter::mileageEstimate(double stime) {
    double mileage = 3 * (stime / 60);
    if (electricScoot == 1)
    {
      mileage *= 2;
    }
    return mileage;
}

//I built this function just for the output.
string Scooter::isElectric()
{
  string temp;
  if (electricScoot == 1)
  {
    temp += "Yes";
  }
  else
  {
    temp += "No";
  }
  return temp;
}


void Scooter::setElectricScoot(bool elec)
{
  electricScoot = elec;
}

bool Scooter::getElectricScoot()
{
  return electricScoot;
}

string Scooter::toString() {
    string s = "-> Scooter\n\t";
    return "-> Scooter\n" + Vehicle::toString() + "\n\tElectric= " + isElectric();
}
