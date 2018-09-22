#include<iostream>

using namespace std;

float Calculate_savings(float,float,float);

int main(int argc, char const *argv[]) {
  float No_of_year,amount,further_deposit,initial_deposit,interest_rate;
  char choice;
  cout<<"\nEnter the Initial_amount: ";
  cin>>initial_deposit;
  while(true)
  {
  cout<<"\nDo you want to deposit some amonut [y/n]: ";
  cin>>choice;
  if(choice=='y' || choice== 'Y')
  {
    cout<<"\nEnter the amount: ";
    cin>>further_deposit;
    initial_deposit+=further_deposit;
    cout<<"Enter No of years"<<endl;
    cin>>No_of_year;
    cout<<"Enter interest rate: ";
    cin>>interest_rate;
    initial_deposit=Calculate_savings(No_of_year,interest_rate,initial_deposit);
  }
  else if(choice=='n' || choice== 'N')
  {
    cout<<"Enter No of years"<<endl;
    cin>>No_of_year;
    cout<<"Enter interest rate: ";
    cin>>interest_rate;
    initial_deposit=Calculate_savings(No_of_year,interest_rate,initial_deposit);
  }
  else
  cout<<"\nwrong choice"<<endl;
  cout<<"\nTotal_savings: "<<initial_deposit;
  cout<<"\nDO you want to Quit [y/n]: ";
  cin>>choice;
  if(choice=='Y' || choice=='y')
  break;
  else
  continue;
}
  return 0;
}


float Calculate_savings(float No_of_year,float interest_rate,float initial_deposit)
{
  int i;
  float profit=0;
  for(i=1;i<=No_of_year;i++)
  {
    profit=(interest_rate/100)*initial_deposit;
    initial_deposit+=profit;
  }
  return initial_deposit;
}
