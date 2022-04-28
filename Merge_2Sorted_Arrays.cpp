#include<iostream>
#include<algorithm>

using namespace std;
void merge(int *arr1,int *arr2,int n,int m,int *arr3)
{
 int i=0;
 int j=0;
 int k=0;
 while(i<n&&j<m)
 {
     if(arr1[i]<arr2[j])
     {
         arr3[k]=arr1[i];
         i++;
         k++;
     }
     else
     {
         arr3[k]=arr2[j];
         j++;
         k++;
     }
 }
 while(i<n)
 {
     arr3[k]=arr1[i];
     i++;
     k++;
 }
 while(j<m)
 {
     arr3[k]=arr2[j];
     j++;
     k++;
 }
}

void print(int *arr3,int n,int m)
{
    for(int i=0;i<m+n;i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    
    int arr1[3]={1,432,3323};
    int arr2[5]={42,51,643,721,865};
    int arr3[8]={0};
    merge(arr1,arr2,3,5,arr3);
    print(arr3,3,5);
    
}