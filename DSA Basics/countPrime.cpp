#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return false;
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// int countPrime(int n){
//     int cnt=0;
//     for(int i=2;i<n;i++){
//         if(isPrime(i)){
//             cnt++;
//         }
//     }
//     return cnt;
// }

//   Sieve of Eratosthones

int countPrime(int n){
    int cnt=0;
    vector<bool>prime(n+1,true);
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            cnt++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    return cnt;
}

int main()
{
    cout<<"Enter the value of n "<<endl;
    int n;
    cin>>n;

    // if(isPrime(n)){
    //     cout<<"Its a prime number..."<<endl;
    // }
    // else 
    //     cout<<"Not a prime number..."<<endl;
    
    cout<<"Total prime number present is "<<countPrime(n)<<endl;

    return 0;
}