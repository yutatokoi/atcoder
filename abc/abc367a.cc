#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (B < C) {
        if ((B <= A) && (A < C)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    } else {
        if ((A >= B) || (A < C)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
