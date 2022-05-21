#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float df(float x, float y)
{
    return x + y;
}
int main()
{
    float x0, y0, h, x, x1, y1;
    cout << "\n Enter the values of x0, y0, h, x" << endl;
    cin >> x0 >> y0 >> h >> x;
    x1 = x0;
    y1 = y0;
    while (1)
    {
        if (x1 > x)
            break;
        y1 += h * df(x1, y1);
        x1 += h;
        cout << "\n When x = " << setw(3) << setprecision(1) << x1 << " y = " << setw(3) << setprecision(2) << y1 << endl;
    }
    getch();
    return 0;
}
