#include <iostream>
#include <string>
using namespace std;

class variables {
	public:
		string txt_inp;
		string txt_op;
		string txt_result;
		int n1;
		char op;
		int n2;
};

int main() {
	variables var;

	var.txt_inp = "Type : ";
	var.txt_op = "(+, -, *, /) : ";
	var.txt_result = "Result : ";

	cout << var.txt_inp;
	cin >> var.n1;

	cout << var.txt_op;
	cin >> var.op;

	cout << var.txt_inp;
	cin >> var.n2;

	switch (var.op) {
		case '+':
			cout << var.txt_result << var.n1 + var.n2 << endl;
			break;

		case '-':
			cout << var.txt_result << var.n1 - var.n2 << endl;
			break;

		case '*':
			cout << var.txt_result << var.n1 * var.n2 << endl;
			break;

		case '/':
			cout << var.txt_result << var.n1 / var.n2 << endl;
			break;
	}
	
	return 0;
}
