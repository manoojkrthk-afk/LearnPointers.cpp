#include <iostream>

using namespace std;

int multiplyby3(int& x) { return x * 3; };
void m2ultiplyby3(int& x) { x*= 3; };


int main()
{
    int y = 3;
    int* p = &y;

    cout << "\n value of y = " << y;
    cout << "\n address of y = " << &y;
    cout << "\n pointer to y = " << p;
    multiplyby3(y);
    cout << "\n multiplyby 3 = " << y;
    m2ultiplyby3(y);
    cout << "\n m2ultiplyby 3 = " << y;

	std::cin.get() ;
	return 0;
}