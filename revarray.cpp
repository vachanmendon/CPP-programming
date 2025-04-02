#include<iostream>
 using namespace std;
 
 void reverse(int arr[], int n){
     for(int i=0;i<n-i-1;i++){
         swap(arr[i],arr[n-i-1]);
     }
 }
 
 int main(){
     int arr[]= {2,3,5,7,8,4};
     int n= sizeof(arr)/sizeof(arr[0]);
     cout<<"array before reversal: ";
     for(int i=0;i<n;i++){
         cout<<arr[i];
     }
     
     reverse(arr, n);
     
     cout<<endl<<"array after reversal: ";
     for(int i=0;i<n;i++){
         cout<<arr[i];
     }
     
     return 0;
 }