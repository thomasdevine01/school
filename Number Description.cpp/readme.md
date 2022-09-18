In this lab, you will get practice assigning variables and using fundamental math.

You will start off with some code that needs completion. It has all the variables that you will need for the program already declared:

* `int inspect;` a number the user will enter
* `int multiple;` will store inspect's multiple of 10
* `int remainder;` will store the digit at the 1's place of inspect
* `string evenOdd;` will store whether or not inspect is even

Find the following comments and complete the steps:

1. assign `multiple` the value of dividing `inspect` by `10`
2. assign `remainder` the value of the remainder when dividing `inspect` by 10. To get the remainder, make sure to use the [Modulus operator](https://www.w3schools.com/cpp/cpp_operators.asp)
3. assign `evenOdd` the value of "even" if inspect divided by two has a remainder of 0, otherwise assign it the value of "odd"
4. only display the following message when remainder has a value greater than 0: `cout << " plus " << remainder;`

You should not have to change any of the variable declarations or cout statements to get this lab to work. When you run it, it should produce the following output if the user enters 45:

```
Enter a whole number:
45
That number is odd
It is equal to 40 plus 5
That is all
```

Run your tests and submit when you're done!
