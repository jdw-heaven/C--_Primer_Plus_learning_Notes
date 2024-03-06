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
