#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=1;//k helps in setting bit
    int c=0;
    cout<<"Bit to set:";
    cin>>i;
    cout<<"  before:"<<c<<"_______";
    k=k<<i-1;//bit masking
    c=c|k;
    cout<<"  after:"<<c<<"_______";

    return 0;
}