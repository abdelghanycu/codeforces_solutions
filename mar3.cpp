//#include <bits/stdc++.h>
//#define ll long long
//
//using namespace std;
//
//int t, n;
//double x, y, u, v;
//vector<pair<double, double> > vec;
//
//int square(double i, double j) {
//    if (i > 0 && j > 0) {
//        return 1;
//    } else if (i > 0 && j < 0) {
//        return 4;
//    } else if (i < 0 && j > 0) {
//        return 2;
//    } else if (i < 0 && j < 0) {
//        return 3;
//    } else {
//        return -1;
//    }
//}
//
//int ops(int val) {
//    if (val == 1) {
//        return 3;
//    } else if (val == 2) {
//        return 4;
//    }
//    return -1;
//}
//
//ll solve() {
//
//    int di_plus = 0, di_minus = 0;
//    int dj_plus = 0, dj_minus = 0;
//
//    map<pair<double, int>, ll> mp;
//    for (int i = 0; i < n; i++) {
//        int k = square(vec[i].first, vec[i].second);
//        if (k == -1) {
//            if(vec[i].first == 0) {
//                if (vec[i].second > 0)di_plus++;
//                else di_minus++;
//            }else {
//                if (vec[i].first > 0)dj_plus++;
//                else dj_minus++;
//            }
//            continue;
//        }
////        cout << vec[i].second << " " << vec[i].first << endl;
//        mp[make_pair((vec[i].second / vec[i].first), k)]++;
//    }
//
////    cout << di_plus << " " << di_minus << endl;
//
//    ll res = di_plus * di_minus + dj_plus * dj_minus;
//
//
//    for (auto it = mp.begin(); it != mp.end(); it++) {
//
////        cout << "slope " << it->first.first << " square " << it->first.second << " count " << it->second << endl;
//
//        double slope = it->first.first;
//        ll k = ops(it->first.second);
////        cout << "count of the op elements = " << mp[make_pair(slope, k)] << endl;
//
//        if (k != -1 && mp.count(make_pair(slope, k))) {
//            res += it->second * mp[make_pair(slope, k)];
//        }
//    }
//
//    return res;
//}
//
//int main() {
//
//    scanf("%d", &t);
//
//    while (t--) {
//        vec.clear();
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++) {
//            scanf("%lf%lf%lf%lf", &x, &y, &u, &v);
//            u -= x;
//            v -= y;
//            vec.push_back(make_pair(u, v));
//        }
//
////        for (int i = 0; i < n; i++) {
////            cout << vec[i].first << " " << vec[i].second << endl;
////        }
////
////        cout << "*****************" << endl;
//
//        printf("%lld\n", solve());
//    }
//}