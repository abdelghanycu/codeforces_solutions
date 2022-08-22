////#include <bits/stdc++.h>
////using namespace std;
////
////struct Node {
////    int value;
////    Node *left, *right;
////
////    Node(int value, Node *left = NULL, Node *right = NULL) {
////        this->value = value;
////        this->left = left;
////        this->right = right;
////    }
////};
////
////Node *root;
////
////Node* insert(Node *cur, int key) {
////
////    if(cur == NULL) {
////        cur = new Node(key);
////    }else if(cur->value >= key) {
////        cur->left = insert(cur->left, key);
////    }else {
////        cur->right = insert(cur->right, key);
////    }
////
////    return cur;
////}
////
////void insert(int key) {
////    root = insert(root, key);
////}
////
////void preOrder(Node *cur) {
////    if(cur != NULL) {
////        cout << cur->value << " ";
////        preOrder(cur->left);
////        preOrder(cur->right);
////    }
////}
////
////void inOrder(Node *cur) {
////    if(cur != NULL) {
////        inOrder(cur->left);
////        cout << cur->value << " ";
////        inOrder(cur->right);
////    }
////}
////
////void postOrder(Node *cur) {
////    if(cur != NULL) {
////        postOrder(cur->left);
////        postOrder(cur->right);
////        cout << cur->value << " ";
////    }
////}
////
////int main() {
////    int n, k;
////    cin >> n;
////    while(n--) {
////        cin >> k;
////        insert(k);
////    }
////
////    preOrder(root);
////    cout << "\n*****\n";
////    inOrder(root);
////    cout << "\n*****\n";
////    postOrder(root);
////    cout << "\n*****\n";
////}
//
//// segment tree
//
////#include <bits/stdc++.h>
////#define N 100001
////using namespace std;
////
////
////struct Node {
////    int MIN;
////};
////
////Node tree[(1<<20)];
////
////void insert(int idx, int val, int p = 1, int st = 1, int ed = N) {
////
////    if(st == ed) {
////        tree[p].MIN = val;
////        return;
////    }
////
////    int mid = (st + ed) / 2;
////
////    if(idx <= mid) {
////        insert(idx, val, p*2, st, mid);
////    }else {
////        insert(idx, val, p*2+1, mid+1, ed);
////    }
////
////    tree[p].MIN = min(tree[p*2].MIN, tree[p*2+1].MIN);
////}
////
////int getMin(int s, int e, int p = 1, int st = 1, int ed = N) {
////    if(s <= st && e >= ed) {
////        return tree[p].MIN;
////    }
////
////    int res = 1e9;
////
////    int mid = (st + ed) / 2;
////    if(s <= mid) {
////        res = min(res, getMin(s, e, p*2, st, mid));
////    }
////    if(e >= mid + 1){
////        res = min(res, getMin(s, e, p*2+1, mid+1, ed));
////    }
////
////    return res;
////
////}
////
////int main() {
////    int n, q, val, x, y;
////    scanf("%d", &n);
////    for(int i = 1; i <= n; i++) {
////        scanf("%d", &val);
////        insert(i, val);
////    }
////    scanf("%d", &q);
////    while(q--) {
////        scanf("%d%d", &x, &y);
////        printf("%d\n", getMin(x+1, y+1));
////    }
////}
//
//
//#include <bits/stdc++.h>
//using namespace std;
//
//
//struct Node {
//    bool end;
//    Node* ch['9' + 1];
//    void create() {
//        for(int i = 0; i < '9' + 1; i++) {
//            ch[i] = NULL;
//        }
//    }
//};
//
//struct Node *getNode(void)
//{
//    struct Node *pNode =  new Node;
//
//    pNode->end = false;
//
//    for (int i = 0; i < '9' + 1; i++)
//        pNode->ch[i] = NULL;
//
//    return pNode;
//}
//
//Node *root;
//
//void insert(string str, Node *cur = root) {
//    for(int i = 0; i < str.size(); i++) {
//        if(cur->ch[str[i]] == NULL) {
////            Node x = Node();
////            x.create();
//            cur->ch[str[i]] = getNode();
//        }
//        cur = cur->ch[str[i]];
//    }
//    cur->end = 1;
//}
//
//bool find(string str, Node *cur = root) {
//    int idx = 0;
//    while (idx < str.size() && cur != NULL) {
//        cur = cur->ch[str[idx]];
//        idx++;
//    }
//    return idx == str.size() && cur != NULL && cur->end;
//}
//
//int main() {
//
//    Node c = Node();
//    root = &c;
//    root->create();
//
//    int n;
//    cin >> n;
//    string str;
//
//    while (n--) {
//        cin >> str;
//        insert(str);
//    }
//
//    int q;
//    cin >> q;
//    while (q--) {
//        cin >> str;
//        cout << find(str) << endl;
//    }
//}