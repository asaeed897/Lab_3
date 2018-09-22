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
void show_index(int index,int state)
{
  if(state==1)
  cout<<"Item found... Index is "<<index<<endl;
  else if(state==0)
  cout<<"Item Not Found "<<endl;
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
void search_from_unsortedArray(int array[],int size,int index,int search_item)
{
  if(search_item==array[index])
  show_index(index,1);
  else if((search_item!=array[index]) && (index<size))
  search_from_unsortedArray(array,size,++index,search_item);
  else
  show_index(index,0);

}
