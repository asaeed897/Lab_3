#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void show_array(int array[],int size)
{
  int index;
  for(index=0;index<size;index++)
  {
    cout<<array[index]<<endl;
  }
}
void reverse_arr(int array[],int size)
{
  int index_1,index_2=0,temp,mid_point;
    mid_point=size/2;
    for(index_1=size-1;index_1>mid_point;index_1--)
    {
        temp=array[index_1];
        array[index_1]=array[index_2];
        array[index_2]=temp;
        index_2++;
    }
    show_array(array,size);
}
