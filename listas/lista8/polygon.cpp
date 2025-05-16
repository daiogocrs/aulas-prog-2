#include "polygon.hpp"

Polygon::Polygon(const vector<Point2d>& v) {
    vertices = v;
}

Polygon::Polygon(const int v[], int n) {
    for (int i = 0; i < n; i++) {
        int x = v[2 * i];
        int y = v[2 * i + 1];
        vertices.push_back(Point2d(x, y));
    }
}

Polygon::Polygon(const Point2d v[], int n) {
    for (int i = 0; i < n; i++) {
        vertices.push_back(v[i]);
    }
}

vector<Point2d> Polygon::getVertices() const {
    return vertices;
}

void Polygon::setVertices(const vector<Point2d>& v) {
    vertices = v;
}

string Polygon::ShowVertex() const {
    ostringstream oss;
    oss << "Vertices: ";
    for (const auto& pt : vertices) {
        oss << "(" << pt.getX() << "," << pt.getY() << ") ";
    }
    return oss.str();
}

float Polygon::CalcPerimeter() const {
    float perimeter = 0.0;
    int n = vertices.size();
    for (int i = 0; i < n; i++) {
        const Point2d& p1 = vertices[i];
        const Point2d& p2 = vertices[(i + 1) % n];  
        perimeter += p1.distanceTo(p2);
    }
    return perimeter;
}
