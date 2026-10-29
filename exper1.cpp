#include<iostream>
using namespace std;
class student 
{
private : 
string name;
int roll_number;
float marks;

public : 
void input()
{
cout<<"enter name of student\n";
cin>>name;
cout<<"enter roll number of student\n";
cin>>roll_number;
cout<<"enter marks\n";
cin>>marks;
}

void display()
{
cout<<"the name of student is: "<<name<<endl;
cout<<"roll number of the student is: "<<roll_number<<endl;
cout<<"marks of the student is: "<<marks<<endl;
}
};
int main()
{
student s;
s.input();
s.display();

return 0;

}

