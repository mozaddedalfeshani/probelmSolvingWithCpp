

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{

    double a, b, c;
    cin >> a >> b >> c;
    double triangle, circleArea, trapezium, square, rectangle;

    // The area of a triangle is ½ (b × h), where b is the base and h is the height.
    triangle = .5 * (a * c);
    // The area of circle is A = \pi r^2
    circleArea = 3.14159 * pow(c, 2);
    // The formula to calculate the area of trapezium is: Area = ½ x Sum of parallel sides x Distance between the parallel sides
    trapezium = .5 * (a + b) * c;
    // The area of ​​the square that has side B^2
    square = pow(b, 2);
    // The area of the rectangle that has sides A and B Area = A*B
    rectangle = a * b;

    // print section
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangle << endl;
    cout << "CIRCULO: " << circleArea << endl;
    cout << "TRAPEZIO: " << trapezium << endl;
    cout << "QUADRADO: " << square << endl;
    cout << "RETANGULO: " << rectangle << endl;

    return 0;
}