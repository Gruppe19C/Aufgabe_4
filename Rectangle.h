#ifndef Rectangle_h
#define Rectangle_h

#include "Graf.h"

class Rectangle : public Graf
{
private:
    double m_width;
    double m_height;
public:
    Rectangle(double x, double y, double width, double height) : Graf(x, y), m_width(width), m_height(height) {}
    Rectangle(double width, double height) : Graf(), m_width(width), m_height(height) {}
    Rectangle() : Graf(), m_width(0), m_height(0) {}
    ~Rectangle() {}

    virtual double getSurfaceArea(){
        return m_width * m_height;
    };
};

#endif