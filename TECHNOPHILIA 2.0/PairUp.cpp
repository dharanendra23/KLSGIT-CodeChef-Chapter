#include <bits/stdc++.h>
using namespace std;
#define int long long

class Node {

public:
    int val;
    Node *next, *prev;

    Node(int val) {

    	this->val = val;
        next = NULL;
        prev = NULL;
    }
};

class LL {

public:
    Node *head, *tail;

    LL() {

        head = tail = NULL;
    }

    void insert(int val) {

        Node *newNode = new Node(val);
        if (!head) {

            head = tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
};


signed main() {

    LL l;
    while (1) {

    	int num;
    	cin >> num;
    	if(num == 0) break;
    	l.insert(num);
    }

    Node *th = l.head, *tl = l.tail;
    int maxPerfectSum = 0;

    while (th && tl)
    {
        int perfectSum = th->val + tl->val;
        maxPerfectSum = max(maxPerfectSum, perfectSum);
        th = th->next;
        tl = tl->prev;
    }
    
    cout << maxPerfectSum;

    return 0;
}