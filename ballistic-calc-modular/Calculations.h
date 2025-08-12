#ifndef CALCULATIONS_H
#define CALCULATIONS_H

#include <cmath>

// Constants
const double g_sea_level = 9.81;

// Function declarations
double gravityAtAltitude(double altitude);
double calculateRange(double velocity, double angle, double altitude);
double calculateMaxHeight(double velocity, double angle, double altitude);
double calculateTimeOfFlight(double velocity, double angle, double altitude);

#endif // CALCULATIONS_H
