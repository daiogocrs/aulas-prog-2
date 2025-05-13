#ifndef POLYGON_HPP
#define POLYGON_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

class Point2d {
private:
    int x;
    int y;

public:
    Point2d() : x(0), y(0) {}
    Point2d(int x, int y) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    float distanceTo(const Point2d& other) const {
        int dx = other.x - this->x;
        int dy = other.y - this->y;
        return sqrt(dx * dx + dy * dy);
    }
};

class Polygon {
private:
    vector<Point2d> vertices;

public:
    Polygon(const vector<Point2d>& v);
    Polygon(const int v[], int n);
    Polygon(const Point2d v[], int n);
    vector<Point2d> getVertices() const;
    void setVertices(const vector<Point2d>& v);
    string ShowVertex() const;
    float CalcPerimeter() const;
};

#endif
