#include<bits/stdc++.h>
using namespace std;



int unt=0;
void f(){

    if(unt==4) return;
    
        cout<<unt<<endl;
        unt++;
        f();
    }


int main()
{

    f();

return 0;
}