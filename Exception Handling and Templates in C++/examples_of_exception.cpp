#include <iostream>
using namespace std;

int main(){
    try {
        throw 100;
    }
    catch(int x){
        cout<<"An Exception at "<<x<<endl;

    }
    return 0;
}