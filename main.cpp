
#include <iostream>
#include <list>
using namespace std;
#include "Circle.h"
#include "Rectangle.h"
#include "Graf.h"
#include "MyExceptions.h"

bool is_number(const std::string& s)
{
    char* end = nullptr;
    double val = strtod(s.c_str(), &end);
    return end != s.c_str() && *end == '\0' && val != HUGE_VAL;
}

Circle * getCircleInput(){
    string x;
    string y;
    string radius;

    cout << "Enter x, y, and radius: ";

    try {
       cin >> x >> y >> radius;
       if (is_number(x) == false) throw InputException(x);
       if (is_number(y) == false) throw InputException(y);
       if (is_number(radius) == false) throw InputException(radius);
    }
    catch (InputException& e)
    {
        std::cout << "Exception:\n" << e.getError() << std::endl;
    }
    
    Circle* c = new Circle(stod(x), stod(y), stod(radius));
    return c;
}

Rectangle * getRectangleInput(){
    double x, y, width, height;
    cout << "Enter x, y, width, and height: ";
    cin >> x >> y >> width >> height;
    Rectangle* r = new Rectangle(x, y, width, height);
    return r;
}

void printMenu(){
    cout << "1. Zeichenelement erstellen" << endl;
    cout << "2. Zeichenelement anzeigen" << endl;
    cout << "3. Programm beenden" << endl;
}

void printMenuOne(){
    cout << "1. Kreis erstellen" << endl;
    cout << "2. Rechteck erstellen" << endl;
}

void printMenuTwo(){
    cout << "Reihenfolge: " << endl;
    cout << "1. gemischt" << endl;
    cout << "2. erst Kreise dann Rechtecke" << endl;
}

int main(){
    list<Graf*> l;
    string choice = "0";

    while(choice != "3"){
        printMenu();
        cin >> choice;
        if(choice == "1"){
            printMenuOne();
            cin >> choice;

            if(choice == "1"){
                l.push_back(getCircleInput());
            }
            else if(choice == "2"){
                l.push_back(getRectangleInput());
            }
        }
        else if(choice == "2"){
            printMenuTwo();
            cin >> choice;
            if(choice == "1"){
                for(Graf* g : l){
                    cout << typeid(*g).name() << ": " << (*g).getSurfaceArea() << endl;
                }
            
            }
            else if(choice == "2"){
                l.sort([] (Graf* a, Graf* b) {
                    // return a->getSurfaceArea() < b->getSurfaceArea();
                    return typeid(*a) == typeid(Circle);
                });
                for(Graf* g : l){
                    cout << typeid(*g).name() << ": " << (*g).getSurfaceArea() << endl;
                }
            }
        }
    }
    return 0;
}