/**
 * https://codeforces.com/problemset/problem/281/A
 */

#include <iostream>

using namespace std;

int main()
{
    string decapitalizedStr;
    cin >> decapitalizedStr;

    decapitalizedStr[0] = toupper(decapitalizedStr[0]);

    cout << decapitalizedStr;

    return 0;
}