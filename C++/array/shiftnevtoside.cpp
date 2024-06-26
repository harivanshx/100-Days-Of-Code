#include<iostream>
using namespace std;


    void shiftNegativeToSide(int arr[],int n){



        int j=0;
       
        for (int index=0;index<n;index++){
            if(arr[index]<0){
                    swap(arr[index],arr[j]);
                    j++;
                }
            }
        }
   


int main(){


    int arr[]={23,24,-58,0,-2,0,1,2,3,4};

    int n=sizeof(arr)/sizeof(arr[0]);

    shiftNegativeToSide(arr,n);

    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
    



}