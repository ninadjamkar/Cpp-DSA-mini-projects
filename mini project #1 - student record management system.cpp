#include<iostream>
using namespace std;

string arr1[100], arr2[100], arr3[100], arr4[100], arr5[100], arr6[100], arr7[100];
int total=0;

void enter()
{
    int choice;
    cout<<""<<endl;
    cout<<"NUMBER OF STUDENTS: ";
    cin>>choice;
    if(total==0)
    {
        total=total+choice;
        for(int i=0; i<choice; i++)
        {
            cout<<""<<endl;
            cout<<"|| ENTER DATA OF STUDENT #"<<i+1<<" ||"<<endl<<endl;
            cout<<"ENTER FIRST NAME: ";
            cin>>arr1[i];
            cout<<"ENTER LAST NAME: ";
            cin>>arr2[i];
            cout<<"ENTER E-MAIL ID: ";
            cin>>arr3[i];
            cout<<"ENTER SAP ID: ";
            cin>>arr4[i];
            cout<<"ENTER ROLL NO: ";
            cin>>arr5[i];
            cout<<"ENTER COURSE: ";
            cin>>arr6[i];
            cout<<"ENTER SPECALIZATION: ";
            cin>>arr7[i];
            cout<<""<<endl;
        }
    }
    else
    {
        for(int i=total; i<total+choice; i++)
        {
            cout<<""<<endl;
            cout<<"|| ENTER DATA OF STUDENT #"<<i+1<<" ||"<<endl<<endl;
            cout<<"ENTER FIRST NAME: ";
            cin>>arr1[i];
            cout<<"ENTER LAST NAME: ";
            cin>>arr2[i];
            cout<<"ENTER E-MAIL ID: ";
            cin>>arr3[i];
            cout<<"ENTER SAP ID: ";
            cin>>arr4[i];
            cout<<"ENTER ROLL NO: ";
            cin>>arr5[i];
            cout<<"ENTER COURSE: ";
            cin>>arr6[i];
            cout<<"ENTER SPECALIZATION: ";
            cin>>arr7[i];
            cout<<""<<endl;
        }  
        total=total+choice;
    }
}

void show()
{
    for(int i=0; i<total; i++)
    {
        cout<<""<<endl;
        cout<<"NAME OF STUDENT #"<<i+1<<": "<<arr1[i]<<" "<<arr2[i]<<endl;
        cout<<"E-MAIL ID OF STUDENT #"<<i+1<<": "<<arr3[i]<<endl;
        cout<<"SAP ID OF STUDENT #"<<i+1<<": "<<arr4[i]<<endl;
        cout<<"ROLL NO OF STUDENT #"<<i+1<<": "<<arr5[i]<<endl;
        cout<<"COURSE OF STUDENT #"<<i+1<<": "<<arr6[i]<<endl;
        cout<<"SPECALIZATION OF STUDENT #"<<i+1<<": "<<arr7[i]<<endl;
        cout<<""<<endl;
    }
}

void search()
{
    string rollno;
    cout<<""<<endl;
    cout<<"ENTER ROLL NO OF STUDENT: ";
    cin>>rollno;
    for(int i=0; i<total; i++)
    {
        if(rollno==arr5[i])
        {
            cout<<""<<endl;
            cout<<"|| DATA OF STUDENT #"<<i+1<<" ||"<<endl;
            cout<<""<<endl;
            cout<<"NAME OF STUDENT #"<<i+1<<": "<<arr1[i]<<" "<<arr2[i]<<endl;
            cout<<"E-MAIL ID OF STUDENT #"<<i+1<<": "<<arr3[i]<<endl;
            cout<<"SAP ID OF STUDENT #"<<i+1<<": "<<arr4[i]<<endl;
            cout<<"ROLL NO OF STUDENT #"<<i+1<<": "<<arr5[i]<<endl;
            cout<<"COURSE OF STUDENT #"<<i+1<<": "<<arr6[i]<<endl;
            cout<<"SPECALIZATION OF STUDENT #"<<i+1<<": "<<arr7[i]<<endl;
            cout<<""<<endl;
        }
    }
}

