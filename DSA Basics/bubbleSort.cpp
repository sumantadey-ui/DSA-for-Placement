#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=1; i<n;i++){
        bool swapped=false;
        for(int j=0; j<n-i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            //for already sorted
            break;   
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

    bubbleSort(arr, 7);
    printArr(arr,7);

    return 0;


}