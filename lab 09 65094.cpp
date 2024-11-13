#include<iostream>
using namespace std;
int main(){
	int rows,cols,n;
	
	cout<<"enter the number of rows:";
	cin>>rows;
	cout<<"enter the number of cols:";
	cin>>cols;
	int array[rows] [cols];
	cout<<"enter element of the array:\n";
	for(int i=0;i<rows;i++){
		for (int j=0 ;j<cols; j++){
			cout<<"element["<<i<<"]["<<j<<"]:";
			cin>>array[i][j];
		}
	}
	cout<<"\n of the 2D array is:\n";
	for(int i=0;i<rows;i++){
	for (int j=0; j<cols; j++){
			
			cout<<array[i][j]<<" ";
			
			
		}
		
		cout<<endl;
		int sum=0;
		int totalelement;
		sum=sum+array[rows][cols];
		cout<<"sum is "	<<sum<<endl;
		float avg;
		avg=sum/array[rows][cols]
		cout<<"avg is"<<avg<<endl;
	}
	
return 0;	
}
