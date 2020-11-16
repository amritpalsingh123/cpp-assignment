@@ -2,7 +2,7 @@

The incorrect original code or code snippit that you wrote:
``` cpp
What bug does the original code have?
this->name = name;
		this->enrollmentYear = enrollmentYear
What misunderstanding of C++ concepts lead you to this incorrect code?
Typing errors
How to correct the bug?
Put the semicolon at the end of second line.
The corresponding bug-free code or code snippet is:
this->name = name;
		this->enrollmentYear = enrollmentYear;
bug-free code or code snippet goes here
What is the take-away message from this bug?
Type properly.
Bug 2
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
What bug does the original code have?
student [0] = &student;
	student [1] = &KpuStudent;
	student [2] = &hogwartsStudent;
What misunderstanding of C++ concepts lead you to this incorrect code?
About declaring the variable.
How to correct the bug?
It should be students as i have declared students earliar.
The corresponding bug-free code or code snippet is:
students [0] = &student;
	students [1] = &KpuStudent;
	students [2] = &hogwartsStudent;
bug-free code or code snippet goes here
What is the take-away message from this bug?
Take care of the variables.
Bug 3
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
What bug does the original code have?
HogwartsStudent(string name, string enrollmentYear, string houseAffiliation)Student(name, enrollmentYear)
What misunderstanding of C++ concepts lead you to this incorrect code?
Forget to put : between the two classes.
How to correct the bug?
Put : between them.
The corresponding bug-free code or code snippet is:
HogwartsStudent(string name, string enrollmentYear, string houseAffiliation):Student(name, enrollmentYear)
bug-free code or code snippet goes here
What is the take-away message from this bug?
Watch and write.
