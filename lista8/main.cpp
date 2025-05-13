#include "polygon.hpp"

int main() 
{
    vector<Point2d> v1{Point2d(0,0), Point2d(10,0), Point2d(0,10)}; //3 vértices xy, forma um triangulo retangulo
    Polygon p1(v1);
    cout << p1.ShowVertex() << "Perimeter: " << p1.CalcPerimeter() << endl;

    int v2[6] = {0,0,10,0,0,10}; //3 vértices xy, forma um triangulo retangulo
    Polygon p2(v2, 3);
    cout << p2.ShowVertex() << "Perimeter: " << p2.CalcPerimeter() << endl;

    Point2d v3[5]; // 5 vértices xy, é uma forma qualquer
    v3[0] = Point2d(0,0);
    v3[1] = Point2d(0,10);
    v3[2] = Point2d(5,12);
    v3[3] = Point2d(15,15);
    v3[4] = Point2d(20,0);
    Polygon p3(v3, 5);
    cout << p3.ShowVertex() << "Perimeter: " << p3.CalcPerimeter() << endl;

    return 0;
}