#include<bits/stdc++.h>
using namespace std;

void backtrk(int i,int n){

    if(i<1)return;
    backtrk(i-1,n);
    cout<<i<<endl;


}


int main()
{


    int b;
    cin>>b;
    backtrk(b,b);

return 0;
}