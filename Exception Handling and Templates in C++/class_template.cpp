#include <iostream>

using namespace std;

template <class T>

class A{
    public : 
    T num1 = 8;
    T num2 = 9;
    void add(){
        cout<<"Addition : "<<num1+num2<<endl;

    }
};

template <class X, class Y>
class B {
    X a;
    Y b;
    public:
    B(X x, Y y){
        a = x;
        b = y;

    }

    void display(){
        cout<<"Values are "<<a<<" and "<<b<<endl;
    }
};

int main(){
    A <int> a;
    a.add();
    B <int,float> b(10,43.4);
    b.display();
    return 0;
}