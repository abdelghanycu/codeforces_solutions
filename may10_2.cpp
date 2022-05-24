//#include <bits/stdc++.h>
//
//using namespace std;
//
//map<int, int> mp, sol;
//int t, n, val, ft, rm;
//
//int main() {
//
//    scanf("%d", &t);
//    while (t--) {
//        mp.clear();
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &val);
//            mp[val]++;
//        }
//
//        bool finish = 0;
//        for (auto it = mp.begin(); it != mp.end(); it++) {
//            if (it->second >= n / 2) {
//                printf("-1\n");
//                finish = 1;
//                break;
//            }
//        }
//        if (finish) {
//            continue;
//        }
//        int k = 0;
//        for (auto it = mp.begin(); it != mp.end();) {
//            ft = it->first;
//            rm = n / 2 - it->second;
//            sol.clear();
//            for (auto itt = ++it; itt != mp.end(); itt++) {
//                int x = (int) abs(ft - itt->first);
//                sol[1] += itt->second;
//                sol[x] += itt->second;
//                for (int i = 2; i * i <= x; i++) {
//                    if (x % i == 0) {
//                        if (i * i == x) {
//                            sol[i] += itt->second;
//                        } else {
//                            sol[i] += itt->second;
//                            sol[x / i] += itt->second;
//                        }
//                    }
//                }
//                int kk = 0;
//                for (auto sol_it = sol.begin(); sol_it != sol.end(); sol_it++) {
//                    if (sol_it->second >= rm) {
//                        kk = sol_it->first;
//                    }
//                }
//                k = max(k, kk);
//            }
//        }
//
//        printf("%d\n", k);
//    }
//}