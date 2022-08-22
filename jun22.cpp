//#include <bits/stdc++.h>
//#define N 1000
//#define ll long long
//using namespace std;
//
//int arr[N];
//
//ll sum(ll n) {
//    return n * (n + 1) / 2;
//}
//
//
//ll t, n;
//
//int main() {
//    scanf("%lld", &t);
//    while(t--){
//        scanf("%lld", &n);
//        ll nn = n;
//        if(n % 2) {
//            printf("2\n");
//        }else {
//            while(n % 2 == 0) {
//                n /= 2;
//            }
//            if(n != 1) {
//                if(n >= 2000000000) {
//                    printf("--1\n");
//                }else
//                printf("%lld\n", n);
//            }else {
//                printf("-1\n");
//            }
//        }
////        int ans = -1;
////        for(int k = 2; k < 1000; k++) {
////            ll val = sum(k);
////            if(val > n) {
////                break;
////            }
////            if((n - val) % k == 0) {
////                ans = k;
////                break;
////            }
////        }
////        printf("%d\n", ans);
//    }
//}
//
////int main() {
////
//////    cout << sum(999999527) << endl;
//////
//////    ll b = 134217664515014656;
//////    while(b%2==0) {
//////        b/=2;
//////    }
//////
//////    cout << (7 - sum(7) + 5LL * 7) % 7  << endl;
//////
//////    cout << b << endl;
//////    return 0;
////    for(int k = 2; k < N; k++) {
////        long long val = sum(k);
//////        cout << val << endl;
////        for(int j = val; j < N; j+=k) {
////            if(!arr[j])
////            arr[j] = k;
////        }
////    }
////
////
////    for(int i = 2; i < N; i++) {
////        cout << "k=" << arr[i] << " n=" << i << endl;
////    }
////}