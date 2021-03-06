# CPP Project Template

[![Build Status](https://travis-ci.org/kiat/CPPProjectTemplate.svg?branch=master)](https://travis-ci.org/kiat/CPPProjectTemplate)


## Build and Run

We use CMake to build C++ code.


* Use one of the compiler [**LLvm**](https://llvm.org/) -  [**clang**](https://clang.llvm.org/),
'Gnu Compiler Collection' [**gcc**](https://gcc.gnu.org/onlinedocs/gcc/) or 'Gnu C Compiler' g++, and enable warning flags while compiling your code



# Use Share Pointers

It is better to use shared pointers to avoid any possible memory leaks. 

Follow the following simple ruls. 

## 1. **A type for the shared_ptr**

For each Class define a type for the shared_ptr like the following

```c++

#include <memory>

class Auto;
typedef std::shared_ptr<Auto> AutoPtr;

```

## 2. **No use of new() operator, no use of delete()**

To instatiate an object of the specifc class 



```c++

auto  myAuto  =  std::make_shared <Auto>();

```


When the object is out of reference then it will be removed from memory. 
It is done by reference counting. 


## 3. **No C++ raw pointers**


There is no need to use raw points. 

You can always use the shared_ptr that you defined like **"AutoPtr"**. 

If there is a real need to use c++ raw pointers you can access it as well.  



## 4. **Keep the project structure.**
Each component should be in a separate folder and separate namespace. 

## 5. **Include headers without hardcoded path like - Not like \#include "../../../Blabla.h"**

Do not include the headers with the hard path on the project structure because you may want to move the header files later. 
Header files should be included without directory structure. See the project. 
We can include the headers from each folder and each headers directory in the CMakeList file. 


# Check Memory Leaks


* Check Memory Leaks using [**valgrind**](http://valgrind.org/)





```bash
valgrind -v --leak-check=full --tool=memcheck <your_app> <your_apps_params>
```

For this project

```bash
valgrind -v --leak-check=full --tool=memcheck ./Example-1
```


# Code Sytle 

- we recommend to use the [google C++ style guide](https://google.github.io/styleguide/cppguide.html)

- we recommend to use the [Cppcheck](http://cppcheck.sourceforge.net/) to check the style of your code. 



