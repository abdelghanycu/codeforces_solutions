//#include <bits/stdc++.h>
//using namespace std;
//
//int a, b;
//
//int main() {
//
//    scanf("%d %d", &a, &b);
//
//    if(a < b) {
//        printf("0\n");
//        return 0;
//    }
//
//    if(a == b) {
//        printf("infinity\n");
//        return 0;
//    }
//    int cnt = 0;
//    int k = a - b;
//
//
//    if(k == b) {
//        printf("0\n");
//        return 0;
//    }
//
////    int I = 1;
////
////    while(k / I > b) {
////        if(k % I == 0){
////            cnt++;
////        }
////        I++;
////    }
//
//    for(int i = 1; i * i <= k; i++) {
//        if(k % i == 0) {
//            if(k / i == i && k / i > b) cnt++;
//            else {
//                if(k / i > b) cnt++;
//                if(k / (k / i) > b) cnt++;
//            }
//        }
//    }
//
//
//    printf("%d\n", cnt);
//}