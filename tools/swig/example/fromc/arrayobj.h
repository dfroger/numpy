#ifndef ARRAYOBJ_H_INCLUDED
#define ARRAYOBJ_H_INCLUDED

typedef struct ArrayObj {
    void* data;
    int refcount;
} ArrayObj;

ArrayObj* array_create(double* data);

void array_decref(ArrayObj* o);

void array_incref(ArrayObj* o);


#endif
