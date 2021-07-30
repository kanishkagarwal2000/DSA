#include<bits/stdc++.h>
using namespace std;
string tobinary(int dec,string result)
{
    if(dec==0)
        return result;
    result=to_string(dec%2)+result;
    return tobinary(dec/2,result);
}
int main()
{
    cout<<tobinary(18,"");
    return 0;
}