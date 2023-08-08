#include "Piramide.h"
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

Piramide::Piramide(double _height, double _base)
{
    height = _height;
    base = _base;
}

Piramide::~Piramide()
{
}

void Piramide::setPiramideA(double _height, double _base)
{
    height = _height;
    base = _base;
}

void Piramide::setPiramideB(double _height, double _side_eqt)
{
    height = _height;
    side_eqt = _side_eqt;
}

double Piramide::getheight()
{
    return height;
}

double Piramide::getbase()
{
    return base;
}

double Piramide::getside_eqt()
{
    return side_eqt;
}

void Piramide::volume()
{
    cout << "El volumen de la piramide es: " << (height * base) / 3 << endl;
}

void Piramide::area()
{
    double ap, x;
    ap = sqrt(pow(side_eqt, 2) - (pow((side_eqt / 2), 2))) / 3;
    x = sqrt(pow(side_eqt, 2) + pow(ap, 2));
    cout << "El area de la piramide es: " << pow(side_eqt, 2) + (2 * side_eqt * x) << endl;
}

void Piramide::area_bs()
{
    double x;
    x = sqrt(pow(side_eqt, 2) - (pow((side_eqt / 2), 2)));
    base = x * side_eqt / 2;
}
void Piramide::perimeter()
{
    cout << "El perimetro de la base de la piramide es: " << 3 * side_eqt << endl;
}
void Piramide::sqt()
{
    side_eqt = sqrt(sqrt(16 * pow(base, 2) / 3));
}
