#ifndef PIRAMIDE_H // identified filed.h header
#define PIRAMIDE_H // defined header

class Piramide // create Class structure
{
private: // define var data => height, base => width pyramid and side of equilateral triangle (side_eqt)
    double height;
    double base;
    double side_eqt;

public:
    Piramide(double, double);          // ctor function
    ~Piramide();                       // dtor function
    void setPiramideA(double, double); // setter to height and base
    void setPiramideB(double, double); // setter to height and side_eqt
    double getheight();                // getter to height
    double getbase();                  // getter to base
    double getside_eqt();              // getter to side_eqt
    void volume();                     // volume function of pyramid(class Piramide)
    void area();                       // area function of pyramid(class Piramide)
    void perimeter();                  // perimeter function of triangle of base pyramid(class Piramide)
    void area_bs();                    // function of area of base( Var data == base)
    void sqt();                        // function for find the size of side of equilateral triangle
};

#endif // !PIRAMIDE_H
