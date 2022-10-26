#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Ugu

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int ans = 0, f = 0;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i-1]) {
            if(f == 0 && s[i] == '0'){
                f = 1;
                ans++;
            }else if(f == 1){
                ans++;
            }
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve(); 
    }

    return 0;
}
