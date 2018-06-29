# OperatorOverload

// It is a simple example and  I think everyone can understand.

#include <iostream>

using namespace std;

class Complex
{
public:
	Complex()
	{
		real = 1;
		imag = 1;
	}
	Complex(int new_real, int new_imag)
	{
		real = new_real;
		imag = new_imag;
	}
	friend Complex operator+(Complex &a, Complex &b);

	void printComplex()
	{
		cout << real << "+" << imag << "i" << endl;
	}

private:
	int real;
	int imag;
};

Complex operator+(Complex &a, Complex &b)
{
	Complex temp;
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;
	return temp;
}

int main()
{
	Complex x(1,2), y(3,4);
	Complex c = x + y;
	c.printComplex();
	system("pause");
	return 0;
}
