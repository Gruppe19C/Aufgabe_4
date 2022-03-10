#ifndef Graf_h
#define Graf_h

#include "Coordinate.h"

class Graf
{
    
private:
    Coordinate m_point;
public:
    Graf(double x, double y) : m_point(Coordinate(x, y)) {}
    Graf() : m_point(Coordinate()) {}

    virtual double getSurfaceArea() = 0;

};

#endif