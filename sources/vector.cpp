#include "vector.hpp"

vector_t::vector_t() noexpect

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
auto vector_t:: operator=(const vector_t& other) -> vector_t&
{
if (this!= &other)
	{
	delete [] ptr_;
	size_ = other.size_;
	capacity_ = other.capacity_;
	ptr_ = new int [capacity_];
	for (int i = 0; i<size;i++)
		{
			ptr_[i] = other.ptr_[i];
		}
	}
}
	
    ~vector_t() noexcept
    {
	    size_ = 0;
	    capacity_ = 0;
	    delete []ptr_;
    }
	
    auto size() const noexcept -> unsigned int
    {
	    return size_;
    }
    auto capacity() const noexcept -> unsigned int
    {
	    return capacity_;
    }
	
    auto push_back(int value) -> void
    {
	    if (capacity ==  0)
	    {
		    delete [] ptr_;
		    capacity = 1; 
		    ptr = new int [capacity_];
	    }
	    else if (capacity_ == size_)
	    {
		    capacity_ = capacity_ + 10;
		    int ptr2_ = new int [capacity];
		    
		    for (unsigned int i = 0; i< size; i++)
			    ptr2_[i] = ptr_[i]; 
		    delete [] ptr;
		    ptr = ptr2_;
	    }
	    ptr_[size_] = value];
		
    }
    auto operator[](unsigned int index) const noexcept -> int
    {
	    if (index >= size_)
	    {
		    cout << "index isnt in range";
	    }
	    return ptr_[index];
    }
