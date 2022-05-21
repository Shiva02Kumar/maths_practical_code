#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float f(float a)
{
    float x = ((a * a * a) - (4 * a) - 5);
    return (x);
}

int main()
{
    float a, b, m, ite, e, fa, fb, fm, k = 0;
    cout << "\nEnter the value of a and b = ";
    cin >> a >> b;
    cout << "Enter the maximum number of iteration = ";
    cin >> ite;
    cout << "Enter Maximum error = ";
    cin >> e;
    fa = f(a);
    fb = f(b);
    if ((fa * fb) > 0)
    {
        cout << "Entered set does not include root";
    }
    else
    {
        for (int i = 1; i < ite; i++)
        {
            fa = f(a);
            m = (a + b) / 2;
            fm = f(m);
            if (fabs(fm) < e)
            {
                k++;
                break;
            }
            else
            {
                if ((fa * fm) < 0)
                    b = m;
                else
                    a = m;
            }
            cout << "\n Value after " << i << " iteration = " << m;
        }
        if (k == 0)
            cout << "Number of iteration are not enough";
    }
    getch();
    return 0;
}
