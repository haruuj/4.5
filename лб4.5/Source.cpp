#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isInTarget(double x, double y, double R) {
    if (x >= 0 && y >= 0) {
        if ((x * x + pow(y - R, 2)) <= R * R) {
            return true;
        }
    }
    else if (x <= 0 && y <= 0) {
        if ((x * x + pow(y + R, 2)) <= R * R) {
            return true;
        }
    }
    return false;
}

int main() {
    double R;
    cout << " R= ";
    cin >> R;
    cout << "1sb\n";
    for (int i = 0; i < 10; i++) {
        double x, y;
        cout << "x="; cin >> x;
        cout << "y="; cin >> y;

        if (isInTarget(x, y, R)) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
  
    for (int i = 0; i < 10; i++) {
        double x = -2 * R + static_cast<double>(rand()) / RAND_MAX * (4 * R);
        double y = -2 * R + static_cast<double>(rand()) / RAND_MAX * (4 * R);
        if (isInTarget(x, y, R)) {
            cout << "dot (" << x << ", " << y << ") yes\n";
        }
        else {
            cout << "dot (" << x << ", " << y << ") no\n";
        }
    }

    return 0;
}