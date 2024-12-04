#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str1="helo,";
	string str2="bscho";
	string result=str1.append(str2);
	cout<<"concatenated string is"<<result;
	return 0;
}
