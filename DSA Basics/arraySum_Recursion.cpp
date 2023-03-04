#include<iostream>
using namespace std;

int getSum(int arr[], int size){

    if(size==0 ){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainningPart = getSum(arr+1, size-1);
    int sum= arr[0] + remainningPart;
    //cout<<sum<<endl;
    return sum ;


}

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=  5;
    

    cout<<"The ans is "<<getSum(arr, size)<<endl;
    return 0;
}