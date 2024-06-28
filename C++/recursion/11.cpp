#include<bits/stdc++.h>
using namespace std;
int arr;

int func(int arr[], int l,int r){
    if(l>=r) return;
    swap( arr[l], arr[r]);
    func(arr,l+1,r-1);
}


int main()
    
{

    int arr[]={5,6,7,8,9,10};
    int n=6;
    func(arr,0,n-1);


return 0;
}