#include <iostream>

using namespace std;
//#define MULT(x) x * x * 2

int sum(int a, int b)
{
	return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	//int result = MULT(2+1);
	
	//std::cout << "HelloWorld";

	//std::cout << 4 << std::endl;
	cout << sizeof(short) << std::endl;
	cout << sizeof(char) << std::endl;
	cout << sizeof(int) << std::endl;
	cout << sizeof(unsigned int) << std::endl;
	cout << sizeof(float) << std::endl;
	cout << sizeof(double) << std::endl;
	cout << sizeof(long) << std::endl;
	cout << sizeof(long long) << std::endl;
	cout << sizeof(int*) << std::endl;

	int x = sizeof(int);
	int y = 0;
	int z =1;
	int res = x+y;
	int res2 = sum (x, y, z);
	std::cout << "res: " << res << '\n';
	std::cout << sum (x, y) << endl;
	cout << "xyz: " << sum (x, y, z) << '\n';


	system ("pause");
	return 0;
}