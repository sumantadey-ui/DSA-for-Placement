#include<iostream>
using namespace std;

void rotateArr(int arr[], int n, int k){
    int temp[n];
    for(int i=0; i<n; i++){
    temp[(i+k)%n]= arr[i];
    }
    //Copy temp into arr
    arr=temp;
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
    int k=2;
    rotateArr(arr,5,k);
    printArr(arr,5);

}