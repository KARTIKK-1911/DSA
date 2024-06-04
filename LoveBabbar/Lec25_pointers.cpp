#include<bits/stdc++.h>
using namespace std;
int main(){
    // cout<<"hello world";
    int num=10;
    cout<<"The value of num is "<<num<<endl;
    cout<<"The address of num is "<< &num<<endl;

    int*ptr =&num;

    cout<<"The address of num is "<< ptr<<endl;
    cout<<"The value of pointer ptr is "<< *ptr<<endl;
    cout<<"The address of pointer ptr is "<< &ptr<<endl;
    cout<<endl;
    cout<<endl;


    double num1=10.678;
    double*ptr1 =&num1;

    cout<<"The value of double num1 is "<<num1<<endl;
    cout<<"The adress of num1 is "<< &num1<<endl;
    cout<<"The adress of num1 is "<< ptr1<<endl;
    cout<<"The adress of pointer ptr1 is "<<&ptr1<<endl;
    cout<<"The value inside pointer ptr1 is "<<*ptr1<<endl;


    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"The size of integer is "<<sizeof(num)<<endl;
    cout<<"The size of integer pointer  is "<<sizeof(ptr)<<endl;
    cout<<"The size of Double  is "<<sizeof(num1)<<endl;
    cout<<"The size of double pointer  is "<<sizeof(ptr1)<<endl;

    return 0;
}