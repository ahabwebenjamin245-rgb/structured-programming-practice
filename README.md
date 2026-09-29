# structured-programming-practice

## Exercise 1 – Basic Output

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.9(a).

What the program does: The program displays a specific line of code as one statement.

Concepts used: printf 

How it works: The program runs the content within the printf statement and displays the text to the user.

## Exercise 2 – Input-Process-Output

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.7(b). 

What the program does: The program asks the user to enter a specific number of integers and calculates their sum,product,quotient and their remainder when divided by one another.

Concepts used: integer variables, printf,scanf.

How it works: The program runs each printf and scanf statement and executes all the calculations within the different lines of code and after, it displays the values of the sum,product,quotient and the remainder of the numbers when divided by one another.

## Exercise 3 – Decisions

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.2. 

What the program does: The program asks the user to enter an integer value and then it determines whether that value is an even or odd number. 

Concepts used: integer variables, printf ,if,else.

How it works: The program runs a block of code to be executed if a condition is true,and if that condition is not satisfied,then it goes on to run the input within the printf statement in the else statement

## Exercise 4 – Basic Loop

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.25. 

What the program does: The program creates and displays the multiples of numbers in a tabular form.

Concepts used: for loop, integer variables, printf 

How it works: The loop runs the first start statement once before the block and then places a condition for execution of the code and then runs every step expression every time after the condition has been met.

## Exercise 5 – Loop with calculation

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11. 

What the program does: The program measures all the calculates the sum of all multiples of 7 from 1 to 100 and outputs the sum using a for loop.

Concepts used: for loop, integer variables, printf, arithmetic 

How it works: The for loop starts at "number = 7;" and the condition is assigned as number not greater than 100 and after each iteration, it adds the number to the sum up to when the condition is satisfied.

## Exercise 6 –  Loop with user input

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.9. 

What the program does: The program asks the user to enter the number of values to input, accepts those values each at a time, calculates their sum and average, and then displays their results.

Concepts used: for loop, integer variables, printf,scanf

How it works: The for loop begins with the start statement which is "j= 1;" and it runs the condition "j<= numberOfvalues" and after each iteration, it increments the value to another value by one.

An example;
Typical input:
int numberOfValues;int number; int sum = 0;
    double average;

    printf("Enter the number of values: ");
    scanf("%d", &numberOfValues);

    for (int j = 1; j <= numberOfValues; j++)
    {
        printf("Enter value %d: ", j);
        scanf("%d", &number);

        sum += number;
    }

    average = (double)sum / numberOfValues;

    printf("\nSum: %d\n", sum);
    printf("Average: %.2f\n", average);

Typical Output:
Enter the number of values: 2

Enter value 1: 45

Enter value 2: 67

Sum: 112

Average: 56.00

## Exercise 7 – Loop with decision

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.23. 

What the program does: The program asks the user to enter a number, it repeatedly assigns the number as the largest for a count of 10 and after all 10 numbers have been entered ,it displays the largest number of all 10 counts. Every time a new number is entered, it checks whether that number is larger.

Concepts used: for loop, integer variables, printf , if, scanf.

How it works: The for loop starts with first count expression which is "count = 2" then it runs the condition before the entire line of code and  after each iteration, it increments it to a another value.

## Exercise 8 – Interactive Console program

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.18. 

What the program does: The program repeatedly asks the user to enter sales in dollars, calculates the employee's salary, and displays it and then it stops when the user inputs a negative one.

Concepts used: while loop, float variables, printf, menu/sentinel decision

How it works: The program creates two variables,asks the user for sales,the while loop clarifies the value, and performs calculations such as salary, sales then displays the sales in dollars.
