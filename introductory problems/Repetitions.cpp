#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s; 
    int n = s.length();

    int lenght = 1 ; 
    int maxLength = 1;


    for(int i=1; i < n; i++){
        if(s[i]==s[i-1]){
            lenght++;
        }
        else{
            maxLength = max(maxLength,lenght);
            lenght = 1 ;
        }
    }

    maxLength = max(maxLength,lenght);
    cout << maxLength << "\n";
    return 0;
}