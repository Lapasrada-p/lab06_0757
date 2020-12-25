#include <iostream>
#include <string>
using namespace std;
string before(char text){
	char new_text;
	char x='A';
	char y ='Z';
	if (text<x || text>y){
		return 0;
	}else{
		new_text=text-1;
		cout<<new_text;
		return 0;
	}
}

int  maim(){
	cout << before('A');
	cout << before('B');
	return 0;
}
