/**
 * https://codeforces.com/problemset/problem/71/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int nOfWords;
    cin >> nOfWords;
    string resultWords[nOfWords], tmpInputWord;

    for (unsigned int i = 0; i < nOfWords; i++)
    {
        cin >> tmpInputWord;

        if (tmpInputWord.length() <= 10)
            resultWords[i] = tmpInputWord;
        else
            resultWords[i] = tmpInputWord[0] + to_string(tmpInputWord.length() - 2) + tmpInputWord[tmpInputWord.length() - 1];
    }

    for (unsigned int i = 0; i < nOfWords; i++)
        cout << resultWords[i] << '\n';

    return 0;
}