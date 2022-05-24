//#include <bits/stdc++.h>
//
//#define ll long long
//#define N 1000005
//using namespace std;
//
//ll n, b;
//vector<int> p;
//vector<pair<ll, ll> > factors;
//
//
//int primes[N];
//
//void init2() {
//    for (int i = 2; i < N; i++) {
//        primes[i] = 1;
//    }
//    for (int i = 2; i < N; i++) {
//        if (primes[i]) {
//            p.push_back(i);
//            for (int j = i * 2; j < N; j += i) {
//                primes[j] = 0;
//            }
//        }
//    }
//}
//
//void init() {
//    init2();
//    ll bb = b;
//    for (int i = 0; i < p.size() && p[i] <= b; i++) {
//        int cnt = 0;
//        while (bb % p[i] == 0) {
//            bb /= p[i];
//            cnt++;
//        }
//        if (cnt) {
//            factors.push_back(make_pair(p[i], cnt));
//        }
//    }
//    if (bb != 1) {
//        factors.push_back(make_pair(bb, 1LL));
//    }
//
////    ll bb = b;
////    for (ll i = 2; i <= b; i++) {
////        int cnt = 0;
////        while (bb % i == 0) {
////            bb /= i;
////            cnt++;
////        }
////        if (cnt) {
////            factors.push_back(make_pair(i, cnt));
////        }
////    }
////    if (bb != 1) {
////        factors.push_back(make_pair(bb, 1LL));
////    }
//}
//
//int main() {
//    scanf("%lld%lld", &n, &b);
//    init();
//    ll res = 0;
//
//    for (int i = 0; i < factors.size(); i++) {
//        ll k = 0;
//        ll val = n;
//        while (val > 0) {
//            k += val / factors[i].first;
//            val /= factors[i].first;
//        }
//        if (i == 0) res = k / factors[i].second;
//        else res = min(res, k / factors[i].second);
//    }
//    printf("%lld\n", res);
//}