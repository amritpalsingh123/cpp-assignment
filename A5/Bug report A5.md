@@ -2,7 +2,7 @@
Bug 1
The incorrect original code or code snippit that you wrote:
``` cpp
cout << "x=" << x << y= << y;
What bug does the original code have?
The bug is I forgot to put inverted commans aroud y.
What misunderstanding of C++ concepts lead you to this incorrect code?
The misunderstanding was my typing errors.
How to correct the bug?
Just put inverted commas around y.
The corresponding bug-free code or code snippet is:
cout << "x=" << x << "y=" << y;
bug-free code or code snippet goes here
What is the take-away message from this bug?
Watch when you write.
Bug 2
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
cout << *(arr + i) << "\t";
What bug does the original code have?
I just forgot to write this which mean i forgot the whole output line.
What misunderstanding of C++ concepts lead you to this incorrect code?
About the displaying the output.
How to correct the bug?
Just write the line cout << *(arr + i) << "\t";
The corresponding bug-free code or code snippet is:
cout << *(arr + i) << "\t";
bug-free code or code snippet goes here
What is the take-away message from this bug?
About displaying the output. 
Bug 3
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
int*arr = new int[n];
	for (int i = 0; i < n; i++)
		*(arr + i) = array[n - i - 1];
What bug does the original code have?
I forgot to return arr.
What misunderstanding of C++ concepts lead you to this incorrect code?
Misunderstanding about the return statement.
How to correct the bug?
Just write the return statement.
The corresponding bug-free code or code snippet is:
int*arr = new int[n];
	for (int i = 0; i < n; i++)
		*(arr + i) = array[n - i - 1];
	return arr;
bug-free code or code snippet goes here
What is the take-away message from this bug?
To understand the retuen statement.
