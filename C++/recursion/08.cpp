//dum of n int eith recursion

#include<bits/stdc++.h>
using namespace std;





void sumOfN(int n,int sum){
    if(n<1){
        cout<<sum;
        return;
    }

    sumOfN(n-1,sum+n);


}
 
int main()
{

    int n;
    cin>>n;

    sumOfN(n,0);

return 0;
}