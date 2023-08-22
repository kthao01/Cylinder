//
// Created by kthao on 8/21/2023.
//

#ifndef CYLINDER_CYLINDER_H
#define CYLINDER_CYLINDER_H
#include <iostream>
#include <cmath>
using namespace std;


class Cylinder {
private:
    double height;
    double radius;

public:
    Cylinder();
    Cylinder(double height, double radius);
    ~Cylinder();
    double getHeight() const;
    void setHeight(double height);
    double getRadius() const;
    void setRadius(double radius);
    double volume();
    double surfaceArea();
    void display();

};


#endif //CYLINDER_CYLINDER_H
