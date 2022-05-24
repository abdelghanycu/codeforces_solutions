//#include <bits/stdc++.h>
//using namespace std;
//
//int t;
//vector<int> time1;
//map<int, int> mp;
//
//int solve() {
//
//    for(int i = 0; i < time1.size(); i++) {
//        mp[time1[i] % 60]++;
//    }
//
//    int res = (mp[0] * (mp[0] - 1)) / 2 + (mp[30] * (mp[30] - 1)) / 2;
//
//    for(int i = 1; i <= 29; i++) {
//        res += mp[i] * mp[60 - i];
//    }
//
//    return res;
//}
//
//int main() {
//
//    cout << (-1 % 5) << endl;
//
//    cin >> t;
//    time1.resize(t);
//    for(int i = 0; i < t; i++) {
//        cin >> time1[i];
//    }
//
//    cout << solve();
//}