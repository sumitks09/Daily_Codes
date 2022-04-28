#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a , int b)
    {
        return a<b;  //using a custom comparator to sort the nums.
    } 

int main()
{
    int n;
    cout<<"enter number of elements";
    cin>>n;

    vector<int>nums;
    cout<<"enter elements of nums"<<endl;
    for(int i=0; i<n; i++)  
    {
        int x;
        cin>>x;
        nums.push_back(x); //input elements.
    }

sort(nums.begin(),nums.end(),compare); //passing a function to a function .

    for(int i=0;i<nums.size();i++)
{
    cout<<nums[i]<<" ";  //output.
}



    return 0;
}