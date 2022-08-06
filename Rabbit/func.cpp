#include <iostream>
using namespace std;

constexpr auto MAX_MEM = 1000;
extern int* ip;

void pr() {
	cout << "PRIVET!!!" << endl;
}
void init_mem(int num) {

	cout << "Clear memory.. (value: " << num << ")\n";
	int i = MAX_MEM;
	while (i) {
		i--;
		*ip = num; // заполняем память значением
		ip++;
	}
	cout << "OK.\n";
}
void dump() {
	cout << "Dumping memory..\n";
	cout << "**************************************************\n";
	int i = 0;
	while (i < MAX_MEM) {
		cout << *ip << ":";
		ip++;
		i++;
		if (i % 50 == 0) { cout << endl; }

	}
	cout << "**************************************************\n";
	cout << "OK.\n";
}