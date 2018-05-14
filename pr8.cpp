#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ofstream out;
	
	string input;
	
	cout << "Enter text >> ";
	cin >> input;
	
	out.open("output.txt");
	
	out << input;
	
	out.close();
	
	return 0;
}