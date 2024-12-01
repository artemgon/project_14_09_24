#include "libs.h"

int gcd(int a, int b)
{
	while (b)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

class Fraction
{
private:
	int numerator, denominator;
public:
	Fraction(int num, int denom) : numerator(num), denominator(denom)
	{
		if (denom == 0) {
			cout << "Error... ";
			exit(1);
		}
		reduce();
	}
	void reduce()
	{
		int g = gcd(abs(numerator), abs(denominator));
		numerator /= g;
		denominator /= g;
		if (denominator < 0)
		{
			numerator = -numerator;
			denominator = -denominator;
		}
	}
	Fraction()
	{
		numerator = 0;
		denominator = 1;
	}
	void setFunc(int u_num, int u_denom)
	{
		numerator = u_num;
		denominator = u_denom;
	}
	void setN(const int& u_num)
	{
		numerator = u_num;
	}
	void setD(const int& u_denom)
	{
		denominator = u_denom;
	}
	int getN() const
	{
		return numerator;
	}
	int getD() const
	{
		return denominator;
	}
	Fraction static addFunc(const Fraction& f1, const Fraction& f2)
	{
		return Fraction(f1.numerator * f2.denominator +
			f2.numerator * f1.denominator, f1.denominator *
			f2.denominator);
	}
	Fraction static subFunc(const Fraction& f1, const Fraction& f2)
	{
		return Fraction(f1.numerator * f2.denominator -
			f2.numerator * f1.denominator,
			f1.denominator * f2.denominator);
	}
	Fraction static multiplyFunc(const Fraction& f1, const Fraction& f2) {
		return Fraction(f1.numerator * f2.numerator,
			f1.denominator * f2.denominator);
	}
	Fraction static divideFunc(const Fraction& f1, const Fraction& f2) {
		if (f2.numerator == 0)
		{
			cout << "Error occurred... " << endl;
			exit(1);
		}
		return Fraction(f1.numerator * f2.denominator,
			f1.denominator * f2.numerator);
	}
	void printFunc() const
	{
		cout << numerator << "/" << denominator << endl;
	}
};