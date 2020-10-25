@@ -2,7 +2,7 @@

The incorrect original code or code snippit that you wrote:
``` cpp
//code with bugs or code snippet with bug goes here
//}
	float getvolume()
	{
		return 3.1459*radius*radius*height;
	}
}
int main()
{
	cylinder c;


What bug does the original code have?
The bug is about missing of semicolon before starting main().
What misunderstanding of C++ concepts lead you to this incorrect code?
The misunderstanding about the main ().
How to correct the bug?
Put semicolon at the end of bracket.
The corresponding bug-free code or code snippet is:
float getvolume()
	{
		return 3.1459*radius*radius*height;
	}
};
int main()
{
	cylinder c;
bug-free code or code snippet goes here
What is the take-away message from this bug?
To check the semicolon.
Bug 2
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
class cylinder
{
private:
public:
	void set()
	{
		cout << "Enter the radius of the cylinder \n"; // display the output to enter radius
		cin >> radius; // to enter radius
		cout << "Enter the height of the cylinder\n"; // display the output  to enter the height
		cin >> height;
What bug does the original code have?
I forgot to insialize the variables.
What misunderstanding of C++ concepts lead you to this incorrect code?
Misunderstanding about new concept of get and set.
How to correct the bug?
Insialize the variables.
The corresponding bug-free code or code snippet is:
class cylinder
{
private:
	float height, radius;
public:
	void set()
	{
		cout << "Enter the radius of the cylinder \n"; // display the output to enter radius
		cin >> radius; // to enter radius
		cout << "Enter the height of the cylinder\n"; // display the output  to enter the height
		cin >> height;
bug-free code or code snippet goes here
What is the take-away message from this bug?
Always insialize the variable first.
Bug 3
The incorrect original code or code snippit that you wrote:
code with bugs or code snippet with bug goes here
for (int i = 0; i < 6; i++)
What bug does the original code have?
The bug was about to count 7 payrolls.
What misunderstanding of C++ concepts lead you to this incorrect code?
Misunderstabding about the for loop.
How to correct the bug?
Put 7 at place of 6.
The corresponding bug-free code or code snippet is:
for (int i = 0; i < 7; i++)
bug-free code or code snippet goes here
What is the take-away message from this bug?
Carefully write the for loops.
