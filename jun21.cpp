//#include <bits/stdc++.h>
//
//using namespace std;
//long long x, d;
//vector<int> beautiful;
//vector<long long> x_factors;
//
//
//int solve_subsets(int idx, int rem) {
//    if (rem == 1) return 1;
//    if (idx == beautiful.size()) return 0;
//    int ret = 0;
//    if (rem % beautiful[idx] == 0)
//        ret += solve_subsets(idx, rem / beautiful[idx]);
//    ret += solve_subsets(idx + 1, rem);
//    return ret;
//}
//
//void solve() {
//    x_factors.clear();
//    beautiful.clear();
//    int d2 = d * d;
//    for (long long i = 1; i * i <= x; i++)
//        if (x % i == 0) {
//            x_factors.push_back(i);
//            if (i * i != x) x_factors.push_back(x / i);
//        }
//    for (long long i: x_factors)
//        if (!(i >= d2 && i % d2 == 0) && i % d == 0)
//            beautiful.push_back(i);
//    sort(beautiful.begin(), beautiful.end());
//    if (solve_subsets(0, x) >= 2) puts("YES");
//    else puts("NO");
//
//}
//
//int main() {
//    int t;
//    scanf("%d", &t);
//    for (int i = 1; i <= t; i++) {
//        scanf("%lld %lld", &x, &d);
//        solve();
//    }
//}