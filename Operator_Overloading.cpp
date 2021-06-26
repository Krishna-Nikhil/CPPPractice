#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
    int i;
    int* p;
    
    Base() { i = 5; p = new int(4); }
    
    Base(const Base& obj) {
        p = new int;
        *p = *obj.p;
    }
    
    void operator = (const Base& obj) {
        *p = *obj.p;
    }
    
    int operator + (Base& obj) {
        return *p + *obj.p;
    }
    
    void operator () (int x) {
        *p = *p + x;
    }
    
};

int main() {
    Base b;
    Base d;
    d = b;
    cout << *b.p << " " << *d.p << endl;
    *b.p = 10;
    cout << *b.p << " " << *d.p << endl;
    cout << b.p << " " << d.p << endl;
    cout << b+d << endl;
    b(10);
    cout << *b.p << endl;
}

/*
4 4
10 4
0x1d44c20 0x1d44c40
14
20
*/
