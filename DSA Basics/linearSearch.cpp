#include<iostream>
using namespace std;
bool search(int num[], int size, int key){
    for(int i=0;i<size;i++){
        if(num[i]==key){
            return 1;

        }
    }
    return 0;
}

int main()
{
    int size;
    int key;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Enter the value you want to search "<<endl;
    cin>>key;
    bool found=search(num, size, key);
    if(found){
        cout<<"Key is present..."<<endl;
    }
    else
        cout<<"Key is not Present..."<<endl;
}