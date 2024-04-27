// #include <iostream>
// using namespace std;

// int main()
// {
//     // int n=5;
//     // for(int i=1;i <=5;i++){
        
//     //     for(int j=n-i;j>=1;j--){
//     //         cout<<"-";
//     //     }
//     //     for(int j=1;j<=i;j++){
//     //         cout<<"*";
//     //     }
//     //     for(int j=n-i-1;j<=i;j++){
//     //         cout<<"*";
//     //     }

//         cout<<endl;
        
//     // }

//     int space=4;

//     for (int i=1;i<=9;i+=2){
//         for (int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         space--;

//         for (int k=1; k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int space=3;
    for (int i=1;i<=7;i+=2){
        for (int j=1;j<=space;j++){
            cout<<" ";

        }
        space--;

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}

