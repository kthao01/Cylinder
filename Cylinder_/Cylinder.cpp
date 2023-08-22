//
// Created by kthao on 8/21/2023.
//

#include "Cylinder.h"
#include <iostream>
#include "cmath"

using namespace std;

Cylinder::Cylinder(double height, double radius) {
    this->height = height;
    this->radius = radius;
}
Cylinder::Cylinder() : Cylinder(0, 0){};

Cylinder::~Cylinder(){
    cout << "cylinder has been deallocated.\n";
}

double Cylinder::getHeight() const {
    return this->height;
}

double Cylinder::getRadius() const{
    return this->radius;
}

void Cylinder::setHeight(double height) {
    Cylinder::height = height;
}

void Cylinder::setRadius(double radius) {
    Cylinder::radius = radius;
}

double Cylinder::volume() {
    return M_PI* pow(radius,2)*height;
}

double Cylinder::surfaceArea() {
    return ((2*M_PI*radius*height)+(2*M_PI* pow(radius,2)));
}
void Cylinder::display() {
    cout << "radius: " << radius << "height: " << height << endl
    << "volume: " << volume() << "surface area: " << surfaceArea() << endl;
}





