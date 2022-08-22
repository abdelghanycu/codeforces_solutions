#include <bits/stdc++.h>

using namespace std;

int t, n;
//int arr[64] = {2, 0, 0, 1, 1, 0, 0, 6, 0, 3, 1, 0, 0, 1, 0, 2, 1, 0, 2, 0, 1, 0, 4, 0, 3, 0, 1, 0, 0, 1, 0, 2, 2, 0, 1, 0, 0, 3, 0, 1, 0, 1, 5, 0, 0, 1, 0, 2, 0, 1, 2, 0, 1, 0, 0, 4, 0, 1, 0, 2, 0, 1, 0, 3};

int read(int a, int b) {
    cout << "? " << a << " " << b << endl;
    cout.flush();
    int val;
    cin >> val;
    return val;
//    if(arr[a-1] > arr[b-1]) return 1;
//    if(arr[a-1] < arr[b-1]) return 2;
//    return 0;
}

int solve(int a, int b, int c, int d) {
    int w_ac = read(a, c);
    int ans = 0;
    if (w_ac == 0) {
        ans = read(b, d);
        if(ans == 1) {
            return b;
        }else {
            return d;
        }
    } else if (w_ac == 1) {
        ans = read(a, d);
        if(ans == 1) {
            return a;
        }else {
            return d;
        }
    } else {
        ans = read(b, c);
        if(ans == 1) {
            return b;
        }else {
            return c;
        }
    }
}

queue<int> qu;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < (1 << n); i++) {
            qu.push(i + 1);
        }
        while (!qu.empty()) {
            if(qu.size() == 1) {
                cout << "! " << qu.front() << endl;
                cout.flush();
                qu.pop();
                break;
            }
            else if (qu.size() == 2) {
                int a = qu.front();
                qu.pop();
                int b = qu.front();
                qu.pop();
                int ans = read(a, b);
                if(ans == 1)
                    cout << "! " << a << endl;
                else
                    cout << "! " << b << endl;
                cout.flush();
                break;
            } else {
                int a = qu.front();
                qu.pop();
                int b = qu.front();
                qu.pop();
                int c = qu.front();
                qu.pop();
                int d = qu.front();
                qu.pop();
                qu.push(solve(a, b, c, d));
            }
        }
    }
}