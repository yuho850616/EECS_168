#ifndef ARRAY_WRAPPER_H
#define ARRAY_WRAPPER_H
#include<stdexcept>
class ArrayWrapper
{
    public:
	ArrayWrapper(int size) throw(std::runtime_error);
	ArrayWrapper(const ArrayWrapper& original);
	ArrayWrapper& operator= (const ArrayWrapper& original);
	~ArrayWrapper();
	int getSize() const;
	void setEntry(int index, double value) throw (std::runtime_error);
	double getEntry(int index) throw (std::runtime_error);
    
    private:
    double* m_arr;
    int m_size;
};
#endif
