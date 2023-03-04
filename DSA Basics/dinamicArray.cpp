#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{

    // char ch='s';
    // cout<<sizeof(ch)<<endl;

    // char* c = &ch;
    // cout<<sizeof(c)<<endl;

    // Stack--static memory---autometicly memory cleared
    // Heap--dinamic memory---menualy memory cleard


    int n;
    cin>>n;

    //variable size array
    int* arr= new int[n];

    //Taking input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr , n);
    cout<<"The ans is "<<ans<<endl;
}