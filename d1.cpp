#include<bits/stdc++.h>
using namespace std;

#define ll long long

// D1. Balance (Easy Version) 

int32_t main() {
    ios::sync_with_stdio(false);
    
    int q;
    cin >> q;
    map<ll, ll> mex;
    map<ll, bool> visited;
    while(q--) {
        char ch; ll k;
        cin >> ch >> k;

        if(ch == '+') {
            visited[k] = true;
        } else {
            ll v = mex[k] + k;
            while(visited[v]) {
                mex[k] = v;
                v += k;
            }
            cout << v << "\n";
        }
    }

    return 0;
}
