#include<iostream>
using namespace std;

void passByValue(int num) {
	num=num+10;
	cout<<"inside function(pass by value)"<<num<<endl;
}
	void passmultiplicationvalue(int num){
	
	num=num*10;
	cout<<"after multiplication="<<num<<endl;
}
	void passsubstractionvalue(int num){
	
	num=num-10;
	cout<<"after substraction="<<num<<endl;

}
int main()
{
	int number=5;
	cout<<"before function call:"<<number<<endl;
	passByValue(number);
	passmultiplicationvalue(number);
	passsubstractionvalue(number);
	
	return 0;
}
