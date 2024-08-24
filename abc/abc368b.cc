#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int operations = 0;

    while (true) {
        sort(A.begin(), A.end(), greater<int>());

        if (A[0] > 0 && A[1] > 0) {
            A[0]--;
            A[1]--;
            operations++;
        } else {
            break;
        }
    }

    cout << operations << endl;

    return 0;
}
