#include<iostream>
using namespace std;

 char before(char x){
	if(x=='A'){
		return 'Z';
	}else{
	if('A'<x && x<='Z'){
		return x-1;
	}else{
		return '0';
	}
	}


	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";

}