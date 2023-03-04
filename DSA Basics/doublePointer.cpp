#include<iostream>
using namespace std;

void update1(int **p){
    p=p+1;
    //     ???

    *p = *p +1;
    //     ???

    **p = **p +1;
        //     ???

}

int main()
{
    int i=5;
    int *ptr=&i;

    int **ptr2=&ptr;

    // cout<<"Printing ptr "<<ptr<<endl;
    // cout<<"Address of ptr "<<&ptr<<endl;
    // cout<<"Printing *ptr2 "<<*ptr2<<endl;

    // cout<<" "<<endl;

    // cout<< i <<endl;
    // cout<< *ptr <<endl;
    // cout<< **ptr2 <<endl;

    // cout<<" "<<endl;

    // cout<<&i<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr2<<endl;

    // cout<<" "<<endl;

    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;

    // cout<<"Before "<<i<<endl;
    // cout<<"Before "<<ptr<<endl;
    // cout<<"Before "<<ptr2<<endl;

    update1(ptr2);

    cout<<"After "<<i<<endl;
    cout<<"After "<<ptr<<endl;
    cout<<"After "<<ptr2<<endl;

}