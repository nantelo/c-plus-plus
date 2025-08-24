#include<iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
using namespace std;
class calculator{
	public:
	int n,n1,x;
	char ch;
	
	
	void display1(){
		cout<<"\n enter the number :";
		cin>>n;
		cout<<"\n enter the second number :";
		cin>>n1;
		cout<<" \n choose  add(+) sub(-) multiply (*) divide (/) :";
		cin>>ch;
		switch(ch){
			case '+': cout<<" |solution|:"<<(n + n1);
			break;
			case '-': cout<<" |solution|:"<<n-n1;
			break;
			case '*': cout<<" |solution|:"<<n*n1;
			break;
			case '/': cout<<" |solution|:"<<n/n1;
			break;
			default :cout<<"invalid";
		}
		cout<<"\n for exit click any number..";
		cin>>x;
		
	}
	void display2(){
		cout<<"\n enter to check leap year : ";
		cin>>n;
		if(n%4==0&&n%100==0&&n%400==0){
			cout<<n<<"  is a leap year";
		}
		else{
			cout<<n<<" is not a leap year";
		}
		cout<<"\n for exit click any number";
		cin>>x;
		
	}
	
};
int main(){
	calculator c1;
	string m;
  int err,a;
  err=a=0;
  while(err==0){
  	cout<<"\n \n \n \t ||WELL COME TO THE CHANNEL ||";
  	 cout<<"\n \n \t Please enter 'START' to proceed ...";
  	 cin>>m;
  	 if(m!="START"||"start")
  	 	err++;
  	 	
  	 	else
  	 	system("cls");
	   
	   
  }
  while(a==0){
  	
  	system("cls");
  	int c;
  	
  	cout<<"\n\t WELLCOME CHOOSE AN OPTION FROM THE BILOW ";
  	cout<<" \n \n \t \t 1)CALCULATOR | ";
  	cout<<"\n \t\t 2)LEAP YEAR CHECKER |";
  	cout<<"\n \t ENTER YOUR CHOICE 1 OR 2 :";
  	cin>>c;
  	switch(c){
  		case 1:cout<<"|CALCULATOR|";
  		c1.display1();
  		break;
  		case 2:cout<<"|LEAP YEAR CHECKER |";
  		c1.display2();
  		break;
  		
  		
	  }
  	
  }
	
}
