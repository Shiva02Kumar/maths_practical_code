#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int r, c, a[3][3] = {{102, 25, 99}, {53, 76, 49}, {259, 321, 72}}, b[3][3] = {{44, 765, 123}, {89, 66, 12}, {126, 259, 29}}, sum[3][3], i, j, subtract[3][3];
    long int multiply[3][3], k;
    cout << "Given two matrix are as follows:\n";
    cout << "A = 102 25 99	B = 44  765 123\n";
    cout << "    53  76 49	    89  66  12 \n";
    cout << "    259 321 72	    126 259 29\n";
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum[i][j] = a[i][j] + b[i][j];
    cout << "The Sum of given two matrix is: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            subtract[i][j] = a[i][j] - b[i][j];
    cout << "The Subtraction of given two matrix is: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << subtract[i][j] << " ";
        cout << endl;
    }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            multiply[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                multiply[i][j] += a[i][k] * b[k][j];
            }
        }
    cout << "The multiplication of given two matrix is:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << multiply[i][j] << " ";
        cout << endl;
    }
    getch();
    return 0;
}
