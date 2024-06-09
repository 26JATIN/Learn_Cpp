#include<iostream>

using namespace std;

int main(){
    int a,b;
    a=15,b=20;
    a=b+a;
    b=a-b;
    a=a-b;
    cout<<"numbers after swapping "<<a<<" and "<<b;
    return 0;
}