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
void sort_array(int array[],int size)
{
    int index_1,index_2,temp;
    for(index_1=0; index_1<size; index_1++)
    {
        for(index_2=index_1; index_2<size; index_2++)
        {
            temp=array[index_1];
            if(array[index_1]>array[index_2])
            {
                array[index_1]=array[index_2];
                array[index_2]=temp;
            }

        }
    }
}
bool checkSort(int array[],int size)
{
    int index,count=0;
    for(index=0; index+1<size; index++)
    {
        if(array[index]>array[index+1])
        {
            count=1;
        }
    }
    if(count==0)
        return true;
    else if(count==1)
        return false;

}

void search_from_sortedArray(int array[],int start,int end,int search_item)
{
   int mid;
   if (start<=end)
   {
      mid = (start + end) / 2;
      if (search_item ==array[mid])
          show_index(mid,1);
      else if (search_item < array[mid])
          search_from_sortedArray(array, start, mid-1,search_item);
      else if (search_item > array[mid])
          search_from_sortedArray(array, mid+1, end,search_item);
  }
   else
   show_index(mid,0);
}
