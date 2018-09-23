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
  cout << "Enter Array items: " << endl;
  for(index=0;index<size;index++)
  {
      cin>>array[index];
  }
  cout<<"Do you want to Reverse the array: Press '1': "<<endl;
  cout<<"Do you want to Sort the array: Press '2': "<<endl;
  cout<<"Do you want to Rotate the array: Press '3': "<<endl;
  cout<<"Do you want to Search item from unsorted_array: Press '4': "<<endl;
  cout<<"Do you want to Search item from Sorted_array: Press '5': "<<endl;
  cin>>choice;
  if(choice=='1')
  reverse_arr(array,size);
  else if (choice=='2')
  sort_array(array,size);
  else if(choice=='3')
  rotateArray(array,size);
  else if(choice=='4')
  {
    int search_item;
    cout<<"Enter search item: ";
    cin>>search_item;
    search_from_unsortedArray(array,size,0,search_item);
  }
  else if(choice=='5')
  {
    int search_item;
    bool check;
    cout<<"Enter search item: ";
    cin>>search_item;
    check=checkSort(array,size);
    if(check==true)
    cout<<"\nArray is already Sorted "<<endl;
    else if(check==false)
    sort_array(array,size);
    search_from_sortedArray(array,0,size-1,search_item);
  }
  else
  cout<<"Wrong choice"<<endl;
  return 0;
}
