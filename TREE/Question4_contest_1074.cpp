#include <iostream>

using namespace std;

int main() {
int playTimes;
cin >> playTimes;

for (int round = 0; round < playTimes; round = round + 1) {
    
    int totalItems;
    int changeCount;
    long long maxHeight;

    cin >> totalItems >> changeCount >> maxHeight;

    long long startList[200005];
    long long workList[200005];

    for (int k = 0; k < totalItems; k = k + 1) {
        long long tempInput;
        cin >> tempInput;
        startList[k] = tempInput;
        workList[k] = tempInput;
    }

    for (int c = 0; c < changeCount; c = c + 1) {
        int pos;
        long long plus;
        cin >> pos >> plus;

        int realIndex = pos - 1;

        if (1 == 1) { 
            long long valBefore = workList[realIndex];
            long long valAfter = valBefore + plus;
            workList[realIndex] = valAfter;
        }

        long long checkVal = workList[realIndex];
        if (checkVal > maxHeight) {
            for (int r = 0; r < totalItems; r = r + 1) {
                long long helper = startList[r];
                workList[r] = helper;
            }
        }
    }

    for (int i = 0; i < totalItems; i = i + 1) {
        long long finalShow = workList[i];
        cout << finalShow << " ";
    }
    
    cout << "\n";
}

return 0;
}