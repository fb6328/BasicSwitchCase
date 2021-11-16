//Strathmore University Introduction to C++ Programming class
//Basic Switch ....Case statement for multiple conditions. Works like IF combined with ELSE IF
#include<iostream>
//#include<string>
using namespace std;

int main(){
char opt;
cout<<"Hi. This is your DBIT Sem 1 Timetable (Sep-Dec 2021)";
cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n\n";
cout<<"Please enter the day of the week (e.g. M, T, W, t or F)\n\n";
cin>>opt;

switch (opt)
{
case 'M':
 /* constant-expression */
    /* code */
cout<<"Monday Classes\n...................."<<endl;
cout<<"\t1. DBIT 1106: Math for Biz"<<endl;
cout<<"\t2. DBIT 1102: Intro to Programming"<<endl;
    break;
case 'T':
 /* constant-expression */
    /* code */
cout<<"Tuesday Classes\n...................."<<endl;
cout<<"\t1. DBIT 1102: Intro to Programs"<<endl;
cout<<"\t2. DBIT 1104: Intro to Ethics"<<endl;
    break;
    case 'W':
 /* constant-expression */
    /* code */
cout<<"Wednesday Classes\n...................."<<endl;
cout<<"\t1. DBIT 1106: Math for Business"<<endl;
cout<<"\t2. DBIT 1104: Theology"<<endl;
cout<<"\t2. DBIT 1101: Fundamentals of IT"<<endl;
    break;
    case 't':
 /* constant-expression */
    /* code */
cout<<"Thursday\n...................."<<endl;
cout<<"\t1. DBIT 1105: Accounting"<<endl;
cout<<"\t2. DBIT 1101: Fundamentals of IT"<<endl;
    break;
    case 'F':
 /* constant-expression */
    /* code */
cout<<"Friday Classes\n...................."<<endl;
cout<<"\t1. DBIT 1103: Business Computing"<<endl;
    break;
default:
cout<<"Invalid choice";
    break;
}

}