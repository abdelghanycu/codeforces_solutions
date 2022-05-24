//#include <bits/stdc++.h>
//
//#define N 100005
//using namespace std;
//
//int fail[N];
//int n, xi, yi;
//vector<int> divisors;
//
//
//void calc_div() {
//    divisors.clear();
//    for (int i = 1; i * i <= xi; i++) {
//        if (xi % i == 0) {
//            divisors.push_back(i);
//            if (i * i != xi) {
//                divisors.push_back(xi / i);
//            }
//        }
//    }
//}
//
//void solve(int it) {
//    calc_div();
//    int lo = it - yi;
//    int cnt = 0;
//    for (int i = 0; i < divisors.size(); i++) {
//        if (fail[divisors[i]] < lo) {
//            cnt++;
//        }
//        fail[divisors[i]] = it;
//    }
//    printf("%d\n", cnt);
//}
//
//
//int main() {
//
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d%d", &xi, &yi);
//        solve(i + 1);
//    }
//}