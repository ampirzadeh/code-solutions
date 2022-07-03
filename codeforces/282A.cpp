/**
 * https://codeforces.com/problemset/problem/282/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int nOfStatements;
    int finalXvalue = 0;
    cin >> nOfStatements;

    string tempBitPPStatement;

    for (unsigned int i = 0; i < nOfStatements; i++)
    {
        cin >> tempBitPPStatement;
        if (tempBitPPStatement[1] == '+')
            finalXvalue++;
        if (tempBitPPStatement[1] == '-')
            finalXvalue--;
    }

    cout << finalXvalue;

    return 0;
}