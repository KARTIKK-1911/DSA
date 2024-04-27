#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

vector<int>mergeVector(vector<int>vec1,vector<int>vec2){
    vector<int> vec3;
    int size1=vec1.size();
    int size2=vec2.size();
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(vec1[i]<vec2[j]){
            // vec3[k]=vec1[i];
            vec3.push_back(vec1[i]);
            i++;
            k++;
        }
        if(vec2[j]<vec1[i]){
            // vec3[k]=vec2[j];
            vec3.push_back(vec2[j]);
            j++;
            k++;
        }
    }
    
    while(i<size1){
    // vec3[k]=vec1[i];
    vec3.push_back(vec1[i]);
        i++;
        k++;
    }
    while(j<size2){
    // vec3[k]=vec2[j];
    vec3.push_back(vec2[j]);
        j++;
        k++;
    }
    vec1=vec3;

    return vec1;
}
int main(){
    vector<int>vec1;
    vector<int>vec2;
    vec1.push_back(1);
    vec1.push_back(3);
    vec1.push_back(5);
    vec1.push_back(7);
    vec2.push_back(2);
    vec2.push_back(4);
    vec2.push_back(6);
    
    cout<<"The first vector is "<<endl;
    printVector(vec1);
    cout<<"The second vector is " <<endl;
    printVector(vec2);
    cout<<"The Merged vector is " <<endl;
    vector<int>vec3=mergeVector(vec1,vec2);
    printVector(vec3);

}