//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, v;
//map<int, int> mp;
//map<int, int>::reverse_iterator it;
////vector<pair<int, int> > vec;
//vector<int> res;
//int same_num, old_freq, k, cnt, idx, first, second;
//
//int main() {
//
//    freopen("input","r",stdin);
////    scanf("%d", &n);
//    cin >> n;
//    for (int i = 0; i < n * n; i++) {
////        scanf("%d", &v);
//        cin >> v;
//        mp[v]++;
//    }
//
////    for(auto it = mp.rbegin(); it != mp.rend(); it++) {
////        cout << it->first << " " << it->second << endl;
////    }
////    cout << __gcd(923264237, 524125987) << endl;
////    cout << __gcd(923264237, 374288891) << endl;
////    cout << __gcd(524125987, 374288891) << endl;
////    if(1)return 0;
//
//    idx = 0;
//
//    for (it = mp.rbegin(); it != mp.rend(); it++) {
//
////        cout << "*** " << idx <<  " "  << res.size() << " " << mp.size() << endl;
//
//        first = it->first;
//        second = it->second;
//
//        if (idx == 0) {
//            int cnt = sqrt(second);
//            while (cnt--) {
//                res.push_back(first);
//            }
//        }
//        else if (idx == mp.size() - 1) {
//            if (res.size() == n) {
//                break;
//            }
//            while (res.size() != n) {
//                res.push_back(it->first);
//                if (res.size() == n) {
//                    break;
//                }
//            }
//        }
//        else {
//            if (second == 0) continue;
//
//            same_num = 0;
//            for (int j = 0; j < res.size(); j++) {
//                if (__gcd(first, res[j]) == first) {
//                    same_num++;
//                }
//            }
//            old_freq = second;
//            k = 0;
//            cnt = 0;
//            while (second) {
//
//                second = old_freq;
//                k++;
//                cnt = k;
//                second -= cnt * cnt;
//
////                cout << first << " " << cnt << " " << second << " " << old_freq << " " << same_num << endl;
//
//                second -= same_num * cnt * 2;
//            }
//
//            for (int i = 0; i < res.size(); i++) {
//                mp[__gcd(res[i], first)] -= 2;
//            }
//
//            while (cnt--) {
//                res.push_back(first);
//                if (res.size() == n) {
//                    break;
//                }
//            }
//        }
//
//        idx++;
//        if (res.size() == n) {
//            break;
//        }
//
//    }
//
//    for (int i = 0; i < res.size(); i++) {
////        printf("%d ", res[i]);
//        cout << res[i] << " ";
//    }
//    cout << endl;
////    printf("\n");
//
//
//}
//
///*
//4
//8 4 4 4 4  4 4 4 4 2 2 2 2  2 2 2
// */