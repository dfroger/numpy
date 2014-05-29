#ifndef A_HPP_INCLUDED
#define A_HPP_INCLUDED

#include <stdlib.h>
#include <iostream>


extern "C"{
#include "arrayobj.h"
}

    //PyObject* cap = PyCapsule_New((void*)(*$1), SWIGPY_CAPSULE_NAME, free_cap);

using namespace std;

class A{
  public:
    A();
    ~A();
    double* get_data();
    int get_size();
    void change_data();
    void get_array(ArrayObj** o, int* size);
  private:
    double* m_data;
    ArrayObj* m_arrayobj;
    int m_size;
};

#endif
