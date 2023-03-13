#include<iostream>
using namespace std;
// structure
struct identify{
	string name;
	int number;
};
// data collection function
void collection(int n, identify children[]){
	cout<<"The data of people store here "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Name:";cin>>children[i].name;
		cout<<"ID-Card No: ";cin>>children[i].number;
	}
	cout<<endl;
	return;
}
// printing results
void print(int n, identify children[]){
	cout<<"Results are here"<<endl;
	for(int i=0;i<n;i++){
		cout<<children[i].name<<endl;
		cout<<children[i].number<<endl;
	}
	return;
}
//main function
int main(){
	identify people [3];
	int n;
	cout<<"How many people want to save the data: ";
	cin>>n;
	collection(n,people);
	print(n,people);
	return 0;
}
