#include<bits/stdc++.h>
using namespace std;
int lcsRecursive(string x,string y,int xl,int yl)
{
    if(xl==0 || yl==0)
        return 0;
    else if(x[xl-1] == y[yl-1])
        return 1+lcsRecursive(x,y,xl-1,yl-1);
    else
    {
        return max(lcsRecursive(x,y,xl-1,yl),lcsRecursive(x,y,xl,yl-1));
    }
}
int main()
{
    string x,y;
    int xlen,ylen;
    cout<<"enter 1st String:";
    cin>>x;
    cout<<"enter 2nd String:";
    cin>>y;
    xlen=x.length();
    ylen=y.length();
    cout<<lcsRecursive(x,y,xlen,ylen);
    return 0;
}