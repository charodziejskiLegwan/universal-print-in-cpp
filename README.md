# Universal Print in Cpp

This is a library mainly meant to increase the efficiency of debugging C++ programs. 
Very handy when used for competetive programming.

## Supported and tested types

* all numeric variables (`bool`, `char`, `short`, `int`, `long`, `long long`, `float`, `double`, `long double`) both `signed` and `unsigned`
* `std::string`
* `std::bitset`
* `std::vector`s and arrays with defined dimensions
* `std::stack`, `std::queue`, `std::deque`, `std::priority_queue`
* `std::pair`
* all pointers of any type that is supported
* all `const` variants of supported types
* all arithmetic expressions of supported types
* binary trees __disclaimer__ a bit of extra effort is needed
* probably more are supported but we haven't tested them

## Installation

 1. Clone this repository using
    ```
    git clone https://gitlab.com/charodziej/universal-print-in-cpp
    ```
    or by downloading it from [here](https://gitlab.com/charodziej/universal-print-in-cpp/-/archive/master/universal-print-in-cpp-master.zip)
 2. Make sure that everything works on your platform by compiling at least one of the [examples](/examples/) in your programming environment
 3. If everything is working properly, include the `universal_print.h` library to your project and copy the contents of `template.cpp` to the main file of that project (not necessary but recommended)

## Usage

 1. To enable the library, you only need to add 
    ```cpp
    #define DEBUG 1
    ```
    to the beginning of a project based on `template.cpp`.
    At this point your program should be printing a banner, informing you that you are in debug mode.

 2. To make use of the basic functionality you only need to call
    ```cpp
    watch(<variable_name>);
    ```
    where `<variable_name>` is the name of your variable.

 3. If you do not fancy seeing the names of types you can disable them using
    ```cpp
    cupl::showTypes(false);
    ```
    and re-enable them using
    ```cpp
    cupl::showTypes(true);
    ```
    if that's what you need to do.

 4. If your data type isn't supported you will need to implement an expansion to the library in your main cpp file.
 
    You can do it as follows:
    ```cpp
    void print_process(<data_type> name){
        <custom_printing_code>
    }
    ```
    where `<data_type>` would be the your custom data type and `<custom_printing_code>` would be your method of printing the variable. 
    
    After each `endln` or `\n` in your `<custom_printing_code>` you have to print the variable `cupl::indentation` to make everything look properly.
    
    Please note that if your custom type contains other types that are supported by our library you can just call `cupl::print_process();` on those members of your type.

    Due to C++11 limitations `struct`s aren't supported by default and each `struct` has to have this function defined like so:
    ```cpp
    struct my_struct{
        <normal members>
        ...
        void print_process(){
            <custom_printing_code>
        }
    }
    ```
    You may want to check out [this example](/examples/structs.cpp) to better understand how to implement this.

## Customization

If you would like to change the colours of objects, change the precision `std::cout` uses or binary trees look weird on your system, you should take a look at the beginning of the `universal_print.h` file.

The "User setup" section will allow you to change all of those things easily.

## Documentation

The full documentation describing all the functions can be found [here](/documentation/README.md)

## Screenshots

## TODO

* [x] support for const
* [x] examples
* [x] screenshots
* [x] printing binary trees nicely
* [ ] printing other graphs _nicely_

## Issues

If you encounter any issues or come up with nice improvements please report them on the Issue Tracker.

Merge requests are welcome too :).

## Contributors

* Adam Jeliński (charodziej)
* Kajetan Lewandowski (LegwanXDL)
