#include<iostream>
using namespace std;

bool checkPallindrome(string str , int i, int j){

    if(i > j){
        return;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPallindrome(str, i+1, j-1);
    }

}

int main()
{
    string str = "abba";
    cout<<endl;
    // int n=str.length()-1;
    bool ans = checkPallindrome(str, 0, str.length()-1);
    if(ans){
        cout<<"Its  a pallindrome "<<endl;
    }
    else
        cout<<"Its not  a pallindrome "<<endl;
    return 0;
}