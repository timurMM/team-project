#include "malashok.h"
#include <cmath>
const double g = 9.81; 
double gravityForce(double m) {
    return m * g;
} 
double weightInLift(double m, double a) {
    return m * (g + a);
} 
