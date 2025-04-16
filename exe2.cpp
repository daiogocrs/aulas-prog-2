#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float CalcDistance(int xa, int ya, int xb, int yb);
float CalcAngle(float L1, float L2, float L3);
float CalcArea(float L1, float L2, float L3);

int main ()
{
    int x1,y1,x2,y2,x3,y3;

    cout << "Entre com 3 coordenadas bidimensionais em sequencia (x1,y1,x2,y2,x3,y3): " << endl;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    float L1 = CalcDistance(x2,y2,x3,y3);
    float L2 = CalcDistance(x1,y1,x3,y3);
    float L3 = CalcDistance(x2,y2,x1,y1); 

    float a1 = CalcAngle(L1,L2,L3);
    float a2 = CalcAngle(L2,L3,L1);
    float a3 = CalcAngle(L3,L1,L2);

    float A = CalcArea(L1,L2,L3);

    cout << fixed << setprecision(2);
    cout << "Lado 1: " << L1 << " Lado 2: " << L2 << " Lado 3: " << L3 << endl;
    cout << "Angulos: A1: " << a1 << "º A2: " << a2 << "º A3: " << a3 << "º" << endl;
    cout << "Area do triangulo: " << A << " cm²" << endl; 

    return 0;    
}

float CalcDistance(int xa, int ya, int xb, int yb)
    {
        float D = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
        return D;
    }

float CalcAngle(float L1, float L2, float L3)
    {
        float A = acos((L2*L2 + L3*L3 - L1*L1) / (2*L2*L3));
        return A * 180 / M_PI;
    }

float CalcArea(float L1, float  L2, float L3)
    {
        float s = (L1 + L2 + L3) / 2;
        float A = sqrt(s*(s-L1)*(s-L2)*(s-L3));
        return A;
    }