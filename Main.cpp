#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream FirstFile("Test.txt");
	FirstFile << "This is test file creating and writing to ...";
	return 0;
}