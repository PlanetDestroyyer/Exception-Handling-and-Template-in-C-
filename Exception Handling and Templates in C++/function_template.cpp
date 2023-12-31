#include <iostream>

using namespace std;

template <class T>T add(T &a,T &b){
    T result = a + b;
    return result;
}

int main(){
    int x = 10;
    int y = 20;
    cout<<"Integer Additon : "<<add(x,y)<<endl;
    float a = 30.9;
    float b = 9.7;
    cout<<"Float Addition : "<<add(a,b)<<endl;
    return 0;
}