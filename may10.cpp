//#include <bits/stdc++.h>
//
//using namespace std;
//
//set<int> st;
//int t, n, val, ft;
//
//int main() {
//
//    scanf("%d", &t);
//    while (t--) {
//        st.clear();
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &val);
//            st.insert(val);
//        }
//
//        if (st.size() == 1) {
//            printf("-1\n");
//            continue;
//        }
//
//        auto it = st.begin();
//        ft = *it;
//        it++;
//        val = 0;
//        for (; it != st.end(); it++) {
////            cout << abs(*it - ft) << " ";
//            if (val)
//                val = __gcd(val, (int) abs(*it - ft));
//            else
//                val = (int)abs(*it - ft);
//        }
////        cout << "******" << endl;
//        printf("%d\n", val);
//    }
//}