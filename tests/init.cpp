#include <vector.hpp>
#include <catch.hpp>

SCENARIO("constructor")

{

	cvector_t vector;

	REQUIRE(vector.size() = 0);

	REQUIRE(vector.capacity() = 0);

}



SCENARIO("par constructor")

{
	vector_t vector (1);

	REQUIRE(vector.size() = 1);

	REQUIRE(vector.capacity() = 1);
	
	for (unsinged int i = 0; i < vector.size(); i++)
	{
		REQUIRE (vector[i] ==0); 
	}
}



SCENARIO(" object ")
{
	vector_t a;
	REQUIRE(a.size_() == 0);	
	REQUIRE (a.capacity_() == 0);
	
	a.puch.back(1);
	a.push_back(2);
	a.push_back(3);
	
	REQUIRE (a.size_() == 3);
	REQUIRE (a.capacity_() == 4);
	
	vector_t a[b];
	
	REQUIRE (a.size_() == 3);
	REQUIRE (a.capacity_() == 4);
	
	for (unsinged int i = 0; i < vector.size(); i++)
		a[i] == b[i];
	
}

SCENARIO("push")
{
	vector_t vector(3) ;
	REQUIRE(vector.size_() == 3);	
	REQUIRE (vector.capacity_() == 3);
	
	vector.push_back(4);
		
	REQUIRE (vector.size_() == 3);
	REQUIRE (vector.capacity_() == 13);
	
	
}

