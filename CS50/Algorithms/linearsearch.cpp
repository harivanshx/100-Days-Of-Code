#include<bits/stdc++.h>
using namespace std;

int main(void)
{
int numbers[] = {200,40,60,23,50,2,234};
int n;
cout<<"Enter Number N: ";
cin>>n;

for (int i=0;i<7;i++){
    if(numbers[i]==n){
        cout<<"Found\n";
        return 1;

    }


}
cout<<"Not Found\n";
return 0;
}