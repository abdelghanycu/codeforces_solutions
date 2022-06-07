//#include <bits/stdc++.h>
//
//#define ll long long
//using namespace std;
//
//int t, n;
//vector<ll> vec;
//
//void init() {
//    for (ll i = 3; i < 50000; i += 2LL) {
//        vec.push_back((i * i) / 2LL + 1LL);
//    }
//}
//
//void solve() {
//    int res = 0;
////    for (int i = 0; i < vec.size(); i++) {
////        if (vec[i] <= n) {
////            res++;
////        } else {
////            break;
////        }
////    }
//    int low = 0;
//    int high = vec.size() - 1;
//    int mid = 0;
//    while (low <= high) {
//        mid = (high + low) / 2;
//        if (vec[mid] <= n) {
//            low = mid + 1;
//            res = mid + 1;
//        } else {
//            high = mid - 1;
//        }
//    }
//    printf("%d\n", res);
//}
//
//int main() {
//    init();
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d", &n);
//        solve();
//    }
//}