/**
 * https://codeforces.com/problemset/problem/263/A
 */

#include <iostream>

using namespace std;

unsigned int absoluteMagnitude(int x)
{
    if (x < 0)
        return x * -1;
    return x;
}

int main()
{
    unsigned int tmepUglyMatrixNumber, nOfRequiredMoves = 0;

    for (unsigned int i = 0; i < 5; i++)
        for (unsigned int j = 0; j < 5; j++)
        {
            cin >> tmepUglyMatrixNumber;
            if (tmepUglyMatrixNumber == 1)
                if (i == 2 && j == 2)
                    nOfRequiredMoves = 0;
                else
                    nOfRequiredMoves = (absoluteMagnitude(i - 2) + absoluteMagnitude(j - 2));
        }

    cout << nOfRequiredMoves;

    return 0;
}