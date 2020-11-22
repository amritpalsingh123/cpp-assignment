@@ -2,7 +2,7 @@

The incorrect original code or code snippit that you wrote:
``` cpp
//code with bugs or code snippet with bug goes here
int *unique_ptr = new max;
What bug does the original code have?
The bug is that I have to put int in front of max.
What misunderstanding of C++ concepts lead you to this incorrect code?
About declaring the integer variable.
How to correct the bug?
Put int in front of max.
The corresponding bug-free code or code snippet is:
int *unique_ptr = new int(max);
bug-free code or code snippet goes here
What is the take-away message from this bug?
Read about integer variable.
Bug 2
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
catch ( char*error_msg)
What bug does the original code have?
FOrgot to write const in front of char*error_msg
What misunderstanding of C++ concepts lead you to this incorrect code?
Typing error
How to correct the bug?
Put const in front of char*error_msg
The corresponding bug-free code or code snippet is:
catch (const char*error_msg)
bug-free code or code snippet goes here
What is the take-away message from this bug?
Read and write.
Bug 3
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
avg = sum / 7
What bug does the original code have?
Semicolon in the end.
What misunderstanding of C++ concepts lead you to this incorrect code?
Typing error
How to correct the bug?
Put semicolon in the end.
The corresponding bug-free code or code snippet is:
avg = sum / 7;
bug-free code or code snippet goes here
What is the take-away message from this bug?
Take care about semicolon.
