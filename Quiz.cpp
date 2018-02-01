#include <iostream>
using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	bool next = true;
	char action = 'c';
	
	while(next){

		cout << "What is the first you'd like to calculate?: \n";
		cin >> num1;

		cout << "What is the second number you'd like to calculate?: \n";
		cin >> num2;

		cout << "Type + or * for what you want to do\n";
		cin >> action;

		if(action == '+'){
			cout << "Your sum is " << num1 + num2 << endl;
		}else if (action == '*'){
			cout << "Your product is " << num1 * num2 << endl;
		}
	}
	
	//INCOMPLETE 
	return 0;
}