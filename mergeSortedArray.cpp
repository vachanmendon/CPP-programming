#include<iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int i=0,j=0,k=0;
    int n3=n1+n2;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    while(i<n1){
        arr3[k++]=arr1[i++];
    }

    while(j<n2){
        arr3[k++]=arr2[j++];
    }

    cout<<"merged array is: "<<endl;
    for(k=0;k<n1+n2;k++){
        cout<<arr3[k];
    }
}

int main(){

    int arr1[]={1,2,5,9};
    int arr2[]={3,4,5,6,9};
    
    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1 + n2];
    mergeSortedArrays(arr1,arr2,n1,n2,arr3);
    return 0;
}