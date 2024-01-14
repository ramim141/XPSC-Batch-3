#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> t(n), z(n), y(n);

    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> z[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> y[i];
    }

    int left = 0, right = 1e9;  // Set a large upper bound for the binary search
    int result_time = -1;
    vector<int> result_balloons(n);

    while (left <= right) {
        int mid = (left + right) / 2;
        int total_balloons = 0;

        for (int i = 0; i < n; ++i) {
            int balloons_inflated = max(0, min((mid - y[i]) / (z[i] + y[i]), t[i]));
            total_balloons += balloons_inflated;
        }

        if (total_balloons >= m) {
            result_time = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    vector<int> balloons_inflated_by_each(n);

    for (int i = 0; i < n; ++i) {
        int balloons_inflated = max(0, min((result_time - y[i]) / (z[i] + y[i]), t[i]));
        balloons_inflated_by_each[i] = balloons_inflated;
    }

    cout << result_time << endl;

    for (int i = 0; i < n; ++i) {
        cout << balloons_inflated_by_each[i] << " ";
    }

    cout << endl;

    return 0;
}
