%module a

%{
#define SWIG_FILE_WITH_INIT
#include "a.hpp"
%}

%include "../../numpy.i"

%init %{
    import_array(); 
%}


%apply (double* ARGOUT_ARRAY1, int DIM1) {(double* data, int n)}

%import "arrayobj.h"
%include "a.hpp"
