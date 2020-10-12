@@ -2,7 +2,7 @@

The incorrect original code or code snippit that you wrote:
```cpp
for (int i = 0, i < size, i++)

What bug does the original code have?
The bug is about the semiclon.
What misunderstanding of C++ concepts lead you to this incorrect code?
Misunderstanding of the fo loop.
How to correct the bug?
Put semicolon in place of commas.
The corresponding bug-free code or code snippet is:
for (int i = 0; i < size; i++)
bug-free code or code snippet goes here
What is the take-away message from this bug?
The write the for loop carefully and keep semicolon in mind.
Bug 2
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
for (int i = 2; i+i <= number; i++)
What bug does the original code have?
The bug is about using the multiplication sign.
What misunderstanding of C++ concepts lead you to this incorrect code?
misunderstanding of the calculation.
How to correct the bug?
Put the multiplication mark in place od addition.
The corresponding bug-free code or code snippet is:
for (int i = 2; i*i <= number; i++)
bug-free code or code snippet goes here
What is the take-away message from this bug?
Bug 3
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
// second test case
	cout << "test case 2: ";
	int size2 = 7, n2 = 8;
	int array2[size2];
	array2[0] = 5;
	array2[1] = 4;
	array2[2] = 7;
	array2[3] = 10;
	array2[4] = 11;
	array2[5] = 9;
	array2[6] = 14;
      }
What bug does the original code have?
In question 23 I does not called the function in the end.
What misunderstanding of C++ concepts lead you to this incorrect code?
Misunderstanding about calling the function.
How to correct the bug?
//calling the function 
	func(array2, size2, n2);
  Call the function in the end.
The corresponding bug-free code or code snippet is:
// second test case
	cout << "test case 2: ";
	int size2 = 7, n2 = 8;
	int array2[size2];
	array2[0] = 5;
	array2[1] = 4;
	array2[2] = 7;
	array2[3] = 10;
	array2[4] = 11;
	array2[5] = 9;
	array2[6] = 14;
  //calling the function 
	func(array2, size2, n2);
  }
  
bug-free code or code snippet goes here
What is the take-away message from this bug?
Read the program properly.
