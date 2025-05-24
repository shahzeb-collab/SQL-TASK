#include<iostream>
using namespace std;
int main(){
int acount_number;
cout<<"Enter the Acount Number is ";
cin>>acount_number;
float mix_blance, current_blance;
cout<<"Enter the Mix Blance is  ";
cin>>mix_blance;
cout<<"Enter the current Blance is ";
cin>>current_blance;
char type;
cout<<"enter the the account type is ";
cin>>type;
if(type=='S'|| type=='s'){
	cout<<"you enter saving account ";
	
	
}
else if(type=='c'||type=='C'){
	cout<<"You enter checking account ";
	
}
else{
	cout<<"Invalied option ";
}
if(mix_blance>current_blance){
	 if(type=='s'||type=='S'){
	 	current_blance=current_blance-10.00;
	 	cout<<"your cut saving account 10.00";
		
	}
	else if(type=='c'||type=='C'){
		current_blance=current_blance-25.00;
		cout<<"Your cut 25.00 checking accout";
	}
}else{
	if(type=='C'||type=='c'){
		current_blance=current_blance-(current_blance*4.00);
	}
	else{
		(type=='S'||type=='s');
		current_blance=current_blance-(current_blance *3.00);
		
	}
}
cout<<"total blance is "<<current_blance<<endl;





return 0;

}

