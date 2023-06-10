#include <iostream>
#include <stdio.h>
#include<cstring>
using namespace std;
class person
{
public:
    string name;
    int age;
    char gen;
    string aadhar;
    string pan;
    char mob[10];
    string gname;
    string add;
    char dateofbirth[50];
    char email[50];


public:
    void get_details(void)
    {
        cout << "Enter your Name:" << endl;
        cin.ignore();
        getline (cin, name);
        cout << "Enter your Age:" << endl;
        cin >> age;
        cout << "Enter your Gender:" << endl;
        cin >> gen;
        cout << "Enter your Aadhar No:" << endl;
        cin.ignore();
       getline (cin, aadhar);
        cout << "Enter your PanCard No:" << endl;
        cin.ignore();
        getline (cin, pan);
        cout << "Enter your Mobile No:" << endl;
        cin >> mob;
        cout << "Enter your Garentor Name:" << endl;
        cin.ignore();
        getline (cin, gname);
        cout << "Enter your Address:" << endl;
        getline (cin, add);
        cout << "Enter your Date of Birth:" << endl;
        cin >> dateofbirth;
        cout << "Enter your Email address:" << endl;
        cin >> email;
    }
    void display_details(void);
};
void person::display_details(void)
{
    cout << "********************************************************************\n";
    cout << "NAME:" << name << endl;
    cout << "AGE:" << age << endl;
    cout << "Gender:" << gen << endl;
    cout << "Aadhar No:" << aadhar << endl;
    cout << "Pancard No:" << pan << endl;
    cout << "Mobile No:" << mob << endl;
    cout << "Garentor Name:" << gname << endl;
    cout << "Address:" << add << endl;
    cout << "Date of Birth:" << dateofbirth << endl;
    cout << "Email address:" << email << endl;
}

int main()
{
    person p;
    int ch, c, arr[10], i;
    char  b = 'y';
    char ANS,ans,A,B,C;
    do
    {
    cout << "**********SBI**********";
    cout << "\n1.Open Account\n2.Close Account\n3.Exit";
    cout << "\nEnter Choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
        p.get_details();
        p.display_details();
        do
        {
        cout << "Do you Want to Change Any Data:(y/n)";
        cin >> ans;
        if (ans == b)
        {
            cout << "\n1.NAME";
            cout << "\n2.AGE";
            cout << "\n3.Gender";
            cout << "\n4.Aadhar No";
            cout << "\n5.Pancard No";
            cout << "\n6.Mobile No";
            cout << "\n7.Garentor Name";
            cout << "\n8.Address";
            cout << "\n9.Date of Birth";
            cout << "\n10.Email address";
            cout << "\nenter choice:";
            cin >> c;
             switch (c)
            {
             case 1:
                 cout << "Enter your Name:";
                 cin.ignore();
                 getline (cin, p.name);
                 break;
             case 2:
                 cout << "Enter your Age:";
                cin >> p.age;
                break;
             case 3:
                 cout << "Enter your Gen:";
                cin >> p.gen;
                break;
             case 4:
                cout << "Enter your Aadhar No:";
                cin.ignore();
                getline (cin, p.aadhar);
                break;
             case 5:
                 cout << "Enter your Pan Card No:";
                 cin.ignore();
                getline (cin, p.pan);
                break;
             case 6:
                  cout << "Enter your Mob No:";
              cin >> p.mob;
                break;
            case 7:
              cout << "Enter your Garenter Name:";
              cin.ignore();
               getline (cin, p.gname);
             case 8:
                  cout << "Enter your Address:";
                  cin.ignore();
                getline (cin, p.add);
                break;
             case 9:
                  cout << "Enter your Dateofbirth:";
                cin >> p.dateofbirth;
                break;
             case 10:
                  cout << "Enter your Email:";
                cin >> p.email; 
                break;
            default:
                 cout<<"wrong choice";
            }
            p.display_details();
        }
            cout<<"Do you Want to Contineou:(1/0)";
            cin>>ANS;
        
        }while((ANS=='1') || (ANS=='1'));
        cout<<"Do You Want to Submit:(y/n)";
        cin>>B;
        if(B=='y')
        {
            cout<<"\n*****************************************************\n";
            cout<<"\n**********Your Account Is Successfully Open**********\n";
            cout<<"\n*****************************************************\n";
            cout<<"Do You Want To See Details:(y/n)";
            cin>>C;
            if(C=='y')
            {
                cout<<"\nAccount Holder Name:"<<p.name;
                cout<<"\nIFSC=SBIN0003491";
               cout<<"\nAccount No:"<<"4769643491"<<p.mob[3]<<p.mob[4]<<p.mob[5]<<p.mob[6];
            }
            
        }
    }
        cout<<"\nDo you want to Go on to The Home page:(y/n)";
        cin>>A;
}while((A=='y') || (A=='y'));
}
