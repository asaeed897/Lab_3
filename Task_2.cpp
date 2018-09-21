#include<iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  int in_val,divider,count=0;
  cout<<"Enter Number Which you want to check"<<endl;
  cin>>in_val; //variable for input values
  for(divider=1;divider<=in_val;divider++)
  {
    if(in_val%divider==0)
    {
      count+=1;
    }
  }
  if(count==2)
  cout<<in_val<<" is prime number"<<endl;
  else
  cout<<in_val<<" is not a prime number"<<endl;
  return 0;
}
