#include "calculations.h"

double gravityAtAltitude(double altitude) {
    return g_sea_level * (1 - 2.25577e-5 * altitude);
}

double calculateRange(double velocity, double angle, double altitude) {
    double g = gravityAtAltitude(altitude);
    double angleRad = angle * (M_PI / 180.0);
    return (pow(velocity, 2) * sin(2 * angleRad)) / g;
}

double calculateMaxHeight(double velocity, double angle, double altitude) {
    double g = gravityAtAltitude(altitude);
    double angleRad = angle * (M_PI / 180.0);
    return (pow(velocity, 2) * pow(sin(angleRad), 2)) / (2 * g);
}

double calculateTimeOfFlight(double velocity, double angle, double altitude) {
    double g = gravityAtAltitude(altitude);
    double angleRad = angle * (M_PI / 180.0);
    return (2 * velocity * sin(angleRad)) / g;
}
