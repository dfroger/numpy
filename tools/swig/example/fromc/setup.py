#!/usr/bin/env python
from distutils.core import setup, Extension

a = Extension(
        '_a',
        sources = ['a.i','a.cpp','arrayobj.c'],
        swig_opts=["-c++"],
        )

setup (name = 'a',
       ext_modules = [a,],
       py_modules = ['a'],
       )

