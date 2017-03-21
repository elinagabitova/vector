#include <сomplex_t.hpp>

#include <catch.hpp>

SCENARIO("constructor")

{

	complex_t Complex;

	REQUIRE(Complex.a_() == 0);

	REQUIRE(Complex.b_() == 0);

}



SCENARIO("par constructor")

{

	complex_t Complex(1, 2);

	REQUIRE(Complex.a_() == 1);

	REQUIRE(Complex.b_() == 2);

}



SCENARIO("copy constructor")

{

	complex_t Complex(1, 2);

	complex_t copy(Complex);

	REQUIRE(copy.a_() == 1);

	REQUIRE(copy.b_() == 2);

}



SCENARIO("operator *")

{

	complex_t v1(7, 6);

	complex_t v2(5, 4);

	complex_t v3(11, 58);

	REQUIRE((v1*v2) == v3);

}



SCENARIO("operator /")

{

	complex_t v1(4, 5);

	complex_t v2(4, 5);

	complex_t v3(1, 0);

v	REQUIRE((v1 / v2) == v3);

}



SCENARIO("operator +=")

{

	complex_t v1(11, 1);

	complex_t v2(8, 3);

	complex_t v3(19, 4);

	REQUIRE((v1 += v2) == v3);

}



SCENARIO("operator -=")

{

	complex_t v1(6, 10);

	complex_t v2(3, 6);

	complex_t v3(3, 4);

	REQUIRE((v1 -= v2) == v3);

}



SCENARIO("operator *=")

{

	complex_t v1(7, 6);

	complex_t v2(5, 4);

	complex_t v3(11, 58);

	REQUIRE((v1 *= v2) == v3);

}



SCENARIO("operator /=")

{

	complex_t v1(2, 1);

	complex_t v2(2, 1);

	complex_t v3(1, 0);

	REQUIRE((v1 /= v2) == v3);

}



SCENARIO("operator =")

{

	complex_t v1(5, 7);

	complex_t v2 = v1;

	REQUIRE(v2 == v1);

}



SCENARIO("operator ==")

{

	complex_t v1(2, 5);
	complex_t v2(2, 5);

	REQUIRE(v1 == v2);

}
