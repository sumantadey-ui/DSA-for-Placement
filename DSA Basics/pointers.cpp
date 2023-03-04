#include<iostream>
using namespace std;

// Pointer store address of data
// * p means value of address pointed by p 



int main()
{
    // int num=5;
    // cout<<num<<endl;

    // // address of operator
    // cout<<"Address of num is "<<&num<<endl;

    // int *ptr= &num;

    // cout<<"The value of ptr is "<<*ptr<<endl;
    // cout<<"The value of ptr is "<<ptr<<endl;

    // double d=5.22;
    // double *p2= &d;

    // cout<<"The value of ptr is "<<p2<<endl;    
    // cout<<"The value of ptr is "<<*p2<<endl;

    // cout<<"Size of integer is "<<sizeof(d)<<endl;
    // cout<<"Size of pointer is "<<sizeof(p2)<<endl;
    // cout<<"Size of pointer is "<<sizeof(ptr)<<endl;




    //Pointer to int is created and pointing a garbage val
    // int *p =0;
    // cout<<*p<<endl;

    // int i=5;
    // // int *p=&i 
    // int *p=0;
    // p=&i;

    // cout<<"The value of  is "<<*p<<endl;
    // cout<<"The value of  is "<<p<<endl;

    int num=5;
    int a=num;

    cout<<"a Before "<<num<<endl;
    a++;
    cout<<"a Before "<<num<<endl;

    cout<<num<<endl;
    int *p=&num;
    cout<<"Before "<<num<<endl;
    (*p)++;
    cout<<"After "<<num<<endl;

    // Coping a pointer 
    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;


}