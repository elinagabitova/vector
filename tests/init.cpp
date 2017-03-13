#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}
SCENARIO ("vector with pam", "[init]")
{
	vector_t v(3);
	REQUIRE(vector.size() == 3);
	REQUIRE(vector.capacity() == 3);
	
	for (unsinged int i = 0; i<v.size(); ++i)
	{
		REQUIRE(v[i] == 0);
	}
}
