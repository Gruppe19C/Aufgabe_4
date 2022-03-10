#ifndef Coordinate_h
#define Coordinate_h
#include <iostream>

class Coordinate
{
public:
    Coordinate(double x, double y);
    Coordinate();
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    double distance(Coordinate& other);
    double distance(double x, double y);
    Coordinate operator+(Coordinate& other);
    Coordinate operator-(Coordinate& other);
    Coordinate operator*(double val);
    Coordinate operator*(Coordinate& other);
    Coordinate operator/(double val);
    Coordinate operator/(Coordinate& other);
    Coordinate operator+=(Coordinate& other);
    Coordinate operator-=(Coordinate& other);
    Coordinate operator*=(double val);
    Coordinate operator*=(Coordinate& other);
    Coordinate operator/=(double val);
    Coordinate operator/=(Coordinate& other);
    bool operator==(Coordinate& other);
    bool operator!=(Coordinate& other);
    bool operator<(Coordinate& other);
    bool operator>(Coordinate& other);
    bool operator<=(Coordinate& other);
    bool operator>=(Coordinate& other);
    friend std::ostream& operator<<(std::ostream& os, const Coordinate& c);
    friend std::istream& operator>>(std::istream& is, Coordinate& c);
private:
    double m_x;
    double m_y;
};

#endif