#ifndef EXAMPLECLASS_CXX
#define EXAMPLECLASS_CXX

#include "example.h"

namespace example {

ExampleClass::ExampleClass() {
  Py_Initialize();
  import_array();
}

ExampleClass::~ExampleClass() {

}

PyObject * ExampleClass::getArray() {

  PyObject * returnNull = nullptr;
  return returnNull;

}

} // example


#endif
