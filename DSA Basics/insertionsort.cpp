#include<iostream>
using namespace std;

void inserionSort(int arr[], int n){

    for(int i=1; i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                // shifting
                arr[j+1]=arr[j];
            }
            else 
                break;
        }
        arr[j+1]=temp;  
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

    inserionSort(arr, 7);
    printArr(arr,7);

    return 0;


}