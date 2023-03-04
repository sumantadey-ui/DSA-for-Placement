#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1;i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[7]={12, 8, 32, 28, 25, 58, 61};

    selectionSort(arr, 7);
    printArr(arr,7);

    return 0;


}