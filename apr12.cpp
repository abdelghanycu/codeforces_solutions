//#include <bits/stdc++.h>
//
//#define N 1000001
//using namespace std;
//
//int x2;
//int siv[N];
//vector<int> primes;
//
//void init() {
//    for (int i = 2; i < N; i++) {
//        siv[i] = 1;
//    }
//    for (int i = 2; i < N; i++) {
//        if (siv[i]) {
//            primes.push_back(i);
//            for (long long j = 1LL * i * i; j < N; j += i) {
//                siv[j] = 0;
//            }
//        }
//    }
//}
//int cnt = 0;
//
//int max_factor(int x) {
//    if (siv[x]) {
//        return x;
//    }
//    int n = x;
//    int k = x;
//    for (int i = 0; i < primes.size() && primes[i] <= x && n != 1; i++) {
//        while (n % primes[i] == 0) {
//            n /= primes[i];
//            k = primes[i];
//        }
//        if (siv[n]) {
//            cnt++;
//            return n;
//        }
//    }
//    return k;
//}
//
//void solve() {
//
//    int x0 = x2;
//
//    int p1 = max_factor(x2);
//
////    cout << "p1=" << p1 << endl;
//
//    for (int i = x2 - p1 + 1; i < x2; i++) {
//        int x1 = i;
//        int p0 = max_factor(x1);
//        if (p0 == x1) {
//            x0 = min(x1, x0);
//        } else {
//            x0 = min(x1 - p0 + 1, x0);
//        }
////        cout << "x1= " << x1 << ",  p0=" << p0 << ",  x0=" << x0 << endl;
//    }
//
//    printf("%d\n", x0);
//}
//
//int main() {
//
//    init();
//
////    cout << max_factor(479904) << endl;
//
////    cout << max_factor(10) << endl;
//
//    scanf("%d", &x2);
//    solve();
////    cout << "cnt = " << cnt << endl;
//}