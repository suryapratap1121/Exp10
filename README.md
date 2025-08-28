C-DSA-College-EXP10
Implementation Pointer

Implement-Pointer-Operations-in-CPP-
Aim: To study and implementation of pointer operation with call by value and call by address in C++

Software used: Mingw compiler, visual studio code, online C++ compiler

Program 1 Call by value
Explanation and Theory of code: This program demonstrates call by value, where copies of variables a and b are passed to the swap function. Changes made inside the function affect only the copies, not the original variables. Thus, although x and y are swapped inside swap(), a and b remain unchanged in main(). This highlights that call by value does not modify actual arguments—only local copies.

Algorithm:

Start
Define swap(x, y)
Store x in aa
Assign y to x
Assign aa to y
Print swapped values
In main(), call swap(a, b)
Print original a and b
End
Program 2 Call by Reference
Explanation and Theory of Code: This program uses call by reference, where the actual memory addresses of variables a and b are passed to the swap function. Inside the function, dereferencing (*x, *y) allows direct modification of the original variables. Thus, swapping values inside swap() affects a and b in main(). Unlike call by value, this method ensures that changes persist outside the function, making it ideal for in-place updates.

Algorithm:

Start
Define swap(int *x, int *y)
Store *x in aa
Assign *y to *x
Assign aa to *y
Print swapped values
In main(), call swap(&a, &b)
Print updated a and b
End
Program 3 Call by reference with Increment
Explanation and Theory of Code: This program uses call by reference to directly modify the original variable a. The function swap(int &x) receives a reference to a, not a copy. Inside the function, x is incremented by 45, which updates a itself. Since references point to the actual memory location, any change to x reflects in a. This technique is useful when you want functions to alter original data without returning values.

Algorithm:

Start
Define swap(int &x)
Declare aa = 45
Increment x by aa
Print updated value
In main(), declare a = 3
Print original a
Call swap(a)
End
Conclusion
All three programs illustrate different parameter-passing techniques in C++. The call by value method passes copies of variables, so changes inside the function don’t affect the originals. In contrast, call by reference using pointers allows direct modification of original variables by accessing their memory addresses. The third example, call by reference using reference variables, simplifies syntax while still enabling direct updates to the original variable. Together, these examples highlight how function behavior changes based on how arguments are passed—whether as copies or references—making it crucial to choose the right method depending on whether data needs to be modified.
