#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n ;

    for(int k =1 ; k <= n ; k++){
        long long total = (1ll*k*k)*(k*k-1)/2;

        if(k > 2){
            long long attack = 4ll*(k-1)*(k-2);
            total -= attack ;
        }

        cout << total << "\n";
    }
    
    return 0;
}