//#include <bits/stdc++.h>
//
//#define ll long long
//using namespace std;
//
//int t;
//ll a, m, k;
//
//ll solve(ll v) {
//
//    k = __gcd(a, m);
//
//    map<ll, int> map_m, map_k;
//
//    ll mm = m;
//    for (ll i = 2; i * i <= mm; i++) {
//        while (mm % i == 0) {
//            map_m[i]++;
//            mm /= i;
//        }
//    }
//    if (mm != 1) {
//        map_m[mm]++;
//    }
//
//    ll kk = k;
//    for (ll i = 2; i * i <= kk; i++) {
//        while (kk % i == 0) {
//            map_k[i]++;
//            kk /= i;
//        }
//    }
//    if (kk != 1) {
//        map_k[kk]++;
//    }
//
//    vector<ll> vec;
//    for (auto it = map_m.begin(); it != map_m.end(); it++) {
//        if (map_m[it->first] - map_k[it->first]) {
//            vec.push_back(it->first);
//        }
//    }
//
//
//
//    ll res = (v / k);
////    cout << res << endl;
//
//    int N = vec.size();
//    for (int i = 1; i < (1 << N); i++) {
//        int cnt = 0;
//        ll VV = k;
//        for (int j = 0; j < N; j++) {
//            if ((i & (1 << j))) {
//                VV *= vec[j];
//                cnt++;
//            }
//        }
//        res += v / ((cnt % 2 ? -1 : 1) * VV);
////        cout << VV << " " << res << endl;
//    }
//
////    cout << res << "**********\n";
//
//    return res;
//
//
////    return (v / k) - (v / new_m);
//}
//
//int main() {
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%lld%lld", &a, &m);
//        printf("%lld\n", (solve(m + a - 1) - solve(a - 1)));
//    }
//}