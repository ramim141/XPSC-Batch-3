#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(const vector<ll>& a, int n, ll x) {
    int cnt = 1;
    for (int l = 0, r = 1; r < n;) {
        if (a[l] + x + x >= a[r]) {
            r++;
        } else {
            cnt++;
            l = r;
            r = l;
        }
    }
    return (cnt < 4);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll ans;
        ll low = 0, high = 1e12;  // Use a more reasonable upper bound.

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (isPossible(a, n, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
