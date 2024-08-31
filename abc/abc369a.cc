#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    set<int> solutions;
    
    // A B x
    solutions.insert(2 * B - A);

    // A x B
    if ((A + B) % 2 == 0) {
        solutions.insert((A + B) / 2);
    }

    // x A B
    solutions.insert(2 * A - B);

    cout << solutions.size() << endl;

    return 0;
}