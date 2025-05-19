#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    long long total = 1LL * n * (n + 1) / 2;

    if (total % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    vector<int> a, b;
    long long half = total / 2;

    for (int i = n; i >= 1; --i) {
        if (half - i >= 0) {
            a.push_back(i);
            half -= i;
        } else {
            b.push_back(i);
        }
    }

    cout << a.size() << "\n";
    for (int x : a) cout << x << " ";
    cout << "\n";

    cout << b.size() << "\n";
    for (int x : b) cout << x << " ";
    cout << "\n";

    return 0;
}
