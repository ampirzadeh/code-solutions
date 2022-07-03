/**
 * https://codeforces.com/problemset/problem/158/A
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int nOfContestants, kAdvancingPlace, nOfAdvancingContestants = 0, scoreThresholdIdx;
    cin >> nOfContestants >> kAdvancingPlace;

    unsigned int contestantScores[nOfContestants];

    for (unsigned int i = 0; i < nOfContestants; i++)
        cin >> contestantScores[i];

    for (unsigned int i = 0; i < nOfContestants; i++)
    {
        // cout << "i: " << i << '\t' << "kAdvancingPlace: " << kAdvancingPlace << '\t' << "contestantScores[i]: " << contestantScores[i] << '\t' << "contestantScores[kAdvancingPlace]: " << contestantScores[kAdvancingPlace] << '\n';

        if (contestantScores[i] == 0)
            break;

        if (i < kAdvancingPlace)
        {
            nOfAdvancingContestants++;
        }
        else if (contestantScores[i] == contestantScores[kAdvancingPlace - 1])
            nOfAdvancingContestants++;
    }

    cout << nOfAdvancingContestants;

    return 0;
}
