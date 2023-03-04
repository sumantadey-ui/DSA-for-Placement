#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j){
    
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][4], int i, int j){
    cout<<"Printing Row wise Sum--->"<<endl;
    for(int i=0; i<3;i++){
        int sum=0;
        for(int j=0; j<4;j++){
            sum+=arr[i][j];
        }
        cout<<"The Row wise sum is "<<sum<<endl;
    }
}

void printColSum(int arr[][4], int i, int j){
    cout<<"Printing Column wise Sum--->"<<endl;
    for(int j=0; j<4;j++){
        int sum=0;
        for(int i=0; i<3;i++){
            sum+=arr[i][j];
        }
        cout<<"The Column wise sum is "<<sum<<endl;
    }
}

int largestRowSum(int arr[][4], int i, int j){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int i=0; i<3;i++){
        int sum=0;
        for(int j=0; j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main()
{
    int arr[3][4];
    cout<<"Enter the elements of 2D arrays "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cin>>arr[i][j];
        }
    }

    // for(int j=0; j<4;j++){
    //     for(int i=0; i<3;i++){
    //         cin>>arr[i][j];
    //     }
    // }

    // int arr[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
    // int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    cout<<"Printing 2D arrays"<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"Enter the element to be search "<<endl;
    // int target;
    // cin>>target;

    // if(isPresent(arr, target, 3 , 4)){
    //     cout<<"Element found"<<endl;
    // }
    // else
    //     cout<<"Element not found"<<endl;
    
    // printRowSum(arr,3,4);
    // printColSum(arr,3,4);

    cout<<"The largest row sum is "<<largestRowSum(arr,3,4)<<endl;
}