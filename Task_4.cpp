#include<iostream>
#include"usefull_array.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int size,index;
  char choice;
  cout<<"Enter the size of array: ";
  cin>>size;
  int array[size];
  cout << "Enter Array item: " << endl;
  for(index=0;index<size;index++)
  {
      cin>>array[index];
  }
  cout<<"Do you want to Reverse the array: Press 'R': "<<endl;
  cout<<"Do you want to Search item from unsorted_array: Press 'U' "<<endl;
  cin>>choice;
  if(choice=='R' || choice=='r')
  reverse_arr(array,size);
  else if(choice=='U' || choice=='u')
  {
    int search_item;
    cout<<"Enter search item"<<endl;
    cin>>search_item;
    search_from_unsortedArray(array,size,0,search_item);
  }

  return 0;
}
