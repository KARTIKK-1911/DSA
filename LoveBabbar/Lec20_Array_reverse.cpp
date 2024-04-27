#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>vec2,int m){
    for(int i=0;i<m;i++){
        cout<<vec2[i]<<endl;
    }
}
vector<int> reverseVector(vector<int> vec3, int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(vec3[start],vec3[end]);
        start++;
        end--;}
        return vec3;
}
int main(){
    vector<int>vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.push_back(40);
    vec1.push_back(50);
    vec1.push_back(60);

    int size=vec1.size();
    // cout<<"The size of the vector is "<<size<<endl;
    cout<<"Vector before reversing is "<<endl;
    // swap(vec1[1],vec1[4]);
    printVector(vec1,size);
    cout<<"Vector after reversing is "<<endl;

    vector<int>ans= reverseVector(vec1,size);
    printVector(ans,size);
}