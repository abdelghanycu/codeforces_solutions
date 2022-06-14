//https://codeforces.com/contest/7/problem/C
//#include <bits/stdc++.h>
//#define ll long long
//using namespace std;
//
//ll a, b, c;
//ll x, y;
//
//ll ex_gcd(ll a, ll b, ll &x ,ll &y){
//    if (b == 0) {
//        x = 1;
//        y = 0;
//        return a;
//    }
//    ll x1, y1;
//    ll d = ex_gcd(b, a % b, x1, y1);
//    x = y1;
//    y = x1 - y1 * (a / b);
//    return d;
//}
//
//int main(){
//    scanf("%lld %lld %lld",&a, &b, &c);
//    ex_gcd(a,b,x,y);
//    int g = __gcd(a,b);
//    int fact = - 1 * c / g;
//    x *= fact;
//    y *= fact;
//    if(a * x + b * y + c == 0)
//        printf("%lld %lld",x,y);
//    else
//        printf("-1");
//}