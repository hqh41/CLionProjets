#include <iostream>
using namespace std;

int main() {
    int a[4] = {1, 2, 3, 4};
    int dp[100] = {};
    int n;
    cin >> n;
    dp[0] = 1;
    for(int j = 1; j <= n; j++){
        for(int i = 0; i < 4; i++)
            if(a[i] <= j)dp[j] += dp[j-a[i]];
    }

    cout << dp[n];
    return 0;
}