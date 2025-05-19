#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x, y;
    cin >> y >> x;

    if(x>=y){
        if(x%2==0){
            ll st = ((x-1)*(x-1))+1;
            ll ans = st + (y-1);
            cout << ans << "\n";
        }
        else{
            ll st = (x*x);
            ll ans = st - (y-1);
            cout << ans << '\n';
        }
    }
    else{
        if(y%2==0){
            ll st = y*y;
            ll ans = st - (x-1);
            cout << ans << '\n';
        }
        else{
            ll st = ((y-1)*(y-1))+1;
            ll ans = st + (x-1);
            cout << ans << '\n';
        }
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}