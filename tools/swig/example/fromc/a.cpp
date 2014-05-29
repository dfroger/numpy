#include "a.hpp"

A::A()
{
  m_size = 5;
  m_data = (double*) malloc(m_size*sizeof(double));
  m_data[0] = 1.;
  m_data[1] = 2.;
  m_data[2] = 3.;
  m_data[3] = 4.;
  m_data[4] = 5.;
  m_arrayobj = array_create(m_data);
}

A::~A()
{
    cout << "A desctructor" << endl;
    array_decref(m_arrayobj);
}

void A::get_array(ArrayObj** o, int* size)
{
    *o = m_arrayobj;
    *size = m_size;
}

double* A::get_data()
{
    return m_data;
}

int A::get_size()
{
    return m_size;
}

void A::change_data()
{
  m_data[0] = 5.;
  m_data[1] = 6.;
  m_data[2] = 7.;
  m_data[3] = 8.;
  m_data[4] = 9.;
}
