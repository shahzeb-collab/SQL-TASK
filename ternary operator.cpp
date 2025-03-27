#include<iostream>
using namespace std;
int main(){
int a,b;
char ch;
cout<<"enter the number is ";
cin>>a;
cout<<"enter the second number is ";
cin>>b;
cout<<"mathematical operation use ";
cin>>ch;
switch(ch){
	case '+':
		cout<<"the sum of two number is "<<a+b<<endl;
		break;
			case '-':
		cout<<"the subtract of two number is "<<a-b<<endl;
		break;
			case '*':
		cout<<"the multiply of two number is "<<a*b<<endl;
		break;
			case '/':
		cout<<"the division of two number is "<<a/b<<endl;
		break;
		default :
			cout<<"enter valied number ";
			break;
}






return 0;

}

