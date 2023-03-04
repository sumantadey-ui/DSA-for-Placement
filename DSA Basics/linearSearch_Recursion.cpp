#include<iostream>
using namespace std;

// void print(int arr[], int n){
//     cout<<"Size of the array is "<<n<<endl;
//     for(int i =0 ; i<n; i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;
// }



bool linearSearch(int arr[], int size, int key){
    // print(arr, size);
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return linearSearch(arr+1, size-1, key);
}



int main()
{
    int arr[5]={1,2,3,4,5};
    // int key=6;
    int key=5;
    int size = 5;
    bool ans= linearSearch(arr, size, key);
    if(ans){
        cout<<"Key is found...."<<endl;
    }
    else{
        cout<<"Key is not found..."<<endl;
    }
}