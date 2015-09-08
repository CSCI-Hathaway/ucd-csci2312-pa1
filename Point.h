// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

#include <cmath>

class Point {

private:
    double x;
    double y;
    double z;

public:
  // Constructors
  Point();                      // default constructor
  Point(double x, double y, double z);    // two-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

  // Accessor methods
    double getX();
    double getY();
    double getZ();

    // Calculates the distance between two points

    double distanceTo(Point&);


};

#endif // __point_h