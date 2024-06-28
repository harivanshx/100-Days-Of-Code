#include<bits/stdc++.h>
using namespace std;

int sums(int n){
    if(n==0)return 0 ;
    
    return n + sums(n-1);
}

int main()
{

   cout<<sums(5);

return 0;
}