#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/contest/1152/problem/C

vector<long long> vec;

void fact(int n) {
//    cout << "a-b " << n << endl;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            vec.push_back(i);
            if(i * i != n) {
                vec.push_back(n/i);
            }
        }
    }
//    for (int i = 0; i < vec.size(); i++) {
//        cout << vec[i] << " ";
//    }
//    cout << endl;
}

int main() {

    long long a, b;
    cin >> a >> b;

    if(a > b) {
        swap(a, b);
    }

    long long res = 0;
    long long min_lcm = (a * b) / __gcd(a, b);
    fact(abs(a - b));
//    cout << (a + 46333) * (b + 46333) / __gcd(a + 46333, b + 46333);

    for(int i = 0; i < vec.size(); i++) {
        int k = vec[i] - (a % vec[i]);
//        cout << k << endl;
        long long aa = a + k;
        long long bb = b + k;
        long long new_lcm = (aa * bb) / __gcd(aa, bb);
        if (min_lcm > new_lcm) {
            res = k;
            min_lcm = new_lcm;
        }
    }

//    for (long long i = 1; i < 50000; i++) {
////        cout << i << ": ";
//        long long aa = a + i;
//        long long bb = b + i;
////        cout << (aa * bb) / __gcd(aa, bb) << endl;
////        cout << __gcd(aa, bb) << endl;
//        long long new_lcm = (aa * bb) / __gcd(aa, bb);
//        if (min_lcm > new_lcm) {
//            res = i;
//            min_lcm = new_lcm;
//        }
//    }

    cout << res << endl;
}