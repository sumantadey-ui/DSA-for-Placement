// Binary and Decimal numbers

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int i=0;

    // For decimal to binary
    // For same flow

    // while(n!=0){
    //     int bit= n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n>>1;
    //     i++;
    // }

    // For reverse flow

    // while(n!=0){
    //     int digit= n % 10;
    //     ans = (digit * pow(10, i)) + ans;
    //     n = n/10;
    //     i++;
    // }


    // For Binary to decimal

    while(n!=0){
        int digit = n % 10;
        if(digit == 1){
            ans = ans+ pow(2,i);
        }
        n = n/10;
        i++;
    }

    cout<<"The ans is "<<ans;
    
    return 0;
}