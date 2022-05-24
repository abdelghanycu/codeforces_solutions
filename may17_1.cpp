//#include <bits/stdc++.h>
//
//#define ll long long
//#define N 100000007
//using namespace std;
//
//int dp[1001];
//
//int numberOfBST(int n) {
//    // Base case
//    if (n <= 1)
//        return 1;
//    // In case if the value is already present in the
//    // array just return it and no need to calculate it
//    if (dp[n] > 0)
//        return dp[n];
//    for (int i = 1; i <= n; i++)
//        dp[n] = (dp[n] + ((numberOfBST(i - 1) % N) * (numberOfBST(n - i) % N)) % N) % N;
//
//    return dp[n];
//}
//
//int main() {
//    numberOfBST(1000);
//
//    for(int i = 1; i < 1001; i++) {
//        cout << dp[i] << " " << endl;
//    }
//}