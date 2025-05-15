#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n ;
    cin >> n;

    if(n==1){
        cout << 1 << "\n";
        return 0;
    }

    if(n<4){
        cout << "NO SOLUTION" << "\n" ; 
        return 0 ; 
    } 

    vector<int> res;

    for(int i =1 ; i <= n ; i++){
        if(i%2 == 0 ){
            res.PB(i);
        }
    }

    for(int i=1 ; i <= n ; i++){
        if(i%2 != 0){
            res.PB( i);
        }
    }

    for(auto i : res){
        cout << i << " ";
    }

    cout << "\n";
    return 0;
}