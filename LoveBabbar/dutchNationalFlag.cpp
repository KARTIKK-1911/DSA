#include <bits/stdc++.h>
using namespace std;

void dnf(int arr[],int n){

    int low =0;
    int mid =0;
    int high=n-1;

    while(mid<=high){
    // cout<<"function working"<<endl;

        switch(arr[mid]){

            case 0:{
                swap(arr[low++],arr[mid++]);
                break;
            }
            case 1:{
                mid++;
                break;
            }
            case 2:{
                swap(arr[mid],arr[high--]);
                break;
            }
        }
    }


}



int main()
{

    int arr[] = {0, 1, 0, 1, 2, 0, 1, 2};

    int n = sizeof(arr) / sizeof(int);

    cout << "Array before sorting is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    dnf(arr,n);


    cout << "Array after sorting is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}