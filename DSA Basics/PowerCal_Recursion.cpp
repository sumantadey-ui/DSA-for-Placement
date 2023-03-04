#include<iostream>
using namespace std;

int power(int a, int b){

    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    //Recursive call
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0){
        return ans*ans;
    }
    else 
        //  b is odd
        return a * ans*ans;
}


int main()
{

    int a, b;
    cin>>a>>b;
    int ans = power(a,b);
    cout<<"The power value is "<<ans;

}