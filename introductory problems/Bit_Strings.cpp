#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    const int MOD = 1e9 + 7; 
    ll n ;
    cin >> n;
    ll result = 1;

    for(int i =0 ; i < n ; i++){
        result =( result*2 )%MOD;
    }

    result = result%MOD;

    cout << result << "\n";

    return 0;
}