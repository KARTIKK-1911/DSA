#include<bits/stdc++.h>
using namespace std;

int main(){


    cout<<"Dynamic allocation of 2D Arrays"<<endl;
    int rows,col;
    cout<<"Enter number of Rows ";
    cin>> rows;
    cout<<"Enter number of Col ";
    cin>> col;

    int **arr = new int*[rows];

    for(int i=0;i<rows;i++){
        arr[i]= new int[col];
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>> arr[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // int *ptr= new int;
    // *ptr= rows;

    // cout<<"The value of rows is "<< rows;

    // int *arr= new int[rows];

    // cout<<"Enter values in Array"<<endl;
    // // Taking input in array 
    // for(int i=0;i<rows;i++){
    //     cin>> arr[i];
    // }

    // // Printing Array
    // for(int i=0;i<rows;i++){
    //     cout<< arr[i];
    // }
}