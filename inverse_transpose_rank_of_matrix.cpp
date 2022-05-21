#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[3][3] = {102, 25, 99, 53, 76, 49, 259, 321, 72}, i, j;
    float determinant = 0;
    cout << "Given matrix is as follows:\n";
    cout << "A=102 25 99 \n";
    cout << "  53 76 49	\n";
    cout << "  259 321 72 \n";
    cout << "The transpose of given matrix is:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
    for (i = 0; i < 3; i++)
        determinant = determinant + (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));
    cout << "Inverse of matrix is: \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            cout << ((a[(i + 1) % 3][(j + 1) % 3] * a[(i + 2) % 3][(j + 2) % 3]) - (a[(i + 1) % 3][(j + 2) % 3] * a[(i + 2) % 3][(j + 1) % 3])) / determinant << " ";
        cout << endl;
    }
    getch();
    return 0;
}
