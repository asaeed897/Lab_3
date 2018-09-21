#include<iostream>

using namespace std;

float Calculate_savings(float ,float,float);

int main(int argc, char const *argv[]) {
  float year,amount,further_deposit,initial_deposit,interest_rate,total_amount;
  char choice;
  cout<<"\nEnter the initial_amount: ";
  cin>>initial_deposit;
  while(true)
  {
  cout<<"Do you want to deposit some amonut [y/n]";
  cin>>choice;
  if(choice=='y' || choice== 'Y')
  {
    cout<<"\nEnter the amount: ";
    cin>>further_deposit;
    initial_deposit+=further_deposit;
    total_amount=initial_deposit;
    cout<<"Enter N years"<<endl;
    cin>>year;
    cout<<"Enter interest rate: ";
    cin>>interest_rate;
    total_amount=Calculate_savings(year,interest_rate,total_amount);
  }
  else if(choice=='n' || choice== 'N')
  {
    cout<<"Enter N years"<<endl;
    cin>>year;
    cout<<"Enter interest rate: ";
    cin>>interest_rate;
    total_amount=initial_deposit;
    total_amount=Calculate_savings(year,interest_rate,total_amount);
  }
  cout<<"Total_savings: "<<total_amount;
}
  return 0;
}
float Calculate_savings(float year,float interest_rate,float total_amount)
{
  int i,profit=0;
  for(i=1;i<year;i++)
  {
    profit+=interest_rate*total_amount;
    total_amount+=profit;
  }
  return total_amount;
}
