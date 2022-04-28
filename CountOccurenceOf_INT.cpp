#include<iostream>
using namespace std;
int countdigits(int n,int digit)
{
    int count=0;
    while(n>0)
    {
        int d=n%10;
        if(digit==d)
        {
            count++;
        }
        n/=10;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    int digit;
    cout<<"Enter digit "<<endl;
    cin>>digit;
    int ans=countdigits(n,digit);
    cout<<ans;
    return 0;
}