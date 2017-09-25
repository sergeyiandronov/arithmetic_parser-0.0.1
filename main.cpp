#include <iostream>
using namespace std;
int main() {
    int x,y;
    char com;
    cin >>x >> com;
    if ((com=='>')||(com=='<')){
        cin>>com>>y;
    }else{cin>>y;}
    if (com=='+'){
      cout << x+y;
    }
    if (com=='-'){
        cout << x-y;
    }
    if (com=='*'){
        cout << x*y;
    }
    if (com=='/'){
        cout << (double)x/y;
    }

    if (com=='%'){
        cout << x%y;
    }
    if (com=='&'){
        cout << (x & y);
    }
    if (com=='|'){
        cout << ( x|y);
    }
    if (com=='^'){
        cout << (x^y);
    }
    if (com=='<'){
        cout << (x<<y);
    }
    if (com=='>'){
        cout << (x>>y);
    }
    return 0;
}