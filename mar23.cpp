//#include <bits/stdc++.h>
//
//#define N 10000005
//using namespace std;
//
//int pp[N];
//vector<int> prime;
//int memo[N];
//
//void sieve() {
//    prime.push_back(2);
//    memset(pp, 0, sizeof pp);
//    pp[0] = 1;
//    pp[1] = 1;
//    for (int i = 3; i < N; i += 2) {
//        if (!pp[i]) {
//            prime.push_back(i);
//            for (int j = i; j < N; j += i) {
//                pp[i] = 1;
//            }
//        }
//    }
//
////    cout << prime.size();
//}
//
//int sum_cofactor(int n) {
//    cout << n << endl;
//    if (!pp[n]) {
//        return n + 1;
//    }
//
//    vector<int> cofactor;
//    int nn = n;
//    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= n; i++) {
//        while (nn % prime[i] == 0) {
//            cofactor.push_back(prime[i]);
//            nn /= prime[i];
//        }
//    }
//
//    int sum = 0;
//    int sz = cofactor.size();
//    if(sz > 20) cout << "here" << endl;
////    for (int i = 1; i < (1 << sz); i++) {
////        int k = 1;
////        for (int j = 0; j < sz; j++) {
////            if (i & j)k *= prime[j];
////        }
////        sum += k;
////    }
//    return sum;
//}
//
//int sum_div(int n) {
//    int sum = 1 + n;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            if (n / i != i) sum += n / i;
//            sum += i;
//        }
//    }
//    return sum;
//}
//
//
//void pre_process() {
//    for (int i = 1; i < N; i++) {
////        int x = sum_div(i);
//        int x = sum_cofactor(i);
//        if (x < N) {
//            memo[x] = i;
//        }
//    }
//    cerr << "abdelghany" << endl;
//}
//
//int t, n;
//
//int main() {
//
//    memset(memo, -1, sizeof memo);
//    sieve();
//    pre_process();
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d", &n);
//        printf("%d\n", memo[n]);
//    }
//
////    int MAX = 0;
////    for (int i = 0; i < 1005; i++) {
//////        MAX = max(MAX, sum_div(i));
////        cout << "number " << i << " = " << sum_div(i) << endl;
////    }
//
////    cout << MAX << endl;
//
//}