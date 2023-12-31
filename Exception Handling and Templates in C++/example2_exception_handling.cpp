#include <iostream>
using namespace std;

int main(){

    double i,j;
    void divide(double,double);
    cout<<"Enter the Numerator : ";
    cin>>i;
    cout<<"Enter the denominator : ";
    cin>>j;
    divide(i,j);
    return 0;
}

void divide(double a,double b){
    try{
        if(b ==0 ){
            throw b;
        }
        else{
            cout<<"Result : "<<a/b<<endl;
        }
    }
    catch(double b){
        cout<<"Cannot Divide by 0";
    }
}