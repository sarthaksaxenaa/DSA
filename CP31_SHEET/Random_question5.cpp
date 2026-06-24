#include <bits/stdc++.h>
using namespace std;

int main() {
    int interiorWalls, exteriorWalls;
    cin >> interiorWalls;
    cin >> exteriorWalls;

    double cost = 0;

    for (int i = 0; i < interiorWalls; i++) {
        double area;
        cin >> area;
        cost += area * 18;
    }

    for (int i = 0; i < exteriorWalls; i++) {
        double area;
        cin >> area;
        cost += area * 12;
    }

    cout << fixed << setprecision(1);
    cout << "Total Estimated Cost: " << cost;

    return 0;
}