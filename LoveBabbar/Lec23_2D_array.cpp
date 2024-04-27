#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[][3],int n,int m){
      cout<<"Enter Elements in the array";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];}}
    
}

void rowSum(int arr[][3],int n,int m){
    for(int i=0;i<3;i++){
    int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];}
            cout<<sum;}
}

int main(){
    int arr[3][3];
    cout<<"Enter Elements in the array";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    // printArray(arr,3,3);
    rowSum(arr,3,3);

    
The Traveling Salesman Problem has numerous applications in various fields, including logistics, transportation, 
manufacturing, and telecommunications, where finding the most efficient route can lead to significant cost savings
 or improvements in efficiency.
   

}