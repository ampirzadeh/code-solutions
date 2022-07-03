/**
 * https://codeforces.com/problemset/problem/231/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int nOfQuestions, Petya, Vasya, Tonya, nOfSolvedQuestions = 0;
    cin >> nOfQuestions;

    for (unsigned int i = 0; i < nOfQuestions; i++)
    {
        cin >> Petya >> Vasya >> Tonya;
        if ((Petya + Vasya + Tonya) >= 2)
            nOfSolvedQuestions++;
    }

    cout << nOfSolvedQuestions;

    return 0;
}