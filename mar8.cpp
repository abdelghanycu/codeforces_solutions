//#include <bits/stdc++.h>
//
//#define MAX 1000000002
//#define SQ_MAX 31625
//using namespace std;
//
//vector<int> pr;
//int b[SQ_MAX];
//int n;
//
//void init() {
//
//    for (int i = 0; i < SQ_MAX; i++) {
//        b[i] = 1;
//    }
//
//    for (int i = 3; i < SQ_MAX; i += 2) {
//        if (b[i]) {
//            for (int j = i * 2; j < SQ_MAX; j += i) {
//                b[j] = 0;
//            }
//        }
//    }
//
//    pr.push_back(2);
//
//    for (int i = 3; i < SQ_MAX; i += 2) {
//        if (b[i]) pr.push_back(i);
//    }
//}
//
//bool is_prime(int x) {
//    for (int i = 0; i < pr.size() && pr[i] * pr[i] <= x; i++) {
//        if (x % pr[i] == 0) return 0;
//    }
//    return 1;
//}
//
//void solve(int x) {
//    for (int i = 0; i < pr.size(); i++) {
//        if (is_prime(n - pr[i])) {
//            printf("2\n%d %d\n", n - pr[i], pr[i]);
//            break;
//        } else if (is_prime(n - pr[i] * 2)) {
//            printf("3\n%d %d %d\n", n - pr[i] * 2, pr[i], pr[i]);
//            break;
//        }
//    }
//}
//
//int main() {
//    init();
//    scanf("%d", &n);
//    if (is_prime(n)) {
//        printf("1\n%d\n", n);
//    } else {
//        solve(n);
//    }
//}