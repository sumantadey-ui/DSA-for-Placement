#include<iostream>

using namespace std;



void reverse(string &str , int i, int j){

    cout<<"Call recursive for "<<str<<endl;

    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);

}





int main()
{
    string str = "sumanta";
    cout<<endl;
    // int n=str.length()-1;
    reverse(str, 0, str.length()-1);
    cout<<endl;
    cout<<str<<endl;


    return 0;
}