/**
 * https://codeforces.com/problemset/problem/4/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int watermelonWeight = 2;
    cin >> watermelonWeight;

    if (watermelonWeight % 2 == 1)
    {
        cout << "NO";
        return 0;
    }
    if (((watermelonWeight / 2) % 2) == 0)
    {
        cout << "YES";
        return 0;
    }

    for (unsigned int i = 0; i < watermelonWeight - 1; i += 2)
    {
        if (i != 0)
            if (((watermelonWeight - i) % 2) == 0)
            {
                cout << "YES";
                return 0;
            }
    }

    cout << "NO";

    return 0;
}