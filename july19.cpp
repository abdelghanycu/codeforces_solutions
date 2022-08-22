//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n;
//vector<int> vec;
//
//int rec(int idx) {
//
//    int res = 1e9;
//
//    if (idx + 1 < n)
//        res = min(res, abs(vec[idx] - vec[idx + 1]) + rec(idx + 1));
//    if (idx + 2 < n)
//        res = min(res, abs(vec[idx] - vec[idx + 2]) + rec(idx + 2));
//
//    cout << idx << " " << res << endl;
//    return res;
//}
//
//int main() {
//    cin >> n;
//    vec.resize(n);
//    for (int i = 0; i < n; i++) {
//        cin >> vec[i];
//    }
//
////    for(int i = 0; i < n; i++) {
////        cout << vec[i] << " ";
////    }
////    cout << endl;
//
//    cout << rec(0);
//}