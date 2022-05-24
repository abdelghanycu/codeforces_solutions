//#include <bits/stdc++.h>
//
//using namespace std;
//
//int t, n, m;
//vector<pair<int, int> > vec;
//
//void solve() {
//    vec.clear();
//    int cnt = 0;
//    while (n) {
////        cout << n << endl;
//        if (n > 10) {
//            int k = sqrt(n);
//            m = n / k + (n % k == 0 ? 0 : 1);
//            cnt += n - m + 1 + 1;
//            for (int i = m + 1; i < n; i++) {
//                vec.push_back(make_pair(i, i + 1));
//            }
//            vec.push_back(make_pair(n, m));
//            vec.push_back(make_pair(n, m));
//        } else {
//            cnt += n + 1;
//            m = 0;
//            if (n == 10) {
//                vec.push_back(make_pair(6, 7));
//                vec.push_back(make_pair(7, 8));
//                vec.push_back(make_pair(8, 9));
//                vec.push_back(make_pair(9, 10));
//                vec.push_back(make_pair(10, 5));
//                vec.push_back(make_pair(10, 5));
//                vec.push_back(make_pair(5, 3));
//                vec.push_back(make_pair(5, 3));
//                vec.push_back(make_pair(3, 4));
//                vec.push_back(make_pair(4, 2));
//                vec.push_back(make_pair(4, 2));
//            } else if (n == 9) {
//                vec.push_back(make_pair(6, 7));
//                vec.push_back(make_pair(7, 8));
//                vec.push_back(make_pair(8, 9));
//                vec.push_back(make_pair(9, 5));
//                vec.push_back(make_pair(9, 5));
//                vec.push_back(make_pair(5, 3));
//                vec.push_back(make_pair(5, 3));
//                vec.push_back(make_pair(3, 4));
//                vec.push_back(make_pair(4, 2));
//                vec.push_back(make_pair(4, 2));
//            } else if (n == 8) {
//                vec.push_back(make_pair(5, 6));
//                vec.push_back(make_pair(6, 7));
//                vec.push_back(make_pair(7, 8));
//                vec.push_back(make_pair(8, 4));
//                vec.push_back(make_pair(8, 4));
//                vec.push_back(make_pair(3, 4));
//                vec.push_back(make_pair(4, 2));
//                vec.push_back(make_pair(4, 2));
//            } else if (n == 7) {
//                vec.push_back(make_pair(5, 6));
//                vec.push_back(make_pair(6, 7));
//                vec.push_back(make_pair(7, 4));
//                vec.push_back(make_pair(7, 4));
//                vec.push_back(make_pair(3, 4));
//                vec.push_back(make_pair(4, 2));
//                vec.push_back(make_pair(4, 2));
//            } else if (n == 6) {
//                vec.push_back(make_pair(4, 5));
//                vec.push_back(make_pair(5, 6));
//                vec.push_back(make_pair(6, 3));
//                vec.push_back(make_pair(6, 3));
//                vec.push_back(make_pair(3, 2));
//                vec.push_back(make_pair(3, 2));
//            } else if (n == 5) {
//                vec.push_back(make_pair(4, 5));
//                vec.push_back(make_pair(5, 3));
//                vec.push_back(make_pair(5, 3));
//                vec.push_back(make_pair(3, 2));
//                vec.push_back(make_pair(3, 2));
//            } else if (n == 4) {
//                vec.push_back(make_pair(3, 4));
//                vec.push_back(make_pair(4, 2));
//                vec.push_back(make_pair(4, 2));
//            } else {
//                vec.push_back(make_pair(3, 2));
//                vec.push_back(make_pair(3, 2));
//            }
//            break;
//        }
//
//
//        n = m;
//    }
////    cout << "cnt " << cnt << endl;
//
////    double a[200001];
////    for (int i = 1; i < 200001; i++) {
////        a[i] = i;
////    }
////
////    for (int i = 0; i < vec.size(); i++) {
////        a[vec[i].first] = ceil(a[vec[i].first] / a[vec[i].second]);
////    }
////
////    for(int i = 1; i < 200001; i++) {
////        if(a[i] != 1) {
////            cout << i << " " << a[i] << endl;
////        }
////    }
//
//    printf("%d\n", (int) vec.size());
//    for (int i = 0; i < vec.size(); i++) {
//        printf("%d %d\n", vec[i].first, vec[i].second);
//    }
//}
//
//int main() {
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d", &n);
//        solve();
//    }
//}