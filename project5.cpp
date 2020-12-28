#include <iostream>
using namespace std;
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getdata();
        void convert();
        void display();
};
void Time::getdata()
{
    cout << "Enter time:" << endl;
    cout << "Hours: ";
    cin >> hh;
    cout << "Minutes: ";
    cin >> mm;
    cout << "Seconds: ";
    cin >> ss;
}
void Time::convert()
{
    seconds = hh*3600 + mm*60 + ss;
}
void Time::display()
{
    cout << "The time is = "<<hh<<":"<<mm<<":"<<ss<<endl;
    cout << "Time in total seconds: " << seconds;
}
int main()
{
    Time T;
    T.getdata();
    T.convert();
    T.display();
    return 0;
}
