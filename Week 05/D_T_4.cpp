#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1000 + 5;
int n, m, a[N];

bool check(int mid) {
    int cnt = 1, sum = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] > mid)
            return false;
        sum += a[i];
        if (sum > mid) {
            cnt++;
            sum = a[i];
        }
    }
    return cnt <= m;
}

void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int lo = 1, hi = 1e9, mid, ans = 0;

    while (lo <= hi) {
        mid = (lo + hi) / 2;

        if (check(mid)) {
            ans = mid;
            hi = mid - 1;  // Fix: Reduce hi when check(mid) is true.
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
