#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapArr(int arr[], int n){

    for(int i=0;i<n;i+=2){
        if(i+1 <n){
            swap(arr[i], arr[i+1]);
        }
    }

}


int main()
{
    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};


    swapArr(even,6);
    swapArr(odd,5);

    printArr(even,6);
    printArr(odd,5);
}