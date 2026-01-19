#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int howManyTests;
    if (!(cin >> howManyTests)) return 0;

    for (int tCount = 0; tCount < howManyTests; tCount = tCount + 1) {
        int nRobots, mSpikes, kMoves;
        cin >> nRobots >> mSpikes >> kMoves;

        map<long long, int> robotTracker;
        for (int i = 0; i < nRobots; i = i + 1) {
            long long startPos;
            cin >> startPos;
            robotTracker[startPos] = robotTracker[startPos] + 1;
        }

        vector<long long> spikeList(mSpikes);
        for (int i = 0; i < mSpikes; i = i + 1) {
            cin >> spikeList[i];
        }

        string theMoves;
        cin >> theMoves;

        long long currentOffset = 0;
        int remainingRobots = nRobots;

        for (int m = 0; m < kMoves; m = m + 1) {
            char dir = theMoves[m];
            if (dir == 'L') {
                currentOffset = currentOffset - 1;
            } else {
                currentOffset = currentOffset + 1;
            }

            for (int s = 0; s < mSpikes; s = s + 1) {
                long long searchPos = spikeList[s] - currentOffset;

                if (robotTracker.count(searchPos)) {
                    remainingRobots = remainingRobots - robotTracker[searchPos];
                    robotTracker.erase(searchPos);
                }
            }

            cout << remainingRobots << (m == kMoves - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}