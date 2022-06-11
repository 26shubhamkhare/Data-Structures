#include <bits/stdc++.h>
using namespace std;
int max(int arr[], int n)
{
  int maximum = INT_MIN;
  for(int i=0;i<n;i++)
    {
       maximum = max(maximum, arr[i]);
      /*if(arr[i]>maximum)
        maximum= arr[i]; */
    }
  return maximum;
  
}
int min(int arr[], int n)
{
  int minimum = INT_MAX;
  for(int i=0;i<n;i++)
    {
      minimum = min(minimum, arr[i]);
      /* if(arr[i]<minimum)
        minimum= arr[i]; */
    }
  return minimum;
  
}
int main() {
int size;
  cout<<"enter size of array"<<endl;
  cin>>size;
  int arr[50];
   cout<<"enter array elements:"<<endl;
  for(int i=0;i<size;i++){
   
    cin>>arr[i];
    }

  cout<<"the max element is:"<<max(arr,size)<<endl;
  cout<<"the min element is:"<<min(arr,size)<<endl;
  }
 
