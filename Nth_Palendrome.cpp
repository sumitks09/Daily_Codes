#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter nth num"<<endl;
    cin>>n;
    int i=0;
    int num=1;
  
    while(i!=n)
    {
         int num2=0;
        int num1=num;
        while(num1!=0)
        {
            int r=num1%10;
            num1/=10;
            num2=num2*10+r;
        }

        if(num==num2)
        {
            i++;
        }
        num=num+1;
    }
    cout<<num-1;
}