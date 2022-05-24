//#include <bits/stdc++.h>
//
//using namespace std;
//
//int t, n;
//
//void solve() {
//    int cnt = 0;
//    while (n % 2 == 0) {
//        cnt++;
//        n /= 2;
//    }
//    if (n != 1) {
//        printf("Alice\n");
//    } else {
//        if (cnt % 2 == 0) {
//            printf("Alice\n");
//        } else {
//            printf("Bob\n");
//        }
//    }
//}
//
//int main() {
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d", &n);
//        if (n % 2 == 1) {
//            printf("Bob\n");
//        } else {
//            solve();
//        }
//    }
//}