void update()
{
    string rollno;
    cout<<""<<endl;
    cout<<"ENTER ROLL NO OF STUDENT: ";
    cin>>rollno;
    for(int i=0; i<total; i++)
    {
        if(rollno==arr5[i])
        {
            cout<<""<<endl;
            cout<<"|| PREVIOUS DATA ||"<<endl<<endl;
            cout<<""<<endl;
            cout<<"DATA OF STUDENT #"<<i+1<<endl;
            cout<<""<<endl;
            cout<<"NAME OF STUDENT #"<<i+1<<": "<<arr1[i]<<" "<<arr2[i]<<endl;
            cout<<"E-MAIL ID OF STUDENT #"<<i+1<<": "<<arr3[i]<<endl;
            cout<<"SAP ID OF STUDENT #"<<i+1<<": "<<arr4[i]<<endl;
            cout<<"ROLL NO OF STUDENT #"<<i+1<<": "<<arr5[i]<<endl;
            cout<<"COURSE OF STUDENT #"<<i+1<<": "<<arr6[i]<<endl;
            cout<<"SPECALIZATION OF STUDENT #"<<i+1<<": "<<arr7[i]<<endl;
            cout<<""<<endl;
            cout<<"|| ENTER NEW DATA ||"<<endl;
            cout<<""<<endl;
            cout<<"ENTER FIRST NAME: ";
            cin>>arr1[i];
            cout<<"ENTER LAST NAME: ";
            cin>>arr2[i];
            cout<<"ENTER E-MAIL ID: ";
            cin>>arr3[i];
            cout<<"ENTER SAP ID: ";
            cin>>arr4[i];
            cout<<"ENTER ROLL NO: ";
            cin>>arr5[i];
            cout<<"ENTER COURSE: ";
            cin>>arr6[i];
            cout<<"ENTER SPECALIZATION: ";
            cin>>arr7[i];
            cout<<""<<endl;
        }
    }
}

void deleterecord()
{
    int a;
    cout<<""<<endl;
    cout<<"==============================="<<endl;
    cout<<"Press 1 to DELETE COMPLETE DATA"<<endl;
    cout<<"Press 2 to DELETE SPECIFIC DATA"<<endl;
    cout<<"==============================="<<endl;
    cin>>a;
    cout<<""<<endl;
    if(a==1)
    {
        total=0;
        cout<<""<<endl;
        cout<<"|| ALL DATA IS DELETED ||"<<endl;
        cout<<endl;
    }
    else if(a==2)
    {
        string rollno;
        cout<<"ENTER ROLL NO OF STUDENT WHICH YOU WANT TO DELETE: ";
        cin>>rollno;
        cout<<""<<endl;
        for(int i=0; i<total; i++)
        {
            if(rollno==arr5[i])
            {
                for(int j=i; j<total; j++)
                {
                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+1];
                    arr3[j]=arr3[j+1];
                    arr4[j]=arr4[j+1];
                    arr5[j]=arr5[j+1];
                    arr6[j]=arr6[j+1];
                    arr7[j]=arr7[j+1];
                }
                total--;
                cout<<"|| YOUR REQUIRED DATA IS DELETED ||"<<endl;
            }
        }
    }
}

int main()
{
    cout<<"====================================="<<endl;
    cout<<"*************************************"<<endl;
    cout<<"------|| NMIMS, NAVI MUMBAI ||-------"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"====================================="<<endl;
    cout<<""<<endl;
    
    cout<<"====================================="<<endl;
    cout<<"*************************************"<<endl;
    cout<<"-----|| STUDENT RECORD SYSTEM ||-----"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"====================================="<<endl;
    cout<<""<<endl;
   
    int value;
    while(true)
    {
        cout<<"============================"<<endl;
        cout<<"****************************"<<endl;
        cout<<"|| Press 1 to ENTER DATA  ||"<<endl;
        cout<<"|| Press 2 to SHOW DATA   ||"<<endl;
        cout<<"|| Press 3 to SEARCH DATA ||"<<endl;
        cout<<"|| Press 4 to UPDATE DATA ||"<<endl;
        cout<<"|| Press 5 to DELETE DATA ||"<<endl;
        cout<<"|| Press 6 to EXIT        ||"<<endl;
        cout<<"****************************"<<endl;
        cout<<"============================"<<endl;
        cout<<""<<endl;
        cout<<"ENTER YOUR CHOICE: ";
        cin>>value;
        
        switch(value)
        {
            case 1:
            enter();
            break;
            
            case 2:
            show();
            break;
            
            case 3:
            search();
            break;
            
            case 4:
            update();
            break;
            
            case 5:
            deleterecord();
            break;
            
            case 6:
            exit(0);
            break;
            
            default:
            cout<<"INVALID INPUT"<<endl;
            cout<<"PLEASE ENTER A VALID OPTION"<<endl;
        }
    }
    return 0;
}
