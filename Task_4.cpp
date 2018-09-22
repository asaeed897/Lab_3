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
  cout<<"Do you want to Sort the array: Press 'S': "<<endl;
  cout<<"Do you want to Search item from unsorted_array: Press 'U': "<<endl;
  cout<<"Do you want to Search item from unsorted_array: Press 'F': "<<endl;
  cin>>choice;
  if(choice=='R' || choice=='r')
  reverse_arr(array,size);
  else if (choice=='S' || choice=='s')
  {sort_array(array,size);
    show_array(array,size);}
  else if(choice=='U' || choice=='u')
  {
    int search_item;
    cout<<"Enter search item: ";
    cin>>search_item;
    search_from_unsortedArray(array,size,0,search_item);
  }
  else if(choice=='F' || choice=='f')
  {
    int search_item;
    bool check;
    cout<<"Enter search item: ";
    cin>>search_item;
    check=checkSort(array,size);
    if(check==true)
    cout<<"\nArray is already Sorted "<<endl;
    else if(check==false)
    {
      sort_array(array,size);
      cout<<"Sorted array"<<endl;
      show_array(array,size);
    }
    search_from_sortedArray(array,0,size-1,search_item);
  }

  return 0;
}
