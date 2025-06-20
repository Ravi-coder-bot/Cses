#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int n = s.length();
    vector<int> freqMap(26, 0);

    for (char ch : s) {
        freqMap[ch - 'A']++;  
    }

    vector<int> oddChars;

    for (int i = 0; i < 26; i++) {
        if (freqMap[i] % 2 != 0) {
            oddChars.push_back(i);
        }
    }

    
    if ((n % 2 == 0 && oddChars.size() > 0) || (n % 2 == 1 && oddChars.size() != 1)) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string firstHalf = "", middle = "";

    for (int i = 0; i < 26; i++) {
        int count = freqMap[i] / 2;
        firstHalf += string(count, char(i + 'A'));
    }

    if (!oddChars.empty()) {
        int midChar = oddChars[0];
        middle = string(1, char(midChar + 'A'));
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    cout << firstHalf + middle + secondHalf << '\n';

    return 0;
}
