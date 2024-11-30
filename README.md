# List from C# to C++

Specifications

Translate the MyList2 class from C# to a class in C++. The class name should be MyList. All
functionality should be the same.

Since C++ does not have properties, replace the Count and Capacity properties with traditional
getter methods, without adding setters. Also, C++ does not have a ToString() method to override;
instead, create a toString() method that replicates the functionality of the C# version. Additionally,
there's no need to implement an interface like IList<T> because C++ lacks interface support.

When overloading the [] operator, use a parameter of type size_t. As size_t is an unsigned type, it
is unnecessary to check if the index is negative. Remember to include <iostream> to use size_t. An
entry in the “Tips” section will provide more details on this.

Use templates to implement generics, similar to the approach discussed in class.

Test your MyList class by performing the following actions:
1. Create a list.
2. Add six elements to the list.
3. Perform the four basic operations: read, search, insert, and delete.
4. Conclude with a call to toString().
Ensure that the clear() method is tested as well. Although the test code for clear() does not need
to be in your submitted code, verify that it functions correctly.

Constraints
• All index and size variables should use the size_t data type.
• Any methods that return a size should return the size_t data type.
• Any memory allocated by code must be freed. Hint: Use a destructor.
• All methods defined in your source file must have its header in the header file (.h).
• C++ uses camelCase. Name variables and methods using camelCase. Classes should be named
with PascalCase.
• The find() method should return size_t.
◦ Given that size_t is an unsigned number, to return -1, utilize the npos constant. More on
npos here:
◦ https://cplusplus.com/reference/string/string/npos/
• The default constructor should allocate enough memory for 4 elements. See the tips for help.
• If a method will not affect the state of the object, mark the method as constant.
• Your project should have three files: your main.cpp, MyList.cpp, and MyList.h.


# Ordered List Implementation

Translate the MyOrderedList2 class from C# into a class in C++. Name this class MyOrderedList.
Ensure that all functionality mirrors the original class.

To complete this lab, you will need to implement class inheritance in C++. Here are some links which
will help you learn this quickly:
• https://www.w3schools.com/cpp/cpp_inheritance.asp
• https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
• https://www.programiz.com/cpp-programming/function-overriding
Since C++ does not have a CompareTo() function like C#, only allow MyOrderedList to work with
numeric types. This will enable the use of standard comparison operators (<, >, etc.).

Use the following concept in your MyOrderedList header file:

template <typename T>
concept Numeric = std::is_arithmetic_v<T>;

This concept will enforce a constraint on the types allowed in MyOrderedList.

Important: Do not allow the insert() method to be called with an index argument. If it is, throw a
std::logic_error exception.

Additionally, change certain members (such as size and capacity) from private to protected,
to allow derived classes access to them.

Constraints
• All methods defined in the source file must have their declarations in the header file (.h).
• Use camelCase for naming variables and methods in C++. Classes should be named using
PascalCase. Refer to the Tips section for more guidance.
• If a method does not modify the state of the object, mark it as const.
