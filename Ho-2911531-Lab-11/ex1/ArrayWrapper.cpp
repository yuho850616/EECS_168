#include<string>
#include"ArrayWrapper.h"

ArrayWrapper::ArrayWrapper(int size) throw(std::runtime_error)
{
    if(size<0)
    {
        throw std::runtime_error("Size is not valid. Size needs to bigger than zero");
    }
    m_arr=new double [size];
    m_size=size;
}

ArrayWrapper::ArrayWrapper(const ArrayWrapper& original)
{
    m_arr=new double[original.getSize()];
    m_size=original.getSize();
    for(int i=0; i<m_size; i++)
    {
        m_arr[i]=original.m_arr[i];
    }
}
int ArrayWrapper::getSize()const
{
    return(m_size);
}

ArrayWrapper& ArrayWrapper::operator=(const ArrayWrapper& original)
{
    delete[] m_arr;
    m_arr=new double[original.getSize()];
    m_size=original.getSize();
    for(int i=0;i<m_size; i++)
    {
        m_arr[i]=original.m_arr[i];
    }
    return(*this);
}

void ArrayWrapper::setEntry(int index, double value) throw (std::runtime_error)
{
    if(index<0||index>m_size-1)
    {
        throw(std::runtime_error("Index is not valid. It should bigger or equal to zero and smaller than size"));
    }
    m_arr[index]=value;
}

double ArrayWrapper::getEntry(int index) throw (std::runtime_error)
{
    if(index<0||index>m_size-1)
    {
        throw(std::runtime_error("Index is not valid. It should bigger or equal to zero and smaller than size"));
    }
    return(m_arr[index]);
}

ArrayWrapper::~ArrayWrapper()
{
    delete[] m_arr;
}
