#include<iostream>
using namespace std;
int main()
{
// 5! 5*4*3*2*1=120
 int n;
 long factorial=1.0;
 cout<<"enter a positive integer:";
 cin>>n;
 if(n<0)
 cout<<"error! factorial of negative number doesnot exsist:";
 else{
 	for(int i=1;i<=n; i++){
 		factorial *=1;
	 }
	 cout<<"factorial of"<<n<<"="<<factorial;
 }
		return 0;
}