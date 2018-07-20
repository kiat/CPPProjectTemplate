# CPP Project Template



## Build and Run

We use CMake to build C++ code.


* Use one of the compiler [**LLvm**](https://llvm.org/) -  [**clang**](https://clang.llvm.org/),
'Gnu Compiler Collection' [**gcc**](https://gcc.gnu.org/onlinedocs/gcc/) or 'Gnu C Compiler' g++, and enable warning flags while compiling your code



# Use Share Pointers

It is better to use shared pointers to avoid any possible memory leaks. 

Follow the following 3 simple ruls. 

1. For each Class define a type for the shared_ptr like the following

```c++

#include <memory>

class Auto;
typedef std::shared_ptr<Auto> AutoPtr;

```

2. No use of new operator

To instatiate an object of the specifc class 



```c++

auto  myAuto  =  std::make_shared <Auto>();

```


3. There is no need to use raw points. 

You can always use the shared_ptr that you defined like "AutoPtr". 

If there is a real need to use c++ raw pointers you can access it as well.  


# Check Memory Leaks


* Check Memory Leaks using [**valgrind**](http://valgrind.org/)





```bash
valgrind -v --leak-check=full --tool=memcheck <your_app> <your_apps_params>
```

For this project

```bash
valgrind -v --leak-check=full --tool=memcheck ./Example-1
```
