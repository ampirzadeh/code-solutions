/**
 * https://codeforces.com/problemset/problem/236/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int nOfRepeatedChars = 0;
    string username;
    cin >> username;

    for (unsigned int i = 0; i < username.length(); i++)
        for (unsigned int j = 0; j < i; j++)
            if (username[i] == username[j])
            {
                nOfRepeatedChars++;
                break;
            }

    if (((username.length() - nOfRepeatedChars) % 2) == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}