#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    if (weight < 0) {
        cout << "INVALID INPUT";
    }
    else if (weight == 0) {
        cout << "Time Estimated: 0 Minutes";
    }
    else if (weight <= 2000) {
        cout << "Time Estimated: 25 Minutes";
    }
    else if (weight <= 4000) {
        cout << "Time Estimated: 35 Minutes";
    }
    else if (weight <= 7000) {
        cout << "Time Estimated: 45 Minutes";
    }
    else {
        cout << "OVERLOADED!";
    }

    return 0;
}