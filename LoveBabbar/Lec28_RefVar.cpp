#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

void update(int &n)
{
    n++;
}

int getSum(int *arr)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // int a =10;
    // int& b =a;

    // a++;
    // cout<<a<<endl;
    // b++;
    // cout<<b<<endl;
    // update(b);
    // cout<<b;
    int n;
    cin >> n;

    int *arr = new int[n];

    cout << "Enter values into array" << endl;

    for (int i = 0; i < n; i++)
    {   
        cin >> arr[i];
    }

    cout<<"The sum is "<<getSum(arr);

    return 0;
}
