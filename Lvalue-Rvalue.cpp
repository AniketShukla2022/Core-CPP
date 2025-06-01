#include<iostream>
using namespace std;

void printname(const string& name)
{
    cout<<"LValue: "<<name<<endl;
}

void printname(const string&& name)
{
    cout<<"RValue: "<<name<<endl;
}

int main()
{
    string firstname = "aniket";
    string secondname = "shukla";
    
    string fullname = firstname + secondname;
    
    printname(fullname);
    printname(firstname+secondname);
    
    return 0;
}