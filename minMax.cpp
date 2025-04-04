#include<iostream>
using namespace std;

void findMinMax(int arr[], int n){
    int i, max,min;
    if(n%2==0){
        if(arr[0]>arr[1]){
            max=arr[0];
            min=arr[1];
        }
        else{
            max=arr[1];
            min=arr[0];
        }
        i=2;
    }
    else{
        max = arr[0]; min=arr[0];i=1;
    }


    while(i<n-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>max) max=arr[i];
            if(arr[i+1]<min) min=arr[i+1];
        }
        else{
            if(arr[i+1]>max) max=arr[i+1];
            if(arr[i]<min) min=arr[i];
        }
        i=i+2;
    }
    cout<<"Max= "<<max<<endl;
    cout<<"Min= "<<min<<endl;
}

int main(){

    int arr[]= {2,6,9,3,5,8,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    findMinMax(arr,n);
    return 0;
}