#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int num[], int n){
    int maxi=INT_MIN;
    for(int i=0; i<n;i++){
        // if(num[i]>max){
        //     max=num[i];
        // }
        maxi=max(maxi, num[i]);
    }
    return maxi;
}
int getMin(int num[], int n){
    int min=INT_MAX;
    for(int i=0; i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}


int main()
{
    int size;
    cin>>size;
    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"The max value is "<<getMax(num, size)<<endl;
    cout<<"The min value is "<<getMin(num, size)<<endl;


}