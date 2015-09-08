//
// Created by Ivo Georgiev on 8/25/15.
//

#include "Point.h"
#include <iostream>

using namespace std;

double computeArea(Point& a, Point& b, Point& c);

int main(void) {

    // The user will enter into these points, then they will put into the point class
    double tempX = 0.0, tempY = 0.0, tempZ = 0.0;

        cout << "Please enter the x, y, and z value for point number 1" << endl;
        cin >> tempX >> tempY >> tempZ;
            Point a(tempX, tempY, tempZ);
        cout << "Please enter the x, y, and z value for point number 2" << endl;
        cin >> tempX >> tempY >> tempZ;
            Point b(tempX, tempY, tempZ);
        cout << "Please enter the x, y, and z value for point number 3" << endl;
        cin >> tempX >> tempY >> tempZ;
            Point c(tempX, tempY, tempZ);

    cout << "Area of 3 points: " << computeArea(a, b, c) << " units squared" << endl;


    return 0;
}


double computeArea(Point& a, Point& b, Point& c)
{

    // Holds the side lengths of each triangle
    double sideA, sideB, sideC;
    sideA = a.distanceTo(b);
    sideB = b.distanceTo(c);
    sideC = c.distanceTo(a);

    // Holds semiPerimeter for triangle to be used in area equation
    double semiPerimeter = ((sideA + sideB + sideC)/2);

    // Computes the area, Heron's formula.
    return sqrt((semiPerimeter) * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));


}






