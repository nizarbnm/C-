#include <iostream>
#include <string>
using namespace std;

class MyClass    // The Class
{
public: // acces specifier
void myMethod()  // Method/Function defined inside the class
{ 
cout << "Am a function inside a class \n";
}
};

int main()
{
MyClass myobj; // creat myobj us a class of MyClass
myobj.myMethod();
return 0;
}
