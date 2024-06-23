#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
    
}

int ncr(int n, int m ){

    int num= factorial(n);
    int dum= (factorial(m) - factorial(n-m));
    cout<<num/dum;
    return num/dum;
}


void generateRows(int n){

    int res= 1;
    for(int i=1;i<=n;i++){
        cout<< res<< " ";
        res= res *(n-i);
        res= res/i;

    }
}

// int getElement(int row, int col)

int main(){

    cout<<"PASACALS TRIANGLE"<< endl;

    int row=5;
    // cout<< factorial(row);
    // cout<<ncr(4,2);

    for(int i=1;i<=row;i++){
        generateRows(i);
        cout<<endl;
    }



    return 0;
}