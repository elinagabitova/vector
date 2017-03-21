#include <iostream>

using namespace std;

сlass complex_t
{

private:

	double a;
	double b;

public:

	complex_t();

	complex_t(double x, double y);

	complex_t(const complex_t&copy);
	double a_() const;

	double b_() const;

	complex_t operator * (const complex_t& v) const;

	complex_t operator / (const complex_t& v) const;

	complex_t operator += (const complex_t& v); 

	complex_t operator -= (const complex_t& v) ;

	complex_t operator *= (const complex_t& v) ;

	complex_t operator /= (const complex_t& v) ;

	complex_t operator = (const complex_t& res);

	bool operator == (const complex_t& v) const;

	friend istream& operator >> (istream&in,complex_t& res);

	friend ostream& operator << (ostream&out,const complex_t& res);

};
