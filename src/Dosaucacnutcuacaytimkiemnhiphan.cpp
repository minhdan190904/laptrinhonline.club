#include "bits/stdc++.h"
#define db double
#define minhdan main
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FOD(i,a,b) for(int i=a;i>=b;i--)
#define int long long
#define pii pair<int,int>
#define pb push_back
#define pf push_front
#define rd(x) fixed<<setprecision(x)
const int MOD=1e9+7;

template <class Keys>
class BNode {
private:
    Keys key;
    int elem;
    BNode<Keys>* parent;
    BNode<Keys>* left;
    BNode<Keys>* right;

public:
    BNode() {
        parent = NULL;
        left = NULL;
        right = NULL;
    }
    BNode<Keys>* getParent() { return parent; }
    BNode<Keys>* getLeft() { return left; }
    BNode<Keys>* getRight() { return right; }
    void setLeft(BNode<Keys>* p) { left = p; }
    void setRight(BNode<Keys>* p) { right = p; }
    void setParent(BNode<Keys>* p) { parent = p; }
    int hasLeft() { return left != NULL; }
    int hasRight() { return right != NULL; }
    int getElem() { return elem; }
    void setElem(int e) { elem = e; }
    Keys getKey() { return key; }
    void setKey(Keys k) { key = k; }
};

template <class Keys>
class BTree {
private:
    BNode<Keys>* root;
    long count;
    BNode<Keys>* GetLeftest(BNode<Keys>* v);

public:
    BTree();
    BNode<Keys>* getRoot();
    int size();
    int isEmpty();
    int isRoot(BNode<Keys>*);
    void preOrder(BNode<Keys>* p, void (*visit)(BNode<Keys>*));
    void inOrder(BNode<Keys>* p, void (*visit)(BNode<Keys>*));
    void postOrder(BNode<Keys>* p, void (*visit)(BNode<Keys>*));
    BNode<Keys>* search(Keys, BNode<Keys>*);
    BNode<Keys>* insert(Keys);
};

template <class Keys>
BTree<Keys>::BTree() {
    root = NULL;
    count = 0;
}

template <class Keys>
BNode<Keys>* BTree<Keys>::getRoot() {
    return root;
}

template <class Keys>
int BTree<Keys>::size() {
    return count;
}

template <class Keys>
int BTree<Keys>::isEmpty() {
    return root == NULL;
}

template <class Keys>
int BTree<Keys>::isRoot(BNode<Keys>* p) {
    return p->getParent() == NULL;
}

template <class Keys>
void BTree<Keys>::preOrder(BNode<Keys>* p, void (*visit)(BNode<Keys>*)) {
    if (p != NULL) {
        visit(p);
        preOrder(p->getLeft(), visit);
        preOrder(p->getRight(), visit);
    }
}

template <class Keys>
void BTree<Keys>::inOrder(BNode<Keys>* p, void (*visit)(BNode<Keys>*)) {
    if (p != NULL) {
        inOrder(p->getLeft(), visit);
        visit(p);
        inOrder(p->getRight(), visit);
    }
}

template <class Keys>
void BTree<Keys>::postOrder(BNode<Keys>* p, void (*visit)(BNode<Keys>*)) {
    if (p != NULL) {
        postOrder(p->getLeft(), visit);
        postOrder(p->getRight(), visit);
        visit(p);
    }
}

template <class Keys>
BNode<Keys>* BTree<Keys>::search(Keys key, BNode<Keys>* p) {
    if (p != NULL) {
        if (p->getKey() > key)
            return search(key, p->getLeft());
        else if (p->getKey() < key)
            return search(key, p->getRight());
        else
            return p;
    } else
        return NULL;
}

template <class Keys>
BNode<Keys>* BTree<Keys>::insert(Keys key) {
    BNode<Keys>* p;
    BNode<Keys>* q = new BNode<Keys>();
    q->setKey(key);
    int lv = 0;
    if (root == NULL) {
        root = q;
        count++;
    } else {
        p = root;
        while (p != NULL) {
         lv++;
            if (key < p->getKey())
                if (p->getLeft() == NULL) {
                    q->setParent(p);
                    p->setLeft(q);
                    count++;
                    p = NULL;
                } else
                    p = p->getLeft();
            else if (key > p->getKey())
                if (p->getRight() == NULL) {
                    q->setParent(p);
                    p->setRight(q);
                    count++;
                    p = NULL;
                } else
                    p = p->getRight();
            else {
                delete q;
                p = NULL;
            }
        }
    }
    q->setElem(lv);
    return q;
}

template <class Keys>
BNode<Keys>* BTree<Keys>::GetLeftest(BNode<Keys>* v) {
    BNode<Keys>* p = v;
    while (p->getLeft() != NULL)
        p = p->getLeft();
    return p;
}

using namespace std;

void v(BNode<int>* p)
{
   cout <<p->getKey()<<" "<< p->getElem()<< endl; 
}

minhdan() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    BTree<int> tree;
    int n; cin >> n;
    int a[n]; for(int &x:a){
     cin >> x;
     BNode<int>* q = tree.insert(x);
 }
 tree.inOrder(tree.getRoot(), v);
    return 0;
}