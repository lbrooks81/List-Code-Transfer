# List-from-C-to-C

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
