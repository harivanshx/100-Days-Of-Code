//print name 5 times


#include<bits/stdc++.h>
using namespace std;



void fun(int i, int n){


if(i>n)return;

cout<<"Harivansh";
i++;
fun(i,n);
i++;

}
int main()
{
    int n;
    cin>>n;

    fun(1,n);

return 0;
}