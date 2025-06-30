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

		int calculate() {
			switch (op) {
				case '+': return n1 + n2;
				case '-': return n1 - n2;
				case '*': return n1 * n2;
				case '/': return n1 / n2;
				default: return 0;
			}
		}
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

	int result = var.calculate();

	cout << var.txt_result << result << endl;
	
	return 0;
}
