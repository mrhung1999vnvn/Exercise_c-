#include<iostream>
#include<string>
using namespace std;

int test()
{
	for(int ascii_code = 0; ascii_code <= 256; ascii_code++)
	{
	cout << ascii_code << '\t' << static_cast<char>(ascii_code) << endl;
	}
}
int main()
{
	test();
}
