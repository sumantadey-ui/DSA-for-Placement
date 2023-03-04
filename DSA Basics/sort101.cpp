#include<iostream>
using namespace std;



void sortOne(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while (arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(arr[i]==1 && arr[i]==0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[10]={0,1,0,1,0,1,1,0,1,0};

    sortOne(arr, 10);
    printArr(arr,10);

    return 0;


}