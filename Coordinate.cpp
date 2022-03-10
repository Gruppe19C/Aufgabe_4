#include <math.h>
using namespace std;
#include "Coordinate.h"


Coordinate::Coordinate(double x, double y)
{
    m_x = x;
    m_y = y;
}

Coordinate::Coordinate()
{
    m_x = 0;
    m_y = 0;
}

double Coordinate::getX() const
{
    return m_x;
}

double Coordinate::getY() const
{
    return m_y;
}

void Coordinate::setX(double x)
{
    m_x = x;
}

void Coordinate::setY(double y)
{
    m_y = y;
}

double Coordinate::distance(Coordinate& other)
{
    return sqrt(pow((m_x - other.m_x), 2) + pow((m_y - other.m_y), 2));
}

double Coordinate::distance(double x, double y)
{
    return sqrt(pow((m_x - x), 2) + pow((m_y - y), 2));
}

Coordinate Coordinate::operator+(Coordinate& other)
{
    return Coordinate(m_x + other.m_x, m_y + other.m_y);
}

Coordinate Coordinate::operator-(Coordinate& other)
{
    return Coordinate(m_x - other.m_x, m_y - other.m_y);
}

Coordinate Coordinate::operator*(double val)
{
    return Coordinate(m_x * val, m_y * val);
}

Coordinate Coordinate::operator*(Coordinate& other)
{
    return Coordinate(m_x * other.m_x, m_y * other.m_y);
}

Coordinate Coordinate::operator/(double val)
{
    return Coordinate(m_x / val, m_y / val);
}

Coordinate Coordinate::operator/(Coordinate& other)
{
    return Coordinate(m_x / other.m_x, m_y / other.m_y);
}

Coordinate Coordinate::operator+=(Coordinate& other)
{
    m_x += other.m_x;
    m_y += other.m_y;
    return *this;
}

Coordinate Coordinate::operator-=(Coordinate& other)
{
    m_x -= other.m_x;
    m_y -= other.m_y;
    return *this;
}

Coordinate Coordinate::operator*=(double val)
{
    m_x *= val;
    m_y *= val;
    return *this;
}

Coordinate Coordinate::operator*=(Coordinate& other)
{
    m_x *= other.m_x;
    m_y *= other.m_y;
    return *this;
}

Coordinate Coordinate::operator/=(double val)
{
    m_x /= val;
    m_y /= val;
    return *this;
}

Coordinate Coordinate::operator/=(Coordinate& other)
{
    m_x /= other.m_x;
    m_y /= other.m_y;
    return *this;
}

bool Coordinate::operator==(Coordinate& other)
{
    return (m_x == other.m_x && m_y == other.m_y);
}

bool Coordinate::operator!=(Coordinate& other)
{
    return (m_x != other.m_x || m_y != other.m_y);
}

bool Coordinate::operator<(Coordinate& other)
{
    return (m_x < other.m_x && m_y < other.m_y);
}

bool Coordinate::operator>(Coordinate& other)
{
    return (m_x > other.m_x && m_y > other.m_y);
}

bool Coordinate::operator<=(Coordinate& other)
{
    return (m_x <= other.m_x && m_y <= other.m_y);
}

bool Coordinate::operator>=(Coordinate& other)
{
    return (m_x >= other.m_x && m_y >= other.m_y);
}


