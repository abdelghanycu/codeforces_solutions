//#include <bits/stdc++.h>
//
//#define N 15000000
//using namespace std;
//
//vector<int> p;
//bool pp[N];
//int n, g;
//vector<int> vec;
//unordered_map<int, int> mp;
//
//
//void init() {
//
//    pp[1] = 1;
//    for(int i = 4; i < N; i+=2)
//        pp[i] = 1;
//
//    for (int i = 3; i < N; i += 2) {
//        if (!pp[i]) {
//            for (int j = i + i; j < N; j += i) {
//                pp[j] = 1;
//            }
//        }
//    }
//
//    p.push_back(2);
//    for (int i = 3; i < N; i += 2) {
//        if (!pp[i]) p.push_back(i);
//    }
//}
//
//void fact(int x) {
//    if (x < N && !pp[x]) {
////        cout << "here" << endl;
//        mp[x]++;
//        return;
//    }
//    for (int i = 0; i < p.size() && p[i] * p[i] <= x; i++) {
//        int k = p[i];
//        if (x % k == 0) {
////            cout << k << " " << x << endl;
//            mp[k]++;
//            k *= p[i];
//        }
//    }
//}
//
//void solve() {
//
//    for(int i = 0; i < n; i++) {
//        if(vec[i] / g != 1) {
//            fact(vec[i] / g);
//        }
//    }
//    if (mp.empty()) {
//        printf("-1\n");
//        return;
//    }
//    int res = 0;
//    for (auto it = mp.begin(); it != mp.end(); it++) {
//        res = max(res, it->second);
//    }
//
//    printf("%d\n", (n - res));
//}
//
//int main() {
//
//    init();
//    scanf("%d", &n);
//    vec.resize(n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &vec[i]);
//        if (i == 0) g = vec[0];
//        g = __gcd(g, vec[i]);
//    }
//    solve();
////    for (auto it = mp.begin(); it != mp.end(); it++) {
////        cout << "mp = " << it->first << " " << it->second << endl;
////    }
//}
//
///*
//5
//12121 8547 54789654 5478545 12541254
// */
//
//
////
////
////#include<bits/stdc++.h>
////
////using namespace std;
////#define MN 300000
////#define MX 15000000
////int a[MN + 5], u[MX + 5], p[MX + 5], pn, s[MX + 5];
////
////int gcd(int x, int y) { return y ? gcd(y, x % y) : x; }
////
////void init() {
////
////    u[1] = 1;
////    for(int i = 4; i < MX; i+=2)
////        u[i] = 1;
////
////    for (int i = 3; i < MX; i += 2) {
////        if (!u[i]) {
////            for (int j = i + i; j < MX; j += i) {
////                u[j] = 1;
////            }
////        }
////    }
////
////    p[0] = 2;
////    int cnt = 1;
////    for (int i = 3; i < MX; i += 2) {
////        if (!u[i]) p[cnt++] = i;
////    }
////}
////
////int main() {
////    int n, i, j, g, x, ans = 0;
////    init();
//////    for (i = 2; i <= MX; ++i) {
//////        if (!u[i])u[i] = p[++pn] = i;
//////        for (j = 1; i * p[j] <= MX; ++j) {
//////            u[i * p[j]] = p[j];
//////            if (i % p[j] == 0)break;
//////        }
//////    }
////    scanf("%d", &n);
////    for (g = 0, i = 1; i <= n; ++i)scanf("%d", &a[i]), g = gcd(g, a[i]);
////    for (i = 1; i <= n; ++i)
////        for (j = a[i] / g; j > 1;)
////            for (++s[x = u[j]]; u[j] == x;)
////                j /= u[j];
////    for (i = 1; i <= MX; ++i)ans = max(ans, s[i]);
////    printf("%d", ans ? n - ans : -1);
////}