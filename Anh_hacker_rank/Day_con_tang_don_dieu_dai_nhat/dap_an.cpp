#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(int n, vector<int> a) {
    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int longest = 0;
    for (int i = 0; i < n; i++) {
        longest = max(longest, dp[i]);
    }

    return longest;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = solve(n, a);

    cout << result << "\n";

    return 0;
}