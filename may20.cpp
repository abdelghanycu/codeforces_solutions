//#include <bits/stdc++.h>
//
//#define N 100005
//#define ll long long
//using namespace std;
//
//int n;
//ll arr[N];
//
//bool negativo() {
//    ll sum = 0;
//    int cnt = 0;
//    priority_queue<ll, vector<ll>, greater<ll>> pq;
//    for (int i = 0; i < n; i++) {
//        pq.push(arr[i]);
//        sum += arr[i];
//        if (sum < 0) {
//            cnt++;
//            sum -= pq.top();
//            pq.pop();
//        }
//    }
//    return cnt > 1;
//}
//
//bool conta() {
//    ll sum = 0;
//    int cnt = 0;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//        if (sum < 0) {
//            cnt++;
//            sum -= arr[i];
//        }
//    }
//    return cnt == 0;
//}
//
//void solve() {
//    ll sum = 0;
//    int idx = -1;
//    for (int i = 0; i < n; i++) {
//        sum += arr[i];
//        if (sum < 0) {
//            idx = i;
//            break;
//        }
//    }
//    vector<int> vec;
//    for (int i = 0; i <= idx; i++) {
//        if (arr[i] < 0) {
//            vec.push_back(arr[i]);
//
//        }
//    }
//
//
//    sort(vec.begin(), vec.end());
////    for(int i = 0; i < vec.size() ;i++) {
////        cout << vec[i] << " ";
////    }
////    cout << "********\n";
//
//    int low = 0;
//    int high = vec.size() - 1;
//    int mid = (high + low) / 2;
//    ll ans = 0;
//    while (high >= low) {
//        mid = (high + low) / 2;
////        cout << "mid=" << vec[mid] << endl;
//        ll sum2 = sum - vec[mid];
//        for (int i = idx + 1; i < n; i++) {
//            sum2 += arr[i];
//            if (sum2 < 0) {
//                break;
//            }
//        }
//        if (sum2 < 0) {
//            high = mid - 1;
//        } else {
//            low = mid + 1;
//            ans = vec[mid];
//        }
//    }
////cout << "ans" << ans << endl;
////    cout << vec[mid] << endl;
////cout << idx << endl;
//
//    vec.clear();
//    for(int i = 0; i <= idx; i++) {
////        cout << "arr[i]=" << arr[i] << endl;
//        if(arr[i] <= ans)
//        vec.push_back(i+1);
//    }
//    printf("%d\n", vec.size());
//    for (int i = 0; i < vec.size(); i++) {
//        printf("%d ", vec[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", &arr[i]);
//    }
//
//
////    if(n != 4 && n != 7) {
////        solve();
////        return 0;
////    }
//
//    if (conta()) {
//        printf("morete chapou: errou conta!\n");
//    } else if (negativo()) {
//        printf("morete chapou: ficou com saldo negativo!\n");
//    } else {
//        solve();
//    }
//}