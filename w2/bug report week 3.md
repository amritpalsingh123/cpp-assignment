# Bug 1

1. **The incorrect original code or code snippit that I wrote:**
In question 31

cout << "1. Area of a circle\n"


2. **What bug does the original code have?**
The bug is i missed semicolon (;)
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
That's i think is the typing error.

4. **How to correct the bug?**
Just put the semicolon at the end
cout << "1. Area of a circle\n";

5. **The corresponding bug-free code or code snippet is:**
cout << "1. Area of a circle\n":
```


```

6. **What is the take-away message from this bug?**

---The take away is to watch what i am writing , as i found this question easy so their was not much bugs.

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**
switch (number)
	{
	case 0:
		int a;
		int b;
		cout << "Please enter the amount of USD dollars:";
		cin >> a;
		b = a * 1.32;
		cout << "They can be converted to " << b << "dollars" << endl;
		break;
	case 1:
      int c;
		int d;
		cout << "Please enter the amount of CAD dollars :";
		cin >> c;
		d = c / 1.32;
		cout << "They can be converted to" << d << "USD.";
		break;
	default:
		cout << "Wrong choice";

	}
```
code with bugs or code snippet with bug goes here

```

2. **What bug does the original code have?**
Actually its in decimal value and i gave it the integer value.
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
The misunderstanding of the integer and the decimal variables.So the misunderstanding was of the variables.

4. **How to correct the bug?**
Simple write double in place of int.

5. **The corresponding bug-free code or code snippet is:**
switch (number)
	{
	case 0:
		double a;
		double b;
		cout << "Please enter the amount of USD dollars:";
		cin >> a;
		b = a * 1.32;
		cout << "They can be converted to " << b << "dollars" << endl;
		break;
	case 1:
      double c;
		double d;
		cout << "Please enter the amount of CAD dollars :";
		cin >> c;
		d = c / 1.32;
		cout << "They can be converted to" << d << "USD.";
		break;
	default:
		cout << "Wrong choice";

	}
```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**

---The take away is to focus on the double and integers or any other like float etc .

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
	int number;
	cout << "Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion:" << endl;
  cout << "Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion:" << endl;
	cin >> number;
code with bugs or code snippet with bug goes here

```

2. **What bug does the original code have?**
The original code have this line only one time but i just wrote it two times by mistake.
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
The misunderstanding was just my consentration level.

4. **How to correct the bug?**
Just write the line one time.

5. **The corresponding bug-free code or code snippet is:**

  cout << "Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion:" << endl;
	cin >> number;
```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**
To consentrate more when i am writing.
