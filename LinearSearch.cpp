#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size Of Nums";
    cin>>n;

 vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int key;
    cout<<"Enter the valu of key";
    cin>>key;

    for(int i=0; i<nums.size(); i++)
    {
        if(key==nums[i])
        {
            cout<<"Key Found At "<<i<<endl;
            return 0;
        }
    }
    cout<<"Key Not Found";
    return 0;

}
