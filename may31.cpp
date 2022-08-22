//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int N = 100005;
//const int mod = (int) 1e9 + 7;
//
//int n, mx;
//int a[N];
//int cnt[N];
//int ans[N];
//long long inv[N];
//
//void init() {
//    inv[0] = inv[1] = 1;
//    for (int i = 2; i < N; i++) {
//        inv[i] = (mod - (mod / i) * inv[mod % i] % mod) % mod;
//    }
//}
//
//long long bin_power(long long a, long long b) {
//    if (b == 0) return 1;
//    if (b == 1) return a;
//    long long ans = bin_power(a, b / 2);
//    ans = (ans * ans) % mod;
//    if (b % 2 == 1) ans = (ans * a) % mod;
//    return ans;
//}
//
//int solve(int g) {
//    long long sum = 0, res = 0;
//    for (int i = g; i <= mx; i += g) {
//        (sum += cnt[i] * 1LL * i % mod) %= mod;
//    }
//    for (int i = g; i <= mx; i += g) {
//        (res += cnt[i] * 1LL * i % mod * sum % mod) %= mod;
//    }
////    res = bin_power();
//    (res *= inv[g]) %= mod;
//    for (int i = 2 * g; i <= mx; i += g) {
//        res -= ans[i] * 1LL * i % mod * inv[g] % mod;
//        if (res < 0)
//            res += mod;
//    }
//    cout << "g=" << g << " res=" << res <<  " sum=" << sum << endl;
//    return ans[g] = res;
//}
//
//int main() {
//    init();
//    int t;
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d", &n);
//        memset(cnt, 0, sizeof cnt);
//        memset(ans, 0, sizeof ans);
//        mx = 0;
//        for (int i = 0; i < n; i++) {
//            scanf("%d", a + i);
//            cnt[a[i]]++;
//            mx = max(mx, a[i]);
//        }
//        int res = 0;
//        for (int g = mx; g > 0; g--) {
//            (res += solve(g)) %= mod;
//        }
//        printf("%d\n", res);
//    }
//    return 0;
//}