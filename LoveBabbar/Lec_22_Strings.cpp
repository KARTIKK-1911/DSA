#include<iostream>
#include<vector>
using namespace std;

int length(string str){
    int count=0;
    
    for(int i=0;str[i]!='\0';i++){
        count++;
        // cout<<"Count is "<<count;
    }
    return count;
}

// char toLowerCase(char ch){
//     if(ch>='A'&& ch<='Z' ){
//         cout<<"Lowercaseworking"<<endl;
//         return (ch= ch - 'a' + 'A');
//     }
//     else if (ch>='a' && ch<='z'){
//         return ch;
//     }
// }
 char toLowerCase(char ch) {
    char temp ;
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        temp = ch - 'A' + 'a';
        return temp;
    }}

bool valid(char ch){
    if(ch>='A'&& ch<='Z' || ch>='a' && ch<='z' || ch>='1' && ch<='9'){
        return 1 ;
    }
    else{
        return 0 ;
    }
}


bool checkPalindrome(string s)
{
    int len=length(s);
    // cout<<len;
    string str;
    // int j=0;
    for(int i=len-1;i>=0;i--){
        // str[j]=s[i];
        // j++;
        str.push_back(s[i]);
    }
    // cout<<str;
    if(s==str){
        return true;
    }
    else{
        return false;
    }
}
bool checkPalindrome2(char s[], int len){
    int start=0;
    int end = len-1;
    while(start<end){
        if(s[start]!=s[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
void reverseString(char str[], int len){
    int start=0;
    int end=len-1;
    while(start<end){
        swap(str[start++],str[end--]);
    }
}

char maxOccurances(string s){
    int a[26]={0};
    int number;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            number = s[i]-'a';
            
        }
        else{
            number = s[i]-'A';

        }
        a[number]++;
    }
    int max=0;
    int ans;
    for(int j=0;j<26;j++){
        if(a[j]>max){
            ans=j;
            max=a[j];
        }
    }
    return 'a'+ans;
}

int main(){
    char str[20];
    string s={"Kartik Bansal"};
    // cout<<"Enter your name ";
    // cin>>str;
    // cout<<"Your name is "<<str<<endl;
    // string temp="";
    // int len = length(str); 
    // cout<<"valid string working"<< valid("fjnsc discn@cxs 33")
    // cout<<"Length of the string is "<<len<<endl;
    // reverseString(str,len);
    // cout<<"reverse of the string is "<<str<<endl;
    // cout<<"lowercase "<<toLowerCase('B')<<endl;
    
    // string temp;
    // for(int i=0;i<len;i++){
    //     if(valid(str[i])){
    //         temp.push_back(str[i]);
    //     }
    // }
    
    // for(int i=0;i<len;i++){
    //     temp[i]=toLowerCase(temp[i]);
    // }
    // cout<<"The new string is "<<temp;
    // cout<<"The given string is palindrome "<<checkPalindrome2(temp,len)<<endl;
    cout<<"Maximum occurances in the string is "<< maxOccurances(s);
}
