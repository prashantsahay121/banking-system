#include <iostream>
#include <stdio.h>
using namespace std;
class person
{
public:
    char name[30];
    int age;
    char gen;
    char aadhar[16];
    char pan[12];
    char mob[10];
    char gname[30];
    char add[50];
    char dateofbirth[50];
    char email[50];

public:
    void Name(void)
    {
       cout << "Enter your Name:" << endl;
        cin >> name; 
    }
};
int main()
{
    person p;
    p.Name();
}