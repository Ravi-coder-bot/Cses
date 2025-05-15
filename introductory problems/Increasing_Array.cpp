#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<ll> arr(n );
    for(int i=0 ; i < n ; i++) cin >> arr[i];
    ll count = 0;

    for(int i=1 ;  i < n ; i++){
        while(arr[i-1] > arr[i]){
              arr[i] += 1  , count++ ;
        }
    }

    cout << count << "\n";

    return 0;
}