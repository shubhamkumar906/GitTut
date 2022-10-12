#include<iostream>
using namespace std;

int prod(int a, int b){
    return a*b;
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Prod of "<<a<<" and "<<b<<" is "<<prod(a,b);
    return 0;
}