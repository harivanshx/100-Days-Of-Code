//n to 1 with backtrack


#include<bits/stdc++.h>
using namespace std;


void backtrk(int i,int n){


    if(i>n)return;

    backtrk(i+1,n);
    cout<<i<<endl;



}


int main()
{
int z;
cin>>z;

backtrk(1,z);
return 0;
}





