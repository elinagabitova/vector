#include "vector.hpp"

vector_t::vector_t()

{
size_ = 0;
capacity_ = 0;
ptr_ = new int [capacity_];
}

vector_t::vector_t(unsigned int size)
{
	size_ = size;
	capacity_ = size;
	ptr_= new int [capacity_];
}


vector_t::vector_t() (const vector_t& other)

{
	size_ = other.size;
	capacity_ = other.capacity;
	ptr_= new int [capacity_];
	for (int i = 0; i<size;i++)
	{
		ptr_[i] = other.ptr_[i];
	}
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
