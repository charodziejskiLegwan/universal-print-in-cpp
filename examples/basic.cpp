#include <string>
#ifndef DEBUG
//if there is no DEBUG defined it turns DEBUG mode off
#define DEBUG 0
#elif DEBUG==1
//if DEBUG mode is on it includes the universal_print library
#include "../lib/universal_print.h"
#endif
#if DEBUG==0
//if DEBUG mode is off it defines all debug mode functions to "turn them off"
//so you don't have to delete all library functions before submiting the final code
#define watch(...)
#define debug if(0)
namespace cupl{
    template <typename T> void print_main(T &x, int y, std::string z){return;}
    std::string indentation = "";
    void indent(){return;}
    void unindent(){return;}
    std::string bold(){return "";}
    std::string clr(){return "";}
    std::string backgr(int x){return "";}
    std::string colour(int x){return "";}
    void showTypes(bool val){return;}
    template <typename T> bool is_iterable(T x){return 0;}
}
#endif

int main(){
    //defining all example variables
    int integer        = 30;
    float real         = 3.14159;
    int array[10]      = {4, 1, 6, 21, 7, 2, 135, 3, 631, 2};
    std::string hello  = "Hello World!";

    //watching their values
    watch(integer);
    watch(real);
    watch(array);
    watch(hello);
}