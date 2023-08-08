#include "Piramide.h"
#include "Piramide.cpp"
#include <cmath>
#include <iostream>
#include <ostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int resp, rdata;
    Piramide piramide(15, 20);
    piramide.sqt();

    cout << "Piramide" << endl;
    cout << "Esta piramide esta formada con un triangulo equilatero como base"
         << endl;
    do
    {

        cout << "¿Quiere ingresar los datos?" << endl;
        cout << "[1]si   [2]no" << endl;
        cin >> resp;
        system("clear");
    } while (resp != 1 and resp != 2);

    switch (resp)
    {
    case 1:
        do
        {

            cout << "¿Que datos quiere ingresar?" << endl;
            cout << "[1](Altura y Area de la base)   [2](Altura y lado de la base)"
                 << endl;
            cin >> rdata;
            system("clear");
        } while (rdata != 1 and rdata != 2);

        break;
    case 2:
        break;
    default:
        break;
    }
    switch (rdata)
    {
    case 1:
        double x, y;
        cout << "Altura: ";
        cin >> x;
        cout << "Area de la base: ";
        cin >> y;
        piramide.setPiramideA(x, y);
        piramide.sqt();
        break;
    case 2:
        double a, b;
        cout << "Altura: ";
        cin >> a;
        cout << "lado de la base: ";
        cin >> b;
        piramide.setPiramideB(a, b);
        piramide.area_bs();
        break;
    default:
        break;
    }

    do
    {
        do
        {
            system("clear");
            cout << "¿Que datos quiere conocer?" << endl;
            cout << "[1]Altura   [2]Area de la base  [3]Lado de la base  [4]Volumen de la piramide  [5]Area de la piramide  [6]Perimetro de la base" << endl;
            cin >> rdata;
            system("clear");
            switch (rdata)
            {
            case 1:
                cout << "Altura: " << piramide.getheight() << endl;
                break;
            case 2:
                cout << "Area de la base: " << piramide.getbase() << endl;
                break;
            case 3:
                cout << "El lado de la base es: " << piramide.getside_eqt() << endl;
                break;
            case 4:
                piramide.volume();
                break;
            case 5:
                piramide.area();
                break;
            case 6:
                piramide.perimeter();
                break;
            default:
                break;
            }

        } while (rdata != 1 and rdata != 2 and rdata != 3 and rdata != 4 and rdata != 5 and rdata != 6);
        cout << endl;
        cout << endl;
        cout << "¿Quiere conocer otros datos?" << endl;
        cout << "[1]si   [otro numero]no" << endl;
        cin >> resp;
        system("clear");

    } while (resp == 1);
    system("clear");

    cout << "end" << endl;
    system("pause");
    return 0;
}