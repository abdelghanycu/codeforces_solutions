//#include <bits/stdc++.h>
//
//#define ll long long
//#define N 5005
//#define MOD 1000000007
//using namespace std;
//
//ll f[N];
//ll fact[N];
//vector<int> p;
//int st = -1, ed = -1;
//
//int n, m;
//int num[N];
//
//
//void init() {
//
//    f[1] = 1;
//    fact[1] = 1;
//    fact[0] = 1;
//    for (ll i = 2; i < N; i++) {
//        f[i] = (f[i - 1] * 2LL) % MOD;
////        if(f[i] < 0) {
////            cout << i << " " << f[i] << endl;
////        }
//        fact[i] = (fact[i - 1] * i) % MOD;
////        if(fact[i] < 0) {
////            cout << i << " " << fact[i] << endl;
////        }
//    }
//}
//
//ll ppow(ll x, ll y) {
//    if (y == 0) {
//        return 1;
//    }
//    ll res = ppow(x, y / 2) % MOD;
//    res = (res * res) % MOD;
//    if (y % 2 == 1) {
//        return (res * x) % MOD;
//    }
//    return res;
//}
//
//ll inv(ll x) {
//    return ppow(x, MOD - 2);
//}
//
//void solve() {
//    ll res = 1;
//    ll sum = 0;
//    ll d = 1;
//    for (ll i = 0; i < p.size(); i++) {
//        sum += p[i];
//        if (i == 0) {
//            if (num[0] == 1) {
//                res = (res * f[p[i]]) % MOD;
//            }
//        } else if (i == p.size() - 1) {
//            if (num[m - 1] == n) {
//                res = (res * f[p[i]]) % MOD;
//            }
//        } else {
//            res = (res * f[p[i]]) % MOD;
//        }
//        d = (d * fact[p[i]]) % MOD;
//    }
////    cout << "sum=" << sum << " res=" << res << " d=" << d << endl;
////    cout << "inv=" << inv(d) << endl;
//    res = (res * fact[sum]) % MOD;
//    res = (res * inv(d)) % MOD;
//
////    printf("%lld\n", max(1LL, res));
//    printf("%lld\n", res);
//}
//
//void init_p() {
//
//    sort(num, num + m);
//
//    if (num[0] != 1) {
//        p.push_back(num[0] - 1);
//    }
//    for (int i = 1; i < m; i++) {
//        if (num[i] - num[i - 1] - 1)
//            p.push_back(num[i] - num[i - 1] - 1);
//    }
//    if (num[m - 1] != n) {
//        p.push_back(n - num[m - 1]);
//    }
//
////    for (int i = 0; i < p.size(); i++) {
////        cout << p[i] << " ";
////    }
////    cout << endl;
//}
//
//int main() {
//
//    init();
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    init_p();
//
//    if (m == 1 && (num[0] == 1 || num[0] == n)) {
//        printf("1\n");
//    } else {
//        solve();
//    }
//}