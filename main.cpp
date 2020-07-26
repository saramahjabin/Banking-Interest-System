#include <iostream>
#include <string.h>
using namespace std;
class BankAccount
{
protected:
    string CusName;
    string DOB;
    int AccountNo;
    int NationalID;         //Monthly Interest calculating System..
 public:
    int n;
    float MonthlyTInterest;
    float depositMoney;
    float withdrawMoney;
    float TwithdrawMoney;
    float balance;
    int depositDay;
    int depmoney;
    int withdrawDay;
    int validDay;
    float PerDayInterestBW;
    float PerDayInterestAW;
    float MonthlyInterest;
    float TotalBalance;
     void setCusDetails(string p ,string q ,int r ,int s)
     {
        CusName = p;
        DOB = q;
        AccountNo = r;
        NationalID = s;

     }

     float depMoney()
     {
        cout<<"Enter the amount of Deposit Money"<<endl;
        cin>>depositMoney;

     }
     float withMoney()
     {
        cout<<"Enter the amount of Withdraw Money"<<endl;
        cin>>withdrawMoney;

     }
     float checkBalance()
      {
        balance = depmoney - withdrawMoney;

      }
      int MdepositDay()
      {
          cout<<"Enter the Deposit Day"<<endl;
          cin>>depositDay;
      }
      int MwithdrawDay()
      {
          cout<<"Enter the Withdraw Day"<<endl;
          cin>>withdrawDay;
      }

      int MvalidDay()
      {
          validDay = withdrawDay - depositDay;
      }
    float MPerDayInterestBW()
    {
      PerDayInterestBW = (depmoney*0.033)/100;
    }
    float MPerDayInterestAW()
    {
      PerDayInterestAW = (balance*0.033)/100;
    }
    float MMonthlyInterest()
    {
       MonthlyInterest = (PerDayInterestBW*validDay)+(PerDayInterestAW*((30-withdrawDay)+1));
    }
    float calculation()
    {
           cout<<"How many times you withdraw money?"<<endl;
           cin>>n;
           MonthlyTInterest=0;
           depmoney=depositMoney;
    for(int i=0; i<n; depmoney= balance, depositDay= withdrawDay, i++)
    {
        withMoney();
        checkBalance();
        MwithdrawDay();
        MvalidDay();
        MPerDayInterestBW();
        MPerDayInterestAW();
        MMonthlyInterest();
        MonthlyTInterest= MonthlyTInterest + MonthlyInterest;
    }
    TwithdrawMoney = depositMoney-balance;
    }
    float MTotalBalance()
    {
       TotalBalance = balance+MonthlyTInterest;
    }

};
 class Customer1 : public BankAccount
 {
     public:
      void showInfo()
      {
          cout<<"\n\n***Welcome to Monthly Interest Calculating System***"<<endl;
          cout<<"\tCustomer Name:"<<CusName<<endl;
          cout<<"\tCustomer Account Number:"<<AccountNo<<endl;
          cout<<"\tCustomer Date Of Birth:"<<DOB<<endl;
          cout<<"\tCustomer National ID:"<<NationalID<<endl;
          cout<<"\tDeposit Money:"<<depositMoney<<endl;
          cout<<"\tWithdraw Money:"<<TwithdrawMoney<<endl;
          cout<<"\tBalance:"<<balance<<endl;
          cout<<"\tMonthly Interest:"<<MonthlyTInterest<<endl;
          cout<<"\tTotal Balance:"<<TotalBalance<<endl;


      }
};
 class Customer2 : public BankAccount
 {
     public:
      void showInfo()
      {
          cout<<"\n\n***Welcome to Monthly Interest Calculating System***"<<endl;
          cout<<"\tCustomer Name:"<<CusName<<endl;
          cout<<"\tCustomer Account Number:"<<AccountNo<<endl;
          cout<<"\tCustomer Date Of Birth:"<<DOB<<endl;
          cout<<"\tCustomer National ID:"<<NationalID<<endl;
          cout<<"\tDeposit Money:"<<depositMoney<<endl;
          cout<<"\tWithdraw Money:"<<TwithdrawMoney<<endl;
          cout<<"\tBalance:"<<balance<<endl;
          cout<<"\tMonthly Interest:"<<MonthlyTInterest<<endl;
          cout<<"\tTotal Balance:"<<TotalBalance<<endl;


      }
};

int main()
{
    BankAccount *m;
    Customer1 C1;
    Customer2 C2;
    m = &C1;
    m->setCusDetails("Sara" , "30/11/2000" , 101, 12345678);
    m->depMoney();
    m->MdepositDay();
    m->calculation();
    m->MTotalBalance();
    C1.showInfo();
    m = &C2;
    m->setCusDetails("Soad" , "28/10/1997" , 102, 87654321);
    m->depMoney();
    m->MdepositDay();
    m->calculation();
    m->MTotalBalance();
    C2.showInfo();
    return 0;
}
