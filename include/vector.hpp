#include <iostream>

class vector_t 
{
private:
    unsigned int size_;
    unsigned int capacity_;
    int* ptr_;
    void swap(vector_t& other)
public:
    vector_t()
    {
    };
    vector_t(unsigned int size)
        {
			cout << "enter the size of matrix";
			cin >> size_;
		};
    vector_t(const vector_t& other)
       {
			size_ = other.size_;
			capacity = other.capacity;
			ptr = new int [capacity];

			for (int i = 0; i < size_; i++)
			{
				ptr[i] = new int [other.capacity];
			}
		}
 
    vector& operator=(const vector_t& other)		
        if (this != &other)
			{

				for (int i = 0; i < size_; i++)
				{
					delete[]ptr;
					size_ = other.size_;
					capacity = other.capacity;

					ptr = new int*[capacity];

					for (int i = 0; i < capacity; i++)
					{
						ptr[i] = new int[capacity];
					}
				}
				ptr[capacity] = other.ptr[capacity];
			}
			return *this;
        }
    ~vector_t() 
    {
        
    };
    unsigned int size() const 
    {
        return size_;
    }
    unsigned int capacity() const
    {
        return capacity_;
    }    
    void push_back(int value) 
    {
	cout << " enter increasing number";
        cin >> value;
    }
    int operator[](unsigned int index) const 
    {
	int z = ptr[index];
	    return z;
    }
};
int main()
{
	vector_t first = vector_t (3);
	
	
	
	
