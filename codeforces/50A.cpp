/**
 * https://codeforces.com/problemset/problem/50/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int smallN, bigM, nOfDominos = 0;
    cin >> smallN >> bigM;

    if (bigM < smallN)
        swap(smallN, bigM);

    if (bigM % 2 == 0)
        cout << (bigM / 2) * smallN;
    else
    {
        if (smallN % 2 == 0)
            cout << (((bigM - 1) / 2) * smallN) + ((smallN) / 2);
        else
            cout << (((bigM - 1) / 2) * smallN) + ((smallN - 1) / 2);
    }

    return 0;
}