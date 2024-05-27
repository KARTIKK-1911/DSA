#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter row"<<endl;
    cin>>row;
    cout<<"Enter Column"<<endl;
    cin>>col;

    int** arr =new int*[row];

    for(int i=0;i<row;i++){
        arr[i]= new int[col];
        
    }
    cout<<"Enter values in 2d array"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Entered values are"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl; 
    }

    for(int i=0;i<row;i++){
        delete [] arr[row];
    }

    delete [] arr;

return 0;
}