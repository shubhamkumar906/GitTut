// Added comments

#include<iostream>
using namespace std;

int diff(int a, int b){
    return a-b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Diff of "<<a<<" and "<<b<<" is "<<diff(a,b);
    return 0;
}