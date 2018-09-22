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
  cout<<"Do you want to Reverse the array: Press 'R'"<<endl;
  cin>>choice;
  if(choice=='R' || choice=='r')
  reverse_arr(array,size);
  return 0;
}
