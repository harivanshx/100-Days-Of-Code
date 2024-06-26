// print linearly from 1 to n






#include<bits/stdc++.h>
using namespace std;
int cnt=1;
void func(int n){
    if(cnt > n) return;
    
    cout<<cnt<<endl;
    cnt++;
    func(n);


}


int main()
{

    int n;
    cout<<"enter the value of N";
    cin>>n;
    func(n);

return 0;
}