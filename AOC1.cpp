#include <iostream>
#include <vector>
#include <sstream>
#include <fstream> // header for ifstream
#include <string>
using namespace std;
using std::cout;

struct Sort {
	std::vector<string> numsA;
	std::vector<int> numsB;
};


void loadNums(Sort &next);
void convertNums(Sort &next);
int findNumber1(Sort &next);
int findNumber2(Sort& next);

int main()
{
	Sort next;
	loadNums(next);
	convertNums(next);
	cout << "Part one: " << findNumber1(next) << endl;
	cout << "Part two: " << findNumber2(next);

}

void loadNums(Sort &next)
{	
	ifstream infile("input.txt");
	string in;

	if (infile.good() == false) {
		cout << "Error!" << endl;
		exit(1);
	}

	while (true) {
		getline(infile, in, '\n'); 
		if (infile.eof()) break;
		next.numsA.push_back(in);
	}

}

void convertNums(Sort &next) 
{
	int G;
	for (int i = 0; i < next.numsA.size(); i++) {
		G = stoi(next.numsA.at(i));
		next.numsB.push_back(G);
	}
}

int findNumber1(Sort &next)
{
	int n1 = 0;
	int n2 = 0;
	int res = 0;
	for (int i = 0; i < next.numsB.size(); i++) {
		n1 = next.numsB.at(i);
		for (int j = 1; j < next.numsB.size(); j++) {
			n2 = next.numsB.at(j);
			if (n1 + n2 == 2020) {
				//cout << n1 << " " << n2 << endl;
				res = n1 * n2;

			}
 		}
	}
	
	return res;
}

int findNumber2(Sort& next)
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int res = 0;
	for (int i = 0; i < next.numsB.size(); i++) {
		n1 = next.numsB.at(i);
		for (int j = 1; j < next.numsB.size(); j++) {
			n2 = next.numsB.at(j);
			for (int k = 2; k < next.numsB.size(); k++) {
				n3 = next.numsB.at(k);
				if (n1 + n2 + n3 == 2020) {
					res = n1 * n2 * n3;

				}
			}
		}
	}

	return res;
}