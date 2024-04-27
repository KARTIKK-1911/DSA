#include<iostream>

#include<cmath>
using namespace std;
int main(){
    int a[]={4,5,1};
    int b[]={3,4,1};
    int i=3,j=3;
    int arr1=0,arr2=0;
    for(int i=2;i>=0;i--){
        int k=0;
        // int d =a[i] *( pow(10,k));
        int d =pow(10,2);
        cout<<"The value of d is"<<d;
        k++;
        arr1=arr1+d;
        // cout<<a[i];
    }
    // cout<<arr1<<endl;
    // for(int i=2;i>=0;i--){
    //     int k=0;
    //     int d =b[i]* pow(10,k);
    //     k++;
    //     arr2=arr2+d;
    //     // cout<<a[i];
    // }
    // cout<<arr2;
    // cout<<"The final sum is "<<arr1+arr2;
}