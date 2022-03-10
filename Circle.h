#ifndef Circle_h
#define Circle_h

#define _USE_MATH_DEFINES
#include <cmath>

#include <math.h>
using namespace std;

#include "Graf.h"

class Circle : public Graf
{

    
private:
    double m_radius;
public:
    Circle(double x, double y, double radius) : Graf(x, y), m_radius(radius) {}
    Circle(double radius) : Graf(), m_radius(radius) {}
    Circle() : Graf(), m_radius(0) {}
    ~Circle() {}

    virtual double getSurfaceArea(){
        return M_PI * pow(m_radius, 2);
    };
    

};

#endif

