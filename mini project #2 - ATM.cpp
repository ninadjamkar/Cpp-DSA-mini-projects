#include<iostream>
using namespace std;

double balance1;
int main()
{
    cout<<"***********************************"<<endl;
    cout<<"==================================="<<endl;
    cout<<"  *****|| BANK OF AMERICA ||*****"<<endl;
    cout<<"==================================="<<endl;
    cout<<"***********************************"<<endl;
    
    int password;
    int pincode;
    
    cout<<""<<endl;
    cout<<"Enter your ATM PIN: ";
    cin>>pincode;
    
    if(pincode == 12345)
    {
        cout<<""<<endl;
        cout<<"WELCOME NINAD JAMKAR"<<endl;
        for(int i=0; i<3; i++)
        {
            cout<<""<<endl;
            cout<<"ENTER YOUR PASSWORD: ";
            cin>>password;
            
            double balance = 1000;
            balance1 = balance;
            
            if(password == 54321)
            {
                for(int x=1; x<10; x++)
                {
                    double withdrawl, deposit;
                    int choice;
                    cout<<""<<endl;
                    if(x==1)
                    {
                        cout<<"CHOOSE A TRANSACTION:"<<endl;
                    }
                    cout<<"*****MAIN MENU*****"<<endl;
                    cout<<""<<endl;
                    cout<<"[1] ENQUIRE ACCOUNT BALANCE"<<endl;
                    cout<<"[2] CASH WITHDRAWL"<<endl;
                    cout<<"[3] DEPOSIT CASH"<<endl;
                    cout<<"[4] EXIT"<<endl;
                    cout<<""<<endl;
                    cout<<"ENTER YOUR CHOICE: ";
                    cin>>choice;
                    
                    switch(choice)
                    {
                        case 1:
                        cout<<""<<endl;
                        cout<<"ENQUIRE ACCOUNT BALANCE"<<endl;
                        cout<<""<<endl;
                        cout<<"YOUR CURRENT ACCOUNT BALANCE IS "<<balance1<<"$"<<endl;
                        continue;
                        
                        case 2:
                        cout<<""<<endl;
                        cout<<"CASH WITHDRAWL"<<endl;
                        cout<<"ENTER AMOUNT IN $: ";
                        cin>>withdrawl;
                        balance1 = balance1-withdrawl;
                        cout<<""<<endl;
                        cout<<withdrawl<<"$ IS DEBITED FROM YOUR ACCOUNT"<<endl;
                        cout<<"YOUR REMAINING BALANCE IS "<<balance1<<"$"<<endl;
                        continue;
                        
                        case 3:
                        cout<<""<<endl;
                        cout<<"DEPOSIT CASH"<<endl;
                        cout<<"ENTER AMOUNT IN $: ";
                        cin>>deposit;
                        balance1 = balance1+deposit;
                        cout<<""<<endl;
                        cout<<deposit<<"$ IS CREDITED TO YOUR ACCOUNT"<<endl;
                        cout<<"YOUR NEW BALANCE IS: "<<balance1<<"$"<<endl;
                        continue;
                        
                        case 4:
                        cout<<"EXIT"<<endl;
                        break;
                        
                        default:
                        cout<<"INVALID OPTION"<<endl;
                        continue;
                    }
                    break;
                }
                break;
            }
            else if(i == 2)
            {
                cout<<"CARD IS CAPTURED"<<endl;
            }
            else
            {
                cout<<"PLEASE TRY AGAIN"<<endl;
            }
        }
    }
    else
    {
        cout<<""<<endl;
        cout<<"INCORRECT PIN"<<endl;
        cout<<"PLEASE TRY AGAIN"<<endl;
    }
    return 0;
}