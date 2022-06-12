#include<bits/stdc++.h>
using namespace std;

//function to swap alternate elements
void swap(int arr[], int size)
{
  
  for(int i=0;i<size;i+=2) // using i=1+2 to move index by 2
    {
      //comparing if adj. element is present in array
      if(i+1<size)
      {
      swap(arr[i],arr[i+1]);          //if(i+1<size) {  temp = arr[i+1]; arr[i+1] = arr[i];  arr[i] = temp; }  without inbuilt function
      }
  //Printing Alternate elements here:
      for(int i=0;i<size;i++)
        {
          cout<< arr[i]<<" ";
        }
      
}

int main() 
{
  int size, arr[50];
  cout<<"enter size of an Array:"<<endl;
  cin>>size;
  cout<<"enter the elements in array:"<<endl;
  for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }   
  swap(arr,size);
  return 0;
    }
  
