# Setting Out to C++

## C++ inititaion

C++ is case sensitive, it use C++ cout (pronounced see-out) facility to produce character out. The compiler ignores the line begging with "//".
```
// myfirst.cpp -- displays a message

# include <iostream>    //a PREPROCESSOR directive
int main()  //function header
{   //start of function body
    using namespace std;    //make definitions visible
    cout << "Come up and C++ me some time.";    //message
    cout << endl;   //start a new line
    cout << "You won't regret it!" <<endl;  //more output
    return 0;
}
```
***
You need to use g++ compiling the cpp file, not gcc. Maybe gcc is okey, but I don't know how to use it on my PC.
***
> For the windowing environment that run the program in s separate window and automatically close it when finished, you can make the window stay open until you strike a key by adding the following line of code before the return statement:

>`cin.get()`

> For some programs you must add two or more of these to keep the window open.you may easily understand it if you have the basics of a compiling language. But that didn't matter, you'll know later.

>In fact, C++ is compatible to C. You just need to including the C header files.

The *myfirst.cpp* example has the following elements:

+ Comments, indicated by the // prefix
+ A preprocessor *#include* directive
+ A function header: *int main()*
+ A *using namesapce* directive
+ A function body, delimited by { and }
+ Statements that use the C++ *cout* facility to display a message
+ Areturn statement to terminate the *main()* function

***
### Features of *main()* Function
A function definition is consist of function header and function body. A statement is a complete instrction in C++ and it must be terminate by a semicolon.

### The Function Header as an Interface
>Under classic C, omitting the return type is the same as saying that the fhe function is type *int*

Some programmers use this header and omit the return statement:

*void main()*

Although this vavriant works ons some system, it's not the C++ Standard. So, avoid it.

But finally, the ANSI/ISO C++ Standard makes a concession that if the compiler reaches the end of *main()* without encountering a return statement, the effect will be the same as if you ended *main()* with this statement: *return 0;*

### Why *main()* by Any Other Name is Not the Same
When you run a C++ program, execution always begins at the beginning of the *main()* functin. But in some special area *main()* may not need.

### C++ Comments
C++: "//"

C:"/* */"

## Namesapces
> Like *cout*, *endl* is defined in the *iostream* header file and is part of *std* namespace.

### The newline character
One difference is that *endl* guarantees the output will be flushed(in this case, immediately display on screen) before the program moves on. You don't get the guarantee with *"\n"*, which means that it is possible on some systems in some circumstances a prompt might not be displayed until after you enter the information being prompted for.