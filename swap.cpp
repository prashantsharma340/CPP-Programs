#include<iostream>
using namespace std;
void swap(int,int);
int main()
 {
   int a,b;
   cout<<"Enter 1st number a:- ";
   cin>>a;
   cout<<"Enter 2nd number b:- ";
   cin>>b;
   swap(a,b);
   return 0;
 }

void swap(int a,int b)
  {
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<endl<<"a after swapping:-"<<a<<endl<<"b after swapping:-"<<b;
  }

