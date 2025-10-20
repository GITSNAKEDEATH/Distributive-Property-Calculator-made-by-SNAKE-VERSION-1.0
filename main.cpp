#include <iostream>
using namespace std;

//  VERSION:1.0 MADE BY SNAKE    distribution property calculator      //

int main() {
	cout << "the format for this calculator is (a+-b) * (x+-y) \n \n";
	double a;
	double b;
	double x;
	double y;
	char operation1;
	char operation2;
	cout << "Select operator 1 (+) or (-) \n";
	cin >> operation1;
	cout << "Select operator 2 (+) or (-) \n";
	cin >> operation2;
	
	if ((operation1 == '+') && (operation2 == '+')){ // assumption 1
	cout << "Select a \n";
	cin >> a;
	cout << "Select b \n";
	cin >> b;
	cout << "Select x \n";
	cin >> x;
	cout << "Select y \n";
	cin >> y;
	cout << "The answer is " << (a + b) * (x + y);}
	
	else if ((operation1 == '+') && (operation2 == '-')){ // assumption 2
	cout << "Select a \n";
	cin >> a;
	cout << "Select b \n";
	cin >> b;
	cout << "Select x \n";
	cin >> x;
	cout << "Select y \n";
	cin >> y;
	cout << "The answer is " << (a + b) * (x - y);}
	
	else if ((operation1 == '-') && (operation2 == '-')){ // assumption 3
	cout << "Select a \n";
	cin >> a;
	cout << "Select b \n";
	cin >> b;
	cout << "Select x \n";
	cin >> x;
	cout << "Select y \n";
	cin >> y;
	cout << "The answer is " << (a - b) * (x - y);}
	
	else if ((operation1 == '-') && (operation2 == '+')){ // assumption 4
	cout << "Select a \n";
	cin >> a;
	cout << "Select b \n";
	cin >> b;
	cout << "Select x \n";
	cin >> x;
	cout << "Select y \n";
	cin >> y;
	cout << "The answer is " << (a - b) * (x + y);}
	
	else 
	cout << "Operators are invalid !";
	return 0;
}
