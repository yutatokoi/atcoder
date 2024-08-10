#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    int max_length = 0;

    for (int i = 0; i < N; ++i) {
        cin >> S[i];
        max_length = max(max_length, (int)S[i].length());
    }

    for (int i = 0; i < max_length; ++i) {
        string line = "";
        for (int j = N - 1; j >= 0; --j) {
            if (i < S[j].length()) {
                line += S[j][i];
            } else {
                line += '*';
            }
        }
        int line_len = line.size();
        while (line[line_len - 1] == '*') {
            line = line.substr(0, line_len - 1);
            line_len = line.size();
        }
        cout << line << endl;
    }

    return 0;
}