#include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = s - (e-s)/2;
    int len1= mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values
    int mainArrayIndex  = s;
    for(int i=0; i<len1;i++){
        first[i] = arr[mainArrayIndex ++];
    }
    mainArrayIndex  = mid+1;
    for(int i=0; i<len2;i++){
        first[i] = arr[mainArrayIndex ++];
    }

    // Merge
    int index1 =0;
    int index2 =0;

    mainArrayIndex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]< second[index2]){
            arr[mainArrayIndex]=first[index1];
        }
        else{
            arr[mainArrayIndex]=first[index1];
        }
    }

    while(index1<len1){
        arr[mainArrayIndex]=first[index1];
    }
    while(index2<len2){
        arr[mainArrayIndex]=first[index1];
    }
    
}


void mergeSort(int arr[], int s, int e){
    //Base case
    if(s>=e){
        return;
    }
    int mid = s - (e-s)/2;
    // To sort left part
    mergeSort(arr, s, mid-1);
    // To sort right part
    mergeSort(arr, mid+1, e);
    // Merge
    merge(arr, s, e);
}


int main()
{
    int  arr[7]={38,27,43,3,9,82,10};
    int n = 7;
    mergeSort(arr, 0, n-1);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;

}