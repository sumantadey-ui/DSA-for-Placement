#include<iostream>
using namespace std;
int main()
{
    // int a=4;
    // int b=6;

    // cout<<"a&b "<<(a&b)<<endl;
    // cout<<"a|b "<<(a|b)<<endl;
    // cout<<"~a "<<~a<<endl;
    // cout<<"a^b "<<(a^b)<<endl;
    
    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;

    // int i=5;
    // cout<<(++i)<<endl;
    // cout<<(i++)<<endl;
    // cout<<(i--)<<endl;
    // cout<<(--i)<<endl;

    // int c,d=1;
    // c=10;
    // if(++c)
    //     cout<<d;
    // else 
    //     cout<<(++d);
    // cout<<(++d);

    // for(int x=0, y=1,z=2; x>=0 && y>=1 && z>=2; x--,y--,z--){
    //     cout<<x<<" "<<y<<" "<<z<<" ";
    // }

    // int n;
    // cout<<"Enter the value of n..."<<endl;
    // cin>>n;
    // int sum=0;
    // for(int i=0; i<=n;i++){
    //     sum=sum+i;
    // }
    // cout<<sum;


    //fibonaci series

    // int a=0, b=1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=0;i<=10;i++){
    //     int sum= a+b;
    //     cout<<sum<<" ";
    //     a=b;
    //     b= sum;
    // }

    // prime num

    // int n;
    // cout<<"Enter the value of n..."<<endl;
    // cin>>n;
    // bool isPrime=1;
    // for(int i=2;i<n;i++){
    //     // if(n%i==0){
    //     //     cout<<"Not a prime"<<endl;
    //     //     break;
    //     // }
    //     // else
    //     //     cout<<"Prime"<<endl;
    //     if(n%i == 0){
    //         isPrime=0;
    //         break;
    //     }
    // }
    // if(isPrime==0){
    //     cout<<"Not a prime"<<endl;
    // }
    // else
    // {
    //     cout<<"Prime";
    // }

    // for(int i=0;i<5;i++){
    //     cout<<" hii "<<endl;
    //     cout<<" heyy "<<endl;
    //     continue;
    //     cout<<" reply me "<<endl;
    // }
    
    for(int i=0;i<5;i++){
        for(int j=1;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }

    return 0;
}