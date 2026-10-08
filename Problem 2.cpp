#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x >=1 && x <= 100 && y >=1 && y <= 100 && z >=1 && z <= 100) {
        if ((x > y && y > z) || (z > y && y > x)) {
            cout << y << endl;
        }  else if ((y > x && x > z) || (z > x && x > y)) {
            cout << x << endl;
        } else {
            cout << z << endl;
        }
    }
    return 0;
}
// Created by Yasmin Xudayarova on 10/8/26.
//
