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
    
    int  operator () (int x) {
        return *p = *p + x;
    }
    
};

int operator / (Base& obj1, Base& obj2) { //Make it friend function in Base if p is private variable.
    return (*obj1.p)/(*obj2.p);
}

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
    cout << b/d << endl;
}

/*
4 4
10 4
0x1d44c20 0x1d44c40
14
20
5
*/
