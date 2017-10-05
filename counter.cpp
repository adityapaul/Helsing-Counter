#include <iostream>
#include <fstream>

using namespace std;

void write(int ints[], ofstream &stuff);

int main(){
	int tells[25];
	int i = 1;
	for (int i = 0; i < 25; i++)
		tells[i]=0;
	while(i > 0){
		cout << "What did he do? Enter the corresponding number: ";
		cin >> i;
		tells[i]++; 
		cout << " " << tells[i] << endl;
	}
	ofstream helsingtoday("/Users/aditya/Documents/helsing.csv", std::ofstream::out);
	write(tells, helsingtoday);
}

void write(int ints[], ofstream &stuff){
	for (int i = 0; i < 25; i++){
		stuff<<ints[i] << ",";
	}
		stuff << ("\n");
	return;
}
