#include<iostream>
using namespace std;

int power(int n){
    if(n==0)
        return 1;
    
    int pow= 2 * power(n-1);
    return pow;
}

int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    cout<<"The Power value is "<<power(n);

}