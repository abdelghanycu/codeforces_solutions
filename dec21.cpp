//#include <bits/stdc++.h>
//
//using namespace std;
//
//int t, n;
//vector<int> vec;
//
//bool solve() {
//
//    for (int i = 1; i <= n; i++) {
//        int k = i + 1;
//        if (k > vec[i - 1]) {
//            continue;
//        }
//        bool flag = 0;
//        while (k) {
//            if (vec[i - 1] % k != 0) {
//                flag = 1;
//                break;
//            }
//            k--;
//        }
//        if (!flag) return 0;
//    }
//    return 1;
//}
//
//int main() {
//
//    scanf("%d", &t);
//
//    while (t--) {
//
//        scanf("%d", &n);
//        vec.clear();
//        vec.resize(n);
//
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &vec[i]);
//        }
//
////        if (solve())
////            printf("YES\n");
////        else
////            printf("NO\n");
//
//        if (vec[0] % 2 == 1)
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//}