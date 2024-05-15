#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[][3],int n,int m){
      cout<<"Enter Elements in the array";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];}}
    
}
While GBFS is efficient and suitable for scenarios where finding an approximate solution quickly is important,
 it can produce suboptimal solutions if the heuristic function is not admissible or inconsistent. Despite its
  limitations, GBFS is widely used in route planning, puzzle solving, and game playing due to its ability to 
  quickly find solutions in large state spaces.

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

}