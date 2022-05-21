#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float f(float x, float y)
{
    return x + y * y;
}
int main()
{
    float x0, y0, h, xn, x, y, k1, k2, k3, k4, k;
    cout << "\n Enter the value of x0, y0, h, xn" << endl;
    cin >> x0 >> y0 >> h >> xn;
    x = x0;
    y = y0;
    while (1)
    {
        if (x == xn)
            break;
        k1 = h * f(x, y);
        k2 = h * f(x + h / 2, y + k1 / 2);
        k3 = h * f(x + h / 2, y + k2 / 2);
        k4 = h * f(x + h, y + k3);
        k = (k1 + (k2 + k3) * 2 + k4) / 6;
        x += h;
        y += k;
        cout << "\n When x = " << setprecision(4) << setw(8) << x << " y = " << setw(8) << y << endl;
    }
    getch();
    return 0;
}
