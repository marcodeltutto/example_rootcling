#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <iostream>
#include <vector>

struct _object;
typedef _object PyObject;

#ifndef __CINT__
#include "Python.h"
#include "numpy/arrayobject.h"
#endif

namespace example {

  class ExampleClass{

  public:

    /// Default constructor
    ExampleClass();

    /// Default destructor
    virtual ~ExampleClass();

    // Function to get the array of data
    PyObject * getArray();

  };
} // example

#endif

