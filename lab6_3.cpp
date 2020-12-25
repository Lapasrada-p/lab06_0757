#include<iostream>
using namespace std;

char before(char x){
	char a='A';
	char b ='Z';
	char c  ='0';
	if (x<a || x>b){
		return c;
	}
	if (x==a){
		return b;
	}else{
		x=x-1;
		return x;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
