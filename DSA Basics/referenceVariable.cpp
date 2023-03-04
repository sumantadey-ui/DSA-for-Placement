#include<iostream>
using namespace std;

void update(int &n){
    n++;
}


int main()
{

    // int i=5;

    // int &j=i;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // i++;
    // cout<<j<<endl;

    int n=5;
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;
}