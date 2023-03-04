#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5]={8,9,10,11,12};

    reverseArray(arr,5);
    reverseArray(brr,5);

    printArr(arr,5);
    printArr(brr,5);
}