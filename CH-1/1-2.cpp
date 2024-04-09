#include <iostream>
using namespace std;

int main()
{
    int Y1, Y2;

    cout << "ENTER FIRST YEAR= ";
    cin >> Y1;
    cout << "ENTER SECOND YEAR= ";
    cin >> Y2;

    int Y = 0, a[Y2 - Y1];
    cout << "LEAP YEAR= ";
    for (int A = Y1; A <= Y2; A++)
    {
        if (A % 4 == 0)
        {
            a[0] = A;
            Y++;
        }
    }
}
