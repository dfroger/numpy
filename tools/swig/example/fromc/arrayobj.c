#include "arrayobj.h"
#include "stddef.h"
#include <stdlib.h>
#include <stdio.h>

ArrayObj* array_create(double* data) {
  ArrayObj* o = (ArrayObj*) malloc(sizeof(ArrayObj));
  o->data = (double*) data;
  o->refcount = 1;
  printf("* array_create: create ArrayObj with refcount 1\n");
  return o;
}

void array_decref(ArrayObj* o) {
    printf("* array_decref change refcount from %d to %d\n",
            o->refcount, o->refcount-1);
    o->refcount--;
    if ((o->refcount <= 0) && (o->data != NULL)) {
        printf("* array_decref: free memory\n");
        free(o->data);
    }
}

void array_incref(ArrayObj* o) {
    printf("* array_incref change refcount from %d to %d\n",
            o->refcount, o->refcount+1);
    o->refcount++;
}

