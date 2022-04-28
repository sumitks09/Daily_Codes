#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;

  vector<int>nums;

for(int i=0;i<n;i++)
{
    int x;
    cin>>x;             //input vector
    nums.push_back(x);
}
 

for(int i=1;i<n;i++) { //starting from 1st index to last index as array of size 1 is always sorted.
int current=nums[i];
int prev=i-1;
while( prev>=0 && nums[prev]>current ) {
nums[prev+1]=nums[prev];      //shift till we are getting the larger number on left side.
prev=prev-1;
}
 
 //comes out of the loop only when either the i has become negative or at left we have smaller element.

nums[prev+1]=current;  //inserting element at its right position.
}


for(int i=0;i<nums.size();i++)
{
    cout<<nums[i]<<" ";  //display the elements.
}

    return 0;
}