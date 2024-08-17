#include <bits/stdc++.h>
using namespace std;

int main() {
    string X;
    cin >> X;

    while (X.back() == '0') {
        X.pop_back();
    }

    if (X.back() == '.') {
        X.pop_back();
    }

    cout << X << endl;

    return 0;
}
