#include<iostream>
using namespace std;

void moveZeros(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
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

    int arr[6]={1,0,2,0,3,0};

    moveZeros(arr,6);
    printArr(arr, 6);


}