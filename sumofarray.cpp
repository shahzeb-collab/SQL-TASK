#include<iostream>
using namespace std;
int main(){
int arry1[2][3];
int arry2[2][3];
int sum;
cout<<"enter the number of first_Array :\n ";
for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
		cin>>arry1[i][j];
		
	}
	cout<<endl;
}
cout<<"enter the number of second_array :\n";
for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
	cin>>arry2[i][j];
		
	}
	cout<<endl;
}
cout<<"Please watch the sum of two array \n";
for(int i=0;i<2;i++){
	for(int j=0;j<3;j++){
		sum=arry1[i][j]+arry2[i][j];
		cout<<sum<<" ";
	}
	cout<<endl;
}







return 0;

}

