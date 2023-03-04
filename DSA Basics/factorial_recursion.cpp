#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;
    
    int fac= n * factorial(n-1);
    return fac;
}

int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    cout<<"The factorial value is "<<factorial(n);

}