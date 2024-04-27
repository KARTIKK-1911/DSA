// Array

// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     array<int,4>arr ={10,20,30,40};
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<< endl ;
//     }
//     cout<<"The first element is "<<arr.front()<<endl;
//     cout<<"The last element is "<<arr.back()<<endl;
//     cout<<"The second element is "<<arr.at(2)<<endl;
// }


// Vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec;
//     cout<<"The first element is ";
//     cout<<vec.front()<<endl;
//     vec.push_back(100);
//     vec.push_back(20);
//     vec.push_back(30);
//     cout<<"Size is "<<vec.size()<< endl;
//     cout<<"capacity is "<<vec.capacity()<< endl;
//     vec.push_back(40);
//     vec.push_back(50);
//     vec.pop_back();
//     vec.clear();
//     cout<<"Size is "<<vec.size()<< endl;
//     cout<<"capacity is "<<vec.capacity()<< endl;
//     cout<<"The first element is "<<vec.front()<<endl;
//     cout<<"The last element is "<<vec.back()<<endl;

//     vector<int>vec2(5,100);
//     vector<int>vec3(vec2);
//     for(int i=0;i<vec2.size();i++){
//         cout<<"Vec 3 elemts are "<< vec3[i]<< endl ;
//     }
// }

// Deque
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int>deq;
//     deq.push_back(10);
//     deq.push_back(20);
//     deq.push_front(30);
//     deq.push_front(40);
//     deq.push_front(50);
//     deq.pop_back();
//     deq.pop_front();
//     for(int i:deq){
//         cout<<i<<endl;
//     }
// }

// List
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int>list;
//     list.push_back(20);
//     list.push_back(30);
//     list.push_back(40);
//     list.push_back(50);
//     list.push_back(60);
//     list.push_front(10);
//     list.erase(list.begin());
//      for(int i:list){
//         cout<<i<<endl;
//     }
// }

    //Stack 

    // #include<iostream>
    // #include<stack>
    // using namespace std;
    // int main(){
    //     stack<string> sta;
    //     sta.push("King");
    //     sta.push("Kartik");
    //     sta.push("Bansal");

    //     cout<<sta.top();
    //     sta.pop();
    //     cout<<sta.top();
    // }

    //Queue
    // #include<iostream>
    // #include<queue>
    // using namespace std;
    // int main(){
    //     queue<int>q;
    //     q.push(10);
    //     q.push(20);
    //     q.push(30);
    //     q.push(40);
    //     q.push(50);
    //     cout<<q.front()<<endl;
    //     // cout<<q.back()<<endl;
    //     q.pop();
    //     cout<<q.front()<<endl;
    //     q.pop();
    //     cout<<q.front()<<endl;
    // }
 

 //Set
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(3);
//     s.insert(5);
//     s.insert(7);
//     s.insert(1);
//     for(int i:s){
//         cout<<i<<endl;
//     }

// }