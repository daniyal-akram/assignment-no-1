#include<iostream>
using namespace std;
void num()
{int a,b,choice;
int yes,no;
  cout<<"1-Add\n2-Sub\n3-Mul\n4-Div\n5-Square root\n6-power"<<endl;
  cout<<"Entre the first Number=";
  cin>>a;
  cout<<"Entre the Second Number=";
  cin>>b;
  cout<<"Enter Your Choice=";
  cin>>choice;
  cout<<"Your Expected Ans :";
  if(choice==1){
  	cout<<a+b;
  }else if(choice==2){
  	cout<<a-b;
  }else if(choice==3)
  { cout<<a*b;
  }else if(choice==4){
  	cout<<a/b;	
  }else if(choice==5){
  	cout<<a;
  }cout<<"\nDo you want to continue.....\n1-yes\n0-no"<<endl;
  cin>>choice;
  if(choice==1){
  	
  }
  	
  }
 
int main()
{  
   num ();
  num();
   
  }
  
   
   

