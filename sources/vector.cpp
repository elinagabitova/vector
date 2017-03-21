#include "vector.hpp"

complex_t::complex_t() : a(0.0), b(0.0)

{}

complex_t::complex_t(double x, double y) : a(x), b(y)

{}

complex_t::complex_t(const complex_t&copy)

{

	a = copy.a;

	b = copy.b;

}

double complex_t::a_() const

{
	return a;
}
double complex_t::b_() const

{
  return b;
}

bool complex_t::operator == (const complex_t& v) const

{
	if ((a == v.a) && (b == v.b))
		return true;
}


complex_t complex_t::operator = (const complex_t& res)

{

	if (this != &res) 

	{

	a = res.a;

	b = res.b;

	return *this;

	}



}
istream& operator >> (istream&in, complex_t& res) 

{

	cout << "enter real part:" << endl;

	in >> res.a;

	cout << "enter imaginary part:" << endl;
	in >> res.b;
	cout << endl;
	return in;

}



ostream& operator << (ostream&out,const complex_t& res) 

{

	if (res.b < 0)

	{
    out << res.a << res.b << "i" << endl;
	}

	else

		out << res.a << "+" << res.b << "i" << endl;

	return out;

}

complex_t complex_t::operator * (const complex_t& v) const

{

	return complex_t(a*v.a - b*v.b, a*v.b + v.a*b);

}



complex_t complex_t::operator / (const complex_t& v) const

{

	return complex_t((a*v.a + b*v.b) / (v.a*v.a + v.b*v.b), (v.a*b - a*v.b) / (v.a*v.a + v.b*v.b));

}



complex_t complex_t::operator += (const complex_t& v) 

{

	a += v.a;

	b += v.b;

	return *this;

}



complex_t complex_t::operator -= (const complex_t& v) 

{

	a -= v.a;

	b -= v.b;

	return *this;

}

complex_t complex_t::operator /= (const complex_t& v) 

{

	float a2 = (a*v.a + b*v.b) / (v.a*v.a + v.b*v.b);

	b = (v.a*b - a*v.b) / (v.a*v.a + v.b*v.b);

	a = a2;

	return *this;

}



complex_t complex_t::operator *= (const complex_t& v) 

{

	float a2 = a*v.a - b*v.b;

	b = a*v.b + v.a*b;

	a = a2;

	return *this;

}
