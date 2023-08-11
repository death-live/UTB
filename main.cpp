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
    SystemCls();
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
        SystemCls();
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
            SystemCls();
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

        piramide.imnprim();
    SystemCls();

    cout << "end" << endl;
    system("pause");
    SystemCls();
    return 0;
}
