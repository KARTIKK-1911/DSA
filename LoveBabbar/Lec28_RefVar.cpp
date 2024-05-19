#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

void update(int& n){
    n++;
}

int main(){
    int a =10;
    int& b =a;

    // a++;
    // cout<<a<<endl;
    // b++;
    // cout<<b<<endl;
    update(b);
    cout<<b;

    return 0;
}
