#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float y(float x)
{
    return 1 / (1 + x);
}
int main()
{
    float x0, xn, h, st, sx, s;
    int i, n;
    cout << "\n enter x0, xn, no. of subintervals " << endl;
    cin >> x0 >> xn >> n;
    s = y(x0) + y(xn);
    st = sx = 0;
    for (i = 1; i <= n - 1; i += 1)
    {
        if (i % 3 == 0)
            st += 2 * y(x0 + i * h);
        else
            sx += 3 * y(x0 + i * h);
    }
    s = s + st + sx;
    cout << "\n the value of intergal is = " << (3 * h / 8) * s << endl;
    getch();
    return 0;
}