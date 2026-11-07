### **CIS-165-W198.2026FA**

Write two C++ programs that use selection statements. Plan the programs, test the different branches, and explain how your code works. Submit your source files through GitHub. This lab is worth **100 points**.

You may use AI to help you plan, understand, debug, or review your work. AI use is optional. You are responsible for checking the results and explaining every part of the code you submit.

## **Pre-Planning**

bmi.cpp

Start

Declare weight and height

Get input for weight and height

Check if values are positive and non-0

Declare bmi with calculation

Declare category

ifelse category for output

Output bmi and category

End

color\_mixer.cpp

Start

Declare constant COLOR\_SIZE

Declare color1 and color2

Get input for color1 and color2

Check if color1 and color2 are one of the following (red, blue, yellow)

If color1 or color2 is not one of the three options, Output error message

ifelse color1 + color2 = output print

End

## **Run the Program**

Compile and run each program separately

Use g++

```
g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi
./bmi
g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer
./color_mixer
```

## **Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| bmi.cpp | 100, 70 | 14.35 | 14.35 | Match |
| bmi.cpp | 150, 70 | 21.52 | 21.52 | Match |
| bmi.cpp | 200, 70 | 28.69 | 28.69 | Match |
| bmi.cpp | 150, 0 | Error | Error | Match |
| bmi.cpp | \-150, 70 | Error | Error | Match |

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| color\_mixer.cpp | red, blue | purple | purple | Match |
| color\_mixer.cpp | red, yellow | orange | orange | Match |
| color\_mixer.cpp | blue, yellow | green | green | Match |
| color\_mixer.cpp | blue, red | purple | purple | Match |
| color\_mixer.cpp | red, red | red | red | Match |
| color\_mixer.cpp | orange, red | Error | Error | Match |
| color\_mixer.cpp | red, orange | Error | Error | Match |

### **Personal Testing**

| **Program** | **Values Used** | **Expected Result Before Running** | **Actual Output** | **Match or Fix** |
| --- | --- | --- | --- | --- |
| bmi.cpp | 155, 70 | 22.24 | 22.24 | Match |
| color\_mixer.cpp | yellow, blue | green | green | Match |

## **Explanation**

How does the BMI formula use pounds and inches? Why is `height * height` needed?

*   BMI is originally calculated using kilograms and meters, but with the '703.0' in my calculation is used to convert the weight in pounds divided by the height in inches squared into the standard BMI scale. The original BMI calcuation depends on height squared, it is also possible to get the result using the pow() function.

How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain how your conditions avoid gaps and handle both endpoints.

*   Both 18.5 and 25 are considered to be 'Optimal Weight' in my program. Yes the ordering in the conditions matter, as the program first checks underweight, then optimal weight, then finally overweight. The conditions do not overlap as anything under 18.5 is considered underweight, any number bettwen 18.5 and 25.0 (including 25.0) is considered optimal weight, and anything above 25 is considered overweight.

Why do you check weight and height before calculating BMI?

*   An improper value being inputted would not allow BMI to be calculated. Such as a 0 or a negative weight/height.

Why do you classify the unrounded BMI and round only its displayed value?

*   The program should make its category decision from the actual calculated BMi and not a value that has been rounded. It only uses 'fixed' and 'setprecision()' when printing the BMI.

What does `strcmp` return for equal text? Why is `==` not the correct comparison for character-array contents?

*   strcmp returns 0 when the contents of two arrays are equal. With character arrys, '==' compares memory addresses, and not the text stored in the arrays. Two arrays can contain the same word but be stored at different addresses.

How do you make each mixture work in either input order and handle two identical primary colors?

*   The conditions checks for both possible orders, red+blue or blue+red. They will both be verified by the same if statement and output the same result. Before the color mixture conditions are met, the if statement checks if both colors are the same and will output the first color as text.

How do you check for an invalid color in either input position?

*   The program fist checks the first color to see if it is one of the three color options 'red', 'blue', or 'yellow', then separately checks whether the second color is valid as well. If either check fails, it will print an error message.

How do named constants and result variables make your programs easier to read and check?

*   Using named constants and result variables makes it easier to see what each value or result means. 'COLOR\_SIZE' helps me understand when used in setw(), I don't want an input that has more characters than 20.