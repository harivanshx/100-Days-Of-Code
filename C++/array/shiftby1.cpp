#include<iostream>
using namespace std;
void shiftArray(int arr[],int n){
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i]=arr[i-1];

    }
    arr[0]=temp;



}
int main(){




    int arr[]={5,6,4,7,8,9};
    int n=6;




    shiftArray(arr,n);


    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }



}