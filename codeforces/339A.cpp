/**
 * https://codeforces.com/problemset/problem/339/A
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string summans = "";
    cin >> summans;

    const int N_OF_NUMBERS = ((summans.length() - 1) / 2) + 1;
    unsigned int sumNumbers[N_OF_NUMBERS], sumNumberIdx = 0;

    for (unsigned int i = 0; i < summans.length(); i += 2)
    {
        if (summans[i] == '1')
            sumNumbers[sumNumberIdx] = 1;
        else if (summans[i] == '2')
            sumNumbers[sumNumberIdx] = 2;
        else if (summans[i] == '3')
            sumNumbers[sumNumberIdx] = 3;
        sumNumberIdx++;
    }

    sort(sumNumbers, sumNumbers + N_OF_NUMBERS);

    for (unsigned int i = 0; i < N_OF_NUMBERS; i++)
    {
        cout << sumNumbers[i];
        if (i != (N_OF_NUMBERS - 1))
            cout << "+";
    }

    return 0;
}