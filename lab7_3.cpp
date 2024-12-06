#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
	char before(char x);
    if('A'<x && x<='Z'){
        x--; 
    }
    else if(x=='A'){
        x='Z';
    }
    else{
        return '0';
    }
    return x;

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
