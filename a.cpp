#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Bestie

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& x : a)  cin >> x;

    int ans = a[0];
    for(int i = 1; i < n; i++) {
        ans = gcd(ans, a[i]);
    }

    if(ans == 1) {
        cout << 0 << "\n";
        return ;
    }

    int cost = INT_MAX;
    for(int i = n; i >= 1; i--) {
        int x = gcd(a[i-1], i);
        if(gcd(ans, x) == 1) {
            cost = min(cost, n - i + 1);
        }
    }

    for(int i = n; i >= 1; i--) {
        int x = gcd(a[i-1], i);
        for(int j = n; j >= 1; j--) {
            if(j != i) {
                int y = gcd(a[j-1], j);
                if(gcd(x, y) == 1) {
                    cost = min(cost, n - j + 1 + n - i + 1);
                }
            }
        }
    }
    cout << cost << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
