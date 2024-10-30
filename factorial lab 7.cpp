#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter a number/n:";
cin>>n;
int i=1;
long factorial=1.0;
do{
	factorial *=i;
	i++;
	
}
while(i<=n);
cout<<"factorial of"<<n<<"="<<factorial;

		return 0;
}
