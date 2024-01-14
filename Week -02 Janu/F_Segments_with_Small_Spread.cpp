#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define vvs vector<string>
#define vvb vector<vector<bool>>
#define vvvi vector<vector<vector<int>>>
#define si set<int>
#define sl set<ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define Ramu                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

ll count_good_segments(int n, ll k, vll& a) {
    ll count = 0;
    ll max_val = -1;
    ll min_val = LLONG_MAX;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        max_val = max(max_val, a[right]);
        min_val = min(min_val, a[right]);

        while (max_val - min_val > k) {
            ++left;
            max_val = *max_element(a.begin() + left, a.begin() + right + 1);
            min_val = *min_element(a.begin() + left, a.begin() + right + 1);
        }

        count += right - left + 1;
    }

    return count;
}

int main() {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll result = count_good_segments(n, k, a);
    cout << result << endl;

    return 0;
}
