/**
 * https://codeforces.com/problemset/problem/112/A
 */

#include <iostream>

using namespace std;

void wordToLower(string &s)
{
    for (unsigned int i = 0; i <= s.length(); i++)
        s[i] = tolower(s[i]);
}

int main()
{
    pair<string, string> PetyasPresents;
    cin >> PetyasPresents.first;
    cin >> PetyasPresents.second;

    wordToLower(PetyasPresents.first);
    wordToLower(PetyasPresents.second);

    int LexicographicalOrder = PetyasPresents.first.compare(PetyasPresents.second);

    cout << LexicographicalOrder;

    return 0;
}