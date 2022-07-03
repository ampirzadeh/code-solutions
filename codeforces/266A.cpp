/**
 * https://codeforces.com/problemset/problem/266/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int nOfStones, stonesToRemove = 0;
    string RGBStones;

    cin >> nOfStones;
    cin >> RGBStones;

    for (unsigned int i = 0; i < nOfStones; i++)
    {
        if (RGBStones[i] == RGBStones[i + 1])
            stonesToRemove++;
    }

    cout << stonesToRemove;

    return 0;
}