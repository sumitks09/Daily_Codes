#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums,int s,int e)
        {
                int i=s;
                int m=(s+e)/2;
                int j=m+1;
                
                vector<int>temp;
                
              while(i<=m&&j<=e)
                 {
                 if(nums[i]<nums[j])
                 {
                 temp.push_back(nums[i]);   
                 i++;
                }
               else
                 {
                 temp.push_back(nums[j]);
                 j++;
               }
                 }
                      
                      while(i<=m)
                      {
                              temp.push_back(nums[i]);
                              i++;
                      }
                      while(j<=e)
                      {
                              temp.push_back(nums[j]);
                              j++;
                      }
                      
                      int k=0;
                      
                   for(int idx=s;idx<=e;idx++)
                   {
                           nums[idx]=temp[k++];
                   }
                    return;  
                      
        }
        
        
        void mergesort(vector<int>& nums,int s,int e)
        {
        if(s>=e)
        {
                return;
        }
                int mid=(s+e)/2;
                mergesort(nums,s,mid);
                mergesort(nums,mid+1,e);
                
                return merge(nums,s,e);
                
        }
        
  int main()
  {
      int n;
      cin>>n;
     vector<int>nums;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         nums.push_back(x);
     }
            int s=0;
            int e=nums.size()-1;
            mergesort(nums,s,e);

       for(int x=1;x<=nums.size();x++)
       {
           cout<<x<<" ";
       }
       return 0;
}