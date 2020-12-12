#include<iostream>
using namespace std;
int main()
{
    cout<<"ARE YOU ELIGIBLE FOR VOTING?\n LETS FIND OUT!\n\n";
    int age,year;
    string fname,lname;
    cout<<"Enter your first name: ";
    cin>>fname;
    cout<<"Enter your last name: ";
    cin>>lname;
    cout<<"Enter your birth year: ";
    cin>>year;
    age=2020-year;
    if(age>=18)
    {
        cout<<"Name: "<<fname<<" "<<lname<<endl;
        cout<<"Birth year: "<<year<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"\nYou are an eligible voter!";
    }
    else
    {
        cout<<"Name: "<<fname<<" "<<lname<<endl;
        cout<<"Birth year: "<<year<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"\nYou are not an eligible voter.";
    }
    return 0;
}
