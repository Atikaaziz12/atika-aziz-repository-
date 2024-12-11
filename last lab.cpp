#include<iostream>

#include<fstream>
using namespace std;
int main(){
	ofstream File("atikafile.txt");
	File<<"My name is atika";
	File.close();
	string Text;
	ifstream readFile("atikafile.txt");
	while(getline(readFile,Text)){
		cout<<Text;
		
	}
	readFile.close();
}
