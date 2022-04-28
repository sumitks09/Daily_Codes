#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of nums";
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int i=0;
    int j=nums.size()-1;
    int key;
    cout<<"Enter Key";
    cin>>key;

    while(i<=j)
    {
        int mid=i+((j-i)/2);
        if(key==nums[mid])
        {
      cout<<"Key found at"<<mid;
      return 0;
        }

if(key<nums[mid])
{
    j=mid-1;
}
else
{
    i=mid+1;
}     
    }
    cout<<"element not found"<<endl;
    return 0;
}