#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int size,int key)
{
  for(int i=0;i<size;i++)
    {
      if(arr[i]==key)
        return 1;
    }
  return 0;
}

int main() {
  int arr[50], size, key;
  cout<<"Please enter the size of array:"<<endl;
  cin>>size;
  cout<<"Enter the Elements of array"<<endl;
  for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }
  cout<<"enter the KEY:"<<endl;
  cin>>key;
  bool found  = LinearSearch(arr,size,key);
  if(found)
   cout<<"the KEY is present"<<endl;
  else
    cout<<"the Key is Absent"<<endl;
  return 0;
  
}
