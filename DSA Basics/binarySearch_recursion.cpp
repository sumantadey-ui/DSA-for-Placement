#include<iostream>
using namespace std;

/*
void print(int arr[], int s, int e){
    cout<<"Size of the array is "<<e<<endl;
    for(int i =0 ; i<e; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

*/

bool binarySearch(int arr[], int s, int e, int key){
    // print(arr, s, e);
    if(s>e){
        return false;
    }

    int mid = s + (e - s)/2;

    // cout<<"The mid value is "<<arr[mid]<<endl;

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr, mid + 1, e , key);
    }

    else
        return binarySearch(arr, s, mid-1 , key);

}


int main()
{
    int arr[5]={2,4,6,8,10};
    // int key=6;
    int key=9;
    int size = 5;
    cout<<"Key is present or not "<<binarySearch(arr, 0,5, key);
}