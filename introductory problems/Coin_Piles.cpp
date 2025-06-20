#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a , b ;
    cin >> a >> b ;

     if ((2 * a - b) % 3 || (2 * a - b) < 0
        || (2 * b- a) % 3 || (2 * b - a) < 0){
             cout << "NO" << '\n';
             return;
        }
       
    cout << "YES" << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int  t;
    cin >> t ;

    while(t--){
        solve();
    }
    return 0;
}