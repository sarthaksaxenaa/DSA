#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t1[3], t2[3], t3[3];

    cin >> t1[0] >> t2[0] >> t3[0];
    cin >> t1[1] >> t2[1] >> t3[1];
    cin >> t1[2] >> t2[2] >> t3[2];

    for (int i = 0; i < 3; i++) {
        if (t1[i] < 1 || t1[i] > 100 ||
            t2[i] < 1 || t2[i] > 100 ||
            t3[i] < 1 || t3[i] > 100) {
            cout << "INVALID INPUT";
            return 0;
        }
    }

    int avg1 = round((t1[0] + t1[1] + t1[2]) / 3.0);
    int avg2 = round((t2[0] + t2[1] + t2[2]) / 3.0);
    int avg3 = round((t3[0] + t3[1] + t3[2]) / 3.0);

    int mx = max(avg1, max(avg2, avg3));

    if (mx < 70) {
        cout << "All trainees are unfit";
        return 0;
    }

    if (avg1 == mx)
        cout << "Trainee Number: 1" << endl;

    if (avg2 == mx)
        cout << "Trainee Number: 2" << endl;

    if (avg3 == mx)
        cout << "Trainee Number: 3" << endl;

    return 0;
}