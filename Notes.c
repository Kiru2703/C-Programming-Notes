#include <stdio.h>      // Input Output File (have to use for every program)
#include <stdbool.h>    // For Boolean
#include <string.h>     // For Strings
#include <math.h>       // For Math Functions
#include <windows.h>    // File for Windows
#include <unistd.h>     // (Unique Standard) File for Linux / Mac
#include <stdlib.h>     // File for Standard Library
#include <time.h>       // For Time
#include <stdlib.h>     // (Standard Library) For malloc, calloc and realloc Function

/*// Print
int main(){

    printf("Sentance 1\n");         // \n is for new line
    printf("Sentance 2");
    return 0;
}
*/

/*// Variables
// To insert a variable anywhere use % which is a format specifier
int main(){
    
    //int
    int age = 25;
    int year = 2025;
    printf("You are %d years old\n", age);      // d is for decimal
    printf("The Year is %d \n", year);

    //float (6 - 7 decimal digits)
    float gpa = 3.7;
    float price = 19.55;
    printf("\nYour gpa is %f \n", gpa);         // f is for float (By default it is 6 decimal points)
    printf("The price is %.2f \n", price);      // .2 is used to specify the decimal points
    
    //double (15 - 16 decimal digits)
    double pi = 3.141592653589793;
    double e = 2.7182818284590;
    printf("\nThe value of pi is %lf\n", pi);   //lf is for long float (By default it is 6 decimal points)
    printf("The value of e is %.15lf \n", e);

    //Char (for 1 character)
    char grade = 'A';
    char symbol = '@';
    printf("\nYour Grade is %c \n", grade);     //c is for character
    printf("The symbol is %c \n", symbol);

    //char (Many characters)
    char name[] = "Kiru";                       // [] is an array (which can store more than 1 value)
    char email[] = "email123@gmail.com";        //Stings can contain numbers but they cant be used for numeric expressions
    printf("\nMy Name is %s \n", name);         //s is for String (more than 1 character)
    printf("My email is %s \n", email);

    //bool (Boolean)
    bool isOnline = true;                       // True will raise an error (case sensitive)
    bool isStudent = false;                     // False will raise an error (case sensitive)
    // Boolean are not mostly printed out
    printf("\n%d\n", isOnline);                 // prints the numeric value (true = 1 and false = 0)
    //Boolean are mostly used in if statements
    if (isOnline){                              // Example for true
        printf("You are online\n");
    }
    else{
        printf("You are offline\n");
    }
    if (isStudent){                             // Example for false
        printf("You are a Student\n");
    }
    else{
        printf("You are Not a Student\n");
    }
    
    return 0;
}*/

/*// Format Specifies
// Special Tokens that begin with a % symbol, followed by a character that specifies the data type (d, f, lf, c, s)
// and optional modifiers *width, precision, flags). They control how data is displayed or interpreted.
int main(){
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Kiru";
    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // Width
    printf("\n Width \n");
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    printf("%4d \n", num1);         // The number between the % and the character specifies the width
    printf("%4d \n", num2);
    printf("%4d \n", num3);
    printf("\n%-4d \n", num1);      // The number between the % and the character specifies the width (the - sign left justifies)
    printf("%-4d \n", num2);
    printf("%-4d \n", num3);
    printf("\n%04d \n", num1);      // The number between the % and the character specifies the width (preciding the number with 0 will make it print with leading zeros)
    printf("%04d \n", num2);
    printf("%04d \n", num3);
    
    // Precision
    //Specified after '.'
    printf("\n Precision \n");
    float price1 = 19.99;
    float price2 = -1.50;
    float price3 = 99.99;
    printf("%.2f\n", price1);       // The numbers after the '.' specifies how many digits to display (inbetween % and the character)
    printf("%.2f\n", price2);
    printf("%.1f\n", price3);       // The output will be rounded if we specify the decimal places lesser than the number stored

    // Flags 
    // If the number is negitive (Usefull for accounting)
    printf("\n Flags \n");
    int num4 = 1;
    int num5 = 10;
    int num6 = -100;
    printf("%+d \n", num4);       // The + sign between the % and the character print '+' is the number is positive
    printf("%+d \n", num5);
    printf("%+d \n", num6);

    // Width + Percision + Flags
    printf("\n Width + Percision + Flags \n");
    float price4 = 19.99;
    float price5 = -1.50;
    float price6 = 99.99;
    printf("%+7.2f\n", price4);       
    printf("%+7.2f\n", price5);
    printf("%+7.1f\n", price6);       
    // Where '+' is the Flag, '7' is the Width, and '.2' & '.1' are Precision

    return 0;
}*/

/*// Arithmetic Operations + - * / % ++ --
int main(){
    printf("\n Arithmetic Operations \n");
    int x = 2;
    int y = 3;
    int z = 0;
    // Addition
    z = x + y;                          
    printf("Addition = %d \n", z);
    // Subtraction
    z = x - y;                          
    printf("Subtraction = %d\n", z);
    // Multiplication
    z = x * y; 
    printf("Multiplication = %d\n", z);
    // Division
    z = x / y; 
    printf("Division = %d \n", z);      // Division of integers cannot store decimal places so it gives 0
    float a = 2;
    float b = 3;
    float c = 0;
    c = a / b;
    printf("Division = %f \n", c);
    c = x / b;                          // x is an integer
    printf("Division = %f \n", c);
    // Either 1 value that you are dividing has to be float or else it will retain 0
    // Modulus (Remainder of Division)
    int d = 10;
    int e = 3;
    int f = 0;
    f = d % e;
    printf("Modulus = %d \n", f);
    // Increment (++)
    d++;                                // Increments by 1
    printf("Increment %d \n", d);
    // Decrement (--)
    e--;                                // Decrements by 1
    printf("Decrement %d \n", e);
    // Decrement and Increment are useful in loops (To check how many times a loop has run etc)
    
    // Augmented Assignment Operators (Reassigning the values)
    // +=, -=, *=, /=
    x+=2;                                               // Reassigning With Addition
    printf("Reassigning x(2) value + 3 = %d \n", x);
    x-=1;                                               // Reassigning With Subtraction
    printf("Reassigning x(4) value - 1 = %d \n", x);
    x*=3;                                               // Reassigning With Multiplication
    printf("Reassigning x(3) value * 3 = %d \n", x);
    x/=3;                                               // Reassigning With Division
    printf("Reassigning x(4) value / 3 = %d \n", x);

    return 0;
}*/

/*// User Input
int main(){
    int age = 0;
    float gpa = 0.0f;                   // The 'f' is used to indicate it is a float (not used for double).
    char grade = '\0';                  // '\0' is Null Terminator
    char name[30] = "";                 // Have to assign a size if not assigning value directly
    // You can initialize empty variables, but if you accidently print variables which doesn't hold any data, it results in undefined behavior.
    // Best practice is to assign values (To not get undefined behavior even if incase we accidently print it before assigning a value).
    // Scanf used to get user input
    printf("Enter You Age : ");         // Telling the user what to enter
    scanf("%d", &age);                  // '&' is the address of operator

    printf("Enter Your GPA : ");
    scanf("%f", &gpa);

    printf("Enter Your Grade : ");      // The newline character (\n) within the input buffer gets directly assigned into grade.
    scanf(" %c", &grade);               // To avoid this add a ' ' infront of %c to tell the program to skip 1 space
   
    getchar();                          // Clears out newline character (used for fgets)
    printf("Enter Your Name : ");
    //scanf("%s", &name);               // Scanf cant read any whitespaces, So if we enter the full name it only saves the first name.
    fgets(name, sizeof(name), stdin);   // fgets - file get string, stdin - Standard Input
    name[strlen(name) - 1] = '\0';      // Used to remove the newline character input taken in fgets function, and the \0 is to replace it with null terminator

    printf("Your Age is : %d \n", age);
    printf("Your GPA is : %.1f \n", gpa);
    printf("Your Grade is : %c \n", grade);
    printf("Your Name is : %s \n", name);

    return 0;
}*/

/*// Sample Program 1 : Shopping Cart Program
int main(){
    char item[50]="";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;
    printf("What item would you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1]='\0';
    printf("What is the price for each item? ");
    scanf("%f", &price);
    printf("How many would you like to buy? ");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("You bought %d %s \n", quantity, item);
    printf("Total Price : %c %.2f",currency, total);
    return 0;
}*/

/*// Sample Program 2 : Mad libs game
int main(){
    char noun[50] = "";     //Person place or thing
    char verb[50] = "";     // action
    char adj1[50] = "";     // describes something
    char adj2[50] = "";
    char adj3[50] = "";

    printf("Enter an Adjective (Description) : ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';
    printf("Enter a Noun (animal or person) : ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';
    printf("Enter an Adjective (Description) : ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';
    printf("Enter a Verb (Action, ending with -ing) : ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';
    printf("Enter an Adjective (Description) : ");
    fgets(adj3, sizeof(adj3), stdin);
    adj3[strlen(adj3) - 1] = '\0';

    printf("\n Today I went to a %s zoo\n", adj1);
    printf("In an exhibit, I saw a %s \n", noun);
    printf("%s was %s and %s \n", noun, adj2, verb);
    printf("I was %s \n", adj3);

    return 0;
}*/

/*// Math Functions
int main(){
    int x = 9;
    int y = 0;
    y = sqrt(x);                        // Square Root
    printf("Square Root : %d \n", y);  
    y = pow(x, 2);                      // Power
    printf("Power : %d \n", y);
    float a = 3.14;
    float b = 3.14;
    float c = 3.99;
    a = round(a);                       // Rounds up to nearest number
    printf("Round : %f \n", a);
    b = ceil(b);                        // Rounds up to the higher number
    printf("Ceil : %f \n", b);
    c = floor(c);                       // Rounds down to the lower number
    printf("Floor : %f \n", c);
    int z = -3;
    z = abs(z);                         // Absolute of a value (gives the distance from 0 in + value)
    printf("Absolute : %d \n", z);
    float d = 3.0;
    d = log(3);                         // Natural log of the number
    printf("Natural Log : %f \n", d);
    int r = 45;     // Taken in Rad
    float t = 0.0f;
    t = sin(r);
    printf("Sin : %f \n", t);
    t = cos(r);
    printf("Cos : %f \n", t);
    t = tan(r);
    printf("Tan : %f \n", t);

    return 0;
}*/

/*// Sample Program 3 : Circle Radius Program
int main(){
    double radius = 0.0;
    double area = 0.0;
    double sarea = 0.0;
    double volume = 0.0;

    printf("Enter the Radius : ");
    scanf("%lf", &radius);

    const double pi = 3.1415926535;     // Variables that you dont want the value to change, use const. 
    area = pi * pow(radius, 2);
    printf("Area of the Circle : %.2f \n", area);

    sarea = 4 * pi * pow(radius, 2);
    printf("Surface Area : %.2f \n", sarea);

    volume = (4/3) * pi * pow(radius, 3);
    printf("Volume : %.2f \n", volume);

    return 0;
}*/

/*// Sample Program 4 : Compound Interest Program
int main(){
    float principle = 0.0f;
    float rate = 0.0f;
    float time = 0.0f;
    float compound = 0.0f;
    float amount = 0.0f;

    printf("Enter Principle Amount (P) : ");
    scanf("%f", &principle);
    printf("Enter Interest Rate  (r) : ");
    scanf("%f", &rate);
    rate = rate/100;
    printf("Enter number of years (t) : ");
    scanf("%f", &time);
    printf("Enter number of times compounded per year (n) : ");
    scanf("%f", &compound);
    
    float a1 = 0.0f;
    float a2 = 0.0f;
    a1 = 1 + (rate/compound);
    a2 = compound*time;
    amount = principle * pow(a1, a2);
    printf("After %.2f years, the total will be %.2f", time, amount);

    return 0;
}*/

// If Statements
// Does the code if the condition is true.
/*// Example 1
int main(){
    int age = 0;
    printf("Enter Age : ");
    scanf("%d", &age);

    if(age>=65){
        printf("You are a Senior.");
    }
    else if(age<0){
        printf("Age cannot be Negative.");
    }
    else if(age == 0){
        printf("You are a new born");
    }
    else if(age>=18){
        printf("You are an Adult.");
    }
    else{
        printf("You are a child.");
    }

    return 0;
}*/
/*// Example 2
int main(){
    bool isStudent = true;

    if(isStudent==true){
        printf("You are a student.");
    }
    else{
        printf("You are not a student.");
    }

    return 0;
}*/
/*// Example 3
int main(){
    char name[50] = "";

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name)==0){
        printf("Name cannot be empty.");
    }
    else{
        printf("Hello %s!", name);
    }

    return 0;
}*/

/*// Sample Program 5 : Weight Conversion Calculator
int main(){
    int s = 0;
    float kg = 0.0f;
    float p = 0.0f;
    printf("1. Kilograms to Pounds \n2. Pounds to Kilograms \n");
    printf("Enter your selection (1 or 2) : ");
    scanf("%d", &s);

    if(s == 1){
        printf("Enter Kilograms (Kg) : ");
        scanf("%f", &kg);

        p = kg * 2.2;
        printf("Pounds (lb) : %.2f", p);
    }
    else if(s == 2){
        printf("Enter Pounds (lb) : ");
        scanf("%f", &p);

        kg = p/2.2;
        printf("Kilograms (Kg) : %.2f", kg);
    }
    else{
        printf("Enter a valid choice");
    }

    return 0;
}*/

/*// Sample Program 6 : Temperature Conversion Program
int main(){
    int choice = 0;
    float c = 0.0f;
    float f = 0.0f;
    printf("1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius \n");
    printf("Enter Choice (1 or 2) : ");
    scanf("%d", &choice);
    if(choice==1){
        printf("Enter Celsius (C) : ");
        scanf("%f", &c);
        f = ((9.0/5.0)*c)+32;
        printf("Fahrenheit (F) : %.2f", f);
    }
    else if(choice == 2){
        printf("Enter Fahrenheit (F) : ");
        scanf("%f", &f);
        c = ((f - 32)*5.0)/9.0;
        printf("Celsius (C) : %.2f", c);
    }
    else{
        printf("Enter a Valid Option");
    }

    return 0;
}*/

// Switches
// An alternative to using many if and elseif statements.
// More efficient when working with fixed integer values or characters (single characters).
// `break` in each case is important as it ends the switch if the condition is met, or else it proceeds till switch end.
/*// Example 1 (With int)
int main(){
    int dayOfWeek=0;
    printf("Enter Day of the week (1-7) : ");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek){
        case 1:
            printf("It is Monday");
            break;
        case 2:
            printf("It is Tuesday");
            break;
        case 3:
            printf("It is Wednesday");
            break;
        case 4:
            printf("It is Thursday");
            break;
        case 5:
            printf("It is Friday");
            break;
        case 6:
            printf("It is Saturday");
            break;
        case 7:
            printf("It is Sunday");
            break;
        default:
            printf("Enter a number (1-7)");
    }

    return 0;
}*/

/*// Example 2 (with char)
int main(){
    char dayOfWeek='\0';
    printf("Enter Day of the week (M, T, W, H, F, S, U) : ");
    scanf("%C", &dayOfWeek);

    switch(dayOfWeek){
        case 'M':
            printf("It is Monday");
            break;
        case 'T':
            printf("It is Tuesday");
            break;
        case 'W':
            printf("It is Wednesday");
            break;
        case 'H':
            printf("It is Thursday");
            break;
        case 'F':
            printf("It is Friday");
            break;
        case 'S':
            printf("It is Saturday");
            break;
        case 'U':
            printf("It is Sunday");
            break;
        default:
            printf("Enter a Valid Character (M, T, W, H, F, S, U)");
    }

    return 0;
}*/

/*// Nested if statements
int main(){
    float price = 10.00;
    bool isStudent = false;
    bool isSenior = false;
    char stu = '\0';
    char se = '\0';

    printf("Are you a Student? (Y/N) ");
    scanf("%c", &stu);
    printf("Are you a Senior? (Y/N) ");
    scanf(" %c", &se);

    if(stu == 'Y'){
        isStudent = true;
    }
    if(se == 'Y'){
        isSenior = true;
    }

    if(isStudent == true){
        if(isSenior == true){
            printf("You have a Senior discount of 20%% \n");
            printf("You have a total discount of 30%% \n");
            price = price * 0.7;
        }
        else{
            printf("You have a Student discount of 10%% \n");
            price = price * 0.9;
        }
    }
    else if(isStudent == false){
        if(isSenior == true){
            printf("You have a Senior discount of 20%% \n");
            price = price * 0.8;
        }
    }
    printf("The price of the ticket is : $ %.2f", price);

    return 0;
}*/

/*// Sample Program 7 : Calculator Program
int main(){
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    char operator = '\0';
    bool valid = false;

    printf("Enter Number 1 : ");
    scanf("%lf", &num1);
    printf("Enter Number 2 : ");
    scanf("%lf", &num2);
    printf("Enter Operator (+, -, /, *) : ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
            result = num1 + num2;
            valid = true;
            break;
        case '-':
            result = num1 - num2;
            valid = true;
            break;
        case '/':
            if(num2==0.0){
                printf("Division by Zero is not valid");
            }
            else{
                result = num1 / num2;
                valid = true;
            }
            break;
        case '*':
            result = num1 * num2;
            valid = true;
            break;
        default:
            printf("Please Enter a Valid Operator (+, -, /, *).");
    }
    if(valid == true){
        printf("Result = %lf", result);
    }

    return 0;
}*/

// Logical Operators
// Used to combine or modify boolean expressions.
// && - AND (Both the conditions has to be true)
// || - OR  (Either 1 condition has to be true)
// !  - NOT (Reverses any boolean expression)
/*// Example 1 - AND (&&)
int main(){
    int temp = 50;

    if(temp>0 && temp<30){
        printf("The temperature is good");
    }
    else{
        printf("The temperature is bad");
    }

    return 0;
}*/
/*// Example 2 - OR (||)
int main(){
    int temp = 20;

    if(temp<=0 || temp >=30){
        printf("The temperature is bad");
    }
    else{
        printf("The temperature is good");
    }

    return 0;
}*/
/*// Example 3 - NOT (!)
int main(){
    bool isSunny = false;

    if(!isSunny){
        printf("It is sunny.");
    }
    else{
        printf("It is cloudy");
    }

    return 0;
}*/

/*// Functions
// Reusable section of code that can be called again.
// Arguments can be sent into a function so that it can use them.
// A function is defined outside the main() function used 'void'.
void happybirthday(char name[], int age){
    printf("\n Happy Birthday");
    printf("\n Happy Birthday");
    printf("\n Happy Birthday to %s", name);
    printf("\n Happy Birthday");
    printf("\n You are now %d years old.", age);
}
int main(){
    char name[50] = "";
    int age = 0;

    printf("Enter Person's Name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter Person's Age : ");
    scanf("%d", &age);

    happybirthday(name, age);

    return 0;
}*/

// Return Keyword
// Returns a value back when you call a function.
/*// Example 1 - Int
int square(int num){
    return num * num;
}
int main(){
    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d \n", x);
    printf("%d \n", y);
    printf("%d \n", z);

    return 0;
}*/
/*// Example 2 - Double
double square(double num){
    return num * num;
}
int main(){
    double x = square(2.123);
    double y = square(3.123);
    double z = square(4.123);

    printf("%lf \n", x);
    printf("%lf \n", y);
    printf("%lf \n", z);

    return 0;
}*/
/*// Example 3 - Bool
bool agecheck(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age = 0;

    printf("Enter Your Age : ");
    scanf("%d", &age);

    if(agecheck(age)){
        printf("You are an Adult");
    }
    else{
        printf("You are a Child");
    }

    return 0;
}*/

/*// Variable Scope
// Refers to where a variable is recognized and accessible.
// Variables can share the same name if they are in different scopes {}.
// Local Scope - Variables declared inside a function (other parts of the code cannot access it)
// Global Scope - Variables declared outside a function (All parts of the code can access it)
// Recommended to avoid using global scope since it is hard to debug (another function can accidently modify its value).
int result = 0; // Global Scope 
int add(int x, int y){
    result = x + y;
    return result;
}
int main(){
    result = add(3, 4);
    printf("Result = %d", result);

    return 0;
}*/

/*// Function Prototypes, 
// A statement that is listed before the main function.
// It provides information about a function's name, its return type, and its parameters.
// Advantages - Enables Type Checking, Allows functions to be used before they are defined, Improves readability, organization, and helps prevent errors.
// In C, the program is read from top to bottom, so if a function is called before it is defined it raises and error.
void hello(char name[], int age);       // Function Prototype
bool agecheck(int age);                 // Function Prototype
int main(){                             // Main Function
    char name[50] = "";
    int age = 0;
    printf("Enter Name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("Enter Age : ");
    scanf("%d", &age);
    hello(name, age);
    if(agecheck(age)){
        printf("You are Old enough to work are Krusty Krab");
    }
    else{
        printf("You need to be 16+ to work at Krusty Krab");
    }

    return 0;
}
void hello(char name[], int age){       // Function
    printf("Hello %s \n", name);
    printf("You are %d years old \n", age);
}
bool agecheck(int age){                 // Function
    return age >= 16;
}*/

// While Loop
// Repeats a set of code WHILE the condition is true (When the )
// Useful for taking in valid user input (Example 2)
/*// Example 1 - While Loop (Can be converted into For loop)
int main(){
    int num = 0;
    printf("Enter How many times you want to print : ");
    scanf("%d", &num);
    int i = 1;
    while(i<=num){
        printf("Hello, Count : %d \n", i);
        i += 1;
    }

    return 0;
}*/
/*// Example 2 - While Loop (Checking for Valid Input)
int main(){
    int num = 0;
    while(num <=0){
        printf("Enter a number greater than zero : ");
        scanf("%d", &num);
    }

    return 0;
}*/
/*// Example 3 - While Loop (Checking for Valid Input)
int main(){
    char name[50] = "";
    printf("Enter Your Name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name)==0){
        printf("Name Cannot be empty. \n");
        printf("Enter Your Name : ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s", name);

    return 0;
}*/
/*// Example 4 - While Loop (Using Bool)
int main(){
    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game. \n");
        printf("Would you like to continue? (y = Yes, n = No) : ");
        scanf(" %c", &response);
        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }
    printf("You Exit the game.");

    return 0;
}*/
// Do-While Loop
// Does the loop once and then checks the condition
/*// Example 1
int main(){
    int num = 1;    // Number set higher that 0
    do{
        printf("Enter a number greater than zero : ");
        scanf("%d", &num);
    }
    while(num <=0);

    return 0;
}*/

// For Loop
// Repeats a set of c ode for a limited number of times (Number of loops is known).
// for(Initialization, Condition, Update)
/*// Example 1, 
int main(){
    int num = 0;
    printf("Enter Count : ");
    scanf("%d", &num);
    for(int i = 1; i<=num; i+=1){
        printf("Count : %d \n", i);
    }

    return 0;
}*/
/*// Example 2
int main(){
    int num = 0;
    printf("Enter Count : ");
    scanf("%d", &num);
    printf("Countint in reverse \n");   // Instead of using 'i' we can use 'num' directly
    for(int i = num; i>=0; i-=1){       // for(num; num>=0; num-=1){
        printf("Count : %d \n", i);     // printf("Count : %d \n", num);

    }

    return 0;
}*/
/*// Example 2 with 1s delay
int main(){
    int num = 0;
    printf("Enter Count : ");
    scanf("%d", &num);
    printf("Countint in reverse \n");   // Instead of using 'i' we can use 'num' directly
    for(int i = num; i>=0; i-=1){       // for(num; num>=0; num-=1){
        Sleep(1000);                    // for Windows - count is in ms
        // sleep(1);                    // for Linux / Mac - count is in s 
        printf("Count : %d \n", i);     // printf("Count : %d \n", num);

    }

    return 0;
}*/

/*// Break & Continue
// Break - Breaks out of a loop (Stop)
// Continue - Skip current cycle of loop (Skip)
int main(){
    for(int i=1; i<=10;i++){
        if(i==4){
            continue;       // Skips number 4
        }
        if(i==8){
            break;          // Breaks the loop if i = 8
        }
        printf("%d \n", i);
    }

    return 0;
}*/

// Nested Loops
// Contains a loop within a loop
/*// Example 1
int main(){
    for(int i = 1; i <=3; i++){
        for(int j = 1; j < 10; j++){
        printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}*/
/*// Example 2
int main(){
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%3d ", i*j);
        }
        printf("\n");
    }

    return 0;
}*/
/*// Example 3
int main(){
    int row = 0;
    int col = 0;
    char symbol = '\0';
    printf("Enter the Number of Rows : ");
    scanf("%d", &row);
    printf("Enter the Number of Cols : ");
    scanf("%d", &col);
    printf("Enter the Symbol : ");
    scanf(" %c", &symbol);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}*/

/*// Random Numbers (Pseudo-Random)
// Appear random but are determined by a mathematical formula that uses a seed value to generate a predictable sequence of numbers.
// Advanced : Mersenne Twister or /dev/random
int main(){
    // printf("%d", rand());        // This will give the same number '41' every time we run the code
    // Create a seed value based on the current time.
    srand(time(NULL));
    printf("%d", rand());
    
    // Use `RAND_MAX` to find the max number in the random function (changes according to the os and the complier used).
    // To get pseudo-random numbers
    srand(time(NULL));
    int randomNum = rand() % 2; // Gives either 0 or 1
    printf("%d", randomNum);
    
    // To get pseudo-random numbers using off-set
    // Adding a off-set of 1 cause 0 is a possible value
    srand(time(NULL));
    int randomNum = (rand() % 2) + 1; // Gives either 1 or 2
    printf("%d", randomNum);
    
    // For Small ranges
    srand(time(NULL));
    int min = 1;
    int max = 6;
    int randomNum = (rand() % max) + min; 
    printf("%d", randomNum);

    // For Greater Ranges
    srand(time(NULL));
    int min = 50;
    int max = 100;
    int randomNum = (rand() % (max - min + 1)) + min;   // Setting min as 50 and max as 100
    printf("%d", randomNum);

    return 0;
}*/

// Sample Program 8 : Number Guessing game
/*// Program 1 - range 1 to 10 and gives 3 tries
int main(){
    srand(time(NULL));
    int min = 1;
    int max = 10;
    int randomNum = (rand() % (max - min + 1)) + min;
    int guessNum = 0;
    bool valid = false;

    printf("Number Guessing Game \n");
    for(int i = 1; i <= 3; i++){
        printf("Guess a Number between 1 to 10 : ");
        scanf("%d", &guessNum);
        if(guessNum == randomNum){
            printf("You have Guessed the Correct Number!");
            valid = true;
            break;
        }
        else{
            printf("Wrong Number, Guess again\n");
        }
    }
    while(valid==false){
        printf("You guessed the Wrong Number\n");
        printf("The Correct Number is %d", randomNum);
        break;
    }

    return 0;
}*/
/*// Program 2 - range 1 to 100 and goes on till you get it
int main(){
    srand(time(NULL));
    int min = 1;
    int max = 100;
    int randomNum = (rand() % (max - min + 1)) + min;
    int guessNum = 0;
    int tries = 1;
    int range1 = randomNum - 10;
    int range2 = randomNum + 10;
    bool valid = false;

    printf("Number Guessing Game \n");
    while(valid == false){
        printf("Guess a Number between 1 to 100 : ");
        scanf("%d", &guessNum);
        if(guessNum != randomNum){
            printf("You Guessed Wrong, Try Again. \n");
            if(range1<=guessNum && range2>=guessNum){
                printf("Close \n");
            }
            else if(guessNum<range1){
                printf("Too Low \n");
            }
            else if(guessNum>range2){
                printf("Too High \n");
            }
            tries += 1;
        }
        else{
            printf("You have Guessed the Correct Number! \n");
            printf("You did it in %d tries.", tries);
            valid = true;
            break;
        }
    }

    return 0;
}*/

/*// Sample Program 9 : Rock Paper Sissors
int main(){
    srand(time(NULL));
    int min = 1;
    int max = 3;
    int computer = (rand() % (max - min + 1)) + min;
    int human = 0;
    
    printf("ROCK PAPER SCISSORS GAME \n");
    printf("Choose an Option : \n1. Rock \n2. Paper \n3. Sissors \n");
    printf("Enter your Choice : ");
    scanf("%d", &human);
    switch(human){
        case 1:
            printf("You Choose Rock \n");
            break;
        case 2:
            printf("You Choose Paper \n");
            break;
        case 3:
            printf("You Choose Scissors \n");
            break;
        default:
            printf("Please enter a valid choice. \n");
            break;
    }
    switch(computer){
        case 1:
            printf("Computer Choose Rock \n");
            break;
        case 2:
            printf("Computer Choose Paper \n");
            break;
        case 3:
            printf("Computer Choose Scissors \n");
            break;
    }
    if(human == computer){
        printf("Its a Tie! \n");
    }
    else if((human == 1 && computer == 3) || (human == 3 && computer == 2) || (human == 2 && computer == 1)){
        printf("You Win! \n");
    }
    else if((human == 1 && computer == 2) || (human == 3 && computer == 1) || (human == 2 && computer == 3)){
        printf("You Lose! \n");
    }
    return 0;
}*/

/*// Sample Program 10 : Banking Program
void checkBalance(float Balance);
float deposit(float Balance);
float withdraw(float Balance);
int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("WELCOME TO THE BANK");
    do{
        printf("\nSelect an Option \n");
        printf("1. Check Balance \n");
        printf("2. Deposit Money \n");
        printf("3. Withdraw Money \n");
        printf("4. Exit \n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank You!");
                break;
            default:
                printf("Enter a Valid Option.");
                break;
        }
    }while(choice !=4);

    return 0;
}
void checkBalance(float Balance){
    printf("Your Balance is : %.2f \n", Balance);
}
float deposit(float Balance){
    printf("Current Balance : %.2f \n", Balance);
    float deposit = 0.0f;
    printf("Enter Amount to Deposit : ");
    scanf("%f", &deposit);
    Balance += deposit;
    printf("%.2f Deposited Successfully. \n", deposit);
    printf("Your Balance is : %.2f \n", Balance);
    return Balance;
}
float withdraw(float Balance){
    printf("Current Balance : %.2f \n", Balance);
    float withdraw = 0.0f;
    printf("Enter Amount to Withdraw : ");
    scanf("%f", &withdraw);
    if(Balance > withdraw){
        Balance -= withdraw;
        printf("%.2f Withdrawn Successfully. \n", withdraw);
        printf("Your Balance is : %.2f \n", Balance);
    }
    else{
        printf("Not Enough Balance. \n");
    }
    return Balance;
}*/

// Arrays
// It is a fixed size collection of elements of the same data type (Similar to a variable, but it holds more than 1 value).
/*// Example 1 (Using int)
int main(){
    int numbers[] = {10, 20, 30, 40, 50};
    printf("%d", numbers);          // It gives out a really long funky number.
    // When an array is passed into a function (like printf() ) it decays into a pointer (runs into unexpected behavior).
    // Each element is called using its index values (Indexing starts from 0 and ends (len - 1) ).

    numbers[4] = 100;               // Changing the value

    printf("%d \n", numbers[0]);
    printf("%d \n", numbers[1]);
    printf("%d \n", numbers[2]);
    printf("%d \n", numbers[3]);
    printf("%d \n", numbers[4]);
    printf("%d \n", numbers[5]);    // Out of index values gives some garbage value (out-of-bounds).

    return 0;
}*/
/*// Example 2 (Using char)
int main(){
    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    grades[4] = 'F';        // Changing the value

    printf("%C \n", grades[0]);
    printf("%C \n", grades[1]);
    printf("%C \n", grades[2]);
    printf("%C \n", grades[3]);
    printf("%C \n", grades[4]);

    return 0;
}*/
/*// Example 3 (Using characters)
int main(){
    // An array of characters is like strings in C
    char name[] = "Person Name";

    name[10] = 'f';         // Changing the value

    printf("%c \n", name[0]);
    printf("%c \n", name[1]);
    printf("%c \n", name[2]);
    printf("%c \n", name[3]);
    printf("%c \n", name[4]);
    printf("%c \n", name[5]);
    printf("%c \n", name[6]);
    printf("%c \n", name[7]);
    printf("%c \n", name[8]);
    printf("%c \n", name[9]);
    printf("%c \n", name[10]);

    return 0;
}*/

/*// Arrays and User Input
int main(){
    int scores[5] = {0};
    int score = 0;
    for(int i = 0; i < 5; i++){
        printf("Enter Score : ");
        scanf("%d", &score);
        scores[i] = score;
    }
    for(int i = 0; i < 5; i++){
        printf("Score : %d \n", scores[i]);
    }

    return 0;
}*/

// 2D Array
// An array where each element is an array.
// Useful for Grid, or matrix of data.
/*// Example 1 (Using int)
int main(){
    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // For 2D Arrays, we have to declare the number of columns (the second []).
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
/*// Example 2 (Using char)
int main(){
    char numpad[][3] = {{'1', '2', '3'}, {'4', '5', '6'}, 
                        {'7', '8', '9'}, {'*', '0', '#'}};
    for(int i=0; i < 4; i++){
        for(int j=0; j < 3; j++){
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

// Array with strings
/*// Example 1 (Printing array of strings)
int main(){
    char fruits[][10] = {"Apple", "Banana", "Coconut"};
    int size = sizeof(fruits) / sizeof(fruits[0]);
    for(int i=0; i < size; i++){
        printf("%s \n", fruits[i]);
    }
    // Array of strings behaves similarly like an array of char
    char fruit[][10] = {
            {'A', 'p', 'p', 'l', 'e', '\0', '\0', '\0', '\0', '\0'}, 
            {'B', 'a', 'n', 'a', 'n', 'a', '\0', '\0', '\0', '\0'}, 
            {'C', 'o', 'c', 'o', 'n', 'u', 't', '\0', '\0', '\0'}
    };

    return 0;
}*/
/*// Example 2 (Taking user input)
int main(){
    char names[3][25] = {0};
    int size = sizeof(names) / sizeof(names[0]);
    for(int i = 0; i < size; i++){
        printf("Enter a name : ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    for(int j=0; j < size; j++){
        printf("%s ", names[j]);
    }

    return 0;
}*/

/*// Sample Program 11 : Quiz Game
int main(){
    char quiz1[4][15] = {"A. Jupiter", "B. Saturn", "C. Uranus", "D. Neptune"};
    char quiz2[4][15] = {"A. Mercury", "B. Venus", "C. Earth", "D. Mars"};
    char quiz3[4][15] = {"A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"};
    char quiz4[4][15] = {"A. Yes", "B. No", "C. Maybe", "D. Sometimes"};
    int score = 0;
    char choice = '\0';

    printf("QUIZ GAME \n\n");
    for(int i = 1; i<=4; i++){
        if(i == 1){
            printf("What is the largest planet in the solar system? \n");
            for(int j = 0; j < 4; j++){
               printf("%s \n", quiz1[j]);
            }
            printf("\nEnter Your Choice : ");
            scanf(" %c", &choice);
            choice=tolower(choice);
            if(choice == 'a'){
                printf("Correct! \n\n");
                score+=1;
            }
            else{
                printf("Wrong \n\n");
            }
        }
        if(i == 2){
            printf("Which is the hottest planet? \n");
            for(int j = 0; j < 4; j++){
               printf("%s \n", quiz2[j]);
            }
            printf("\nEnter Your Choice : ");
            scanf(" %c", &choice);
            choice=tolower(choice);
            if(choice == 'b'){
                printf("Correct! \n\n");
                score+=1;
            }
            else{
                printf("Wrong \n\n");
            }
        }
        if(i == 3){
            printf("What planet has the most moons? \n");
            for(int j = 0; j < 4; j++){
               printf("%s \n", quiz3[j]);
            }
            printf("\nEnter Your Choice : ");
            scanf(" %c", &choice);
            choice=tolower(choice);
            if(choice == 'd'){
                printf("Correct! \n\n");
                score+=1;
            }
            else{
                printf("Wrong \n\n");
            }
        }
        if(i == 4){
            printf("Is the Earth flat? \n");
            for(int j = 0; j < 4; j++){
               printf("%s \n", quiz4[j]);
            }
            printf("\nEnter Your Choice : ");
            scanf(" %c", &choice);
            choice=tolower(choice);
            if(choice == 'b'){
                printf("Correct! \n\n");
                score+=1;
            }
            else{
                printf("Wrong \n\n");
            }
        }
    }
    printf("Your Score is %d out of 4 points.", score);

    return 0;
}*/

// Ternary Operator
// Short hand for if-else statements.
// (Condition) ? value_if_true : value_if_false;
/*// Example 1 (Using int)
int main(){
    int x = 6;
    int y = 7;
    int max = (x > y) ? x : y;
    printf("%d", max);

    return 0;
}*/
/*// Example 2 (Using bool)
int main(){
    bool isOnline = false;

    printf("%s", (isOnline) ? "Online" : "Offline");

    return 0;
}*/
/*// Example 3 (Taking user input and printing a string)
int main(){
    int age = 0;
    printf("Enter Your Age : ");
    scanf("%d", &age);

    printf("%s", (age < 18) ? "You are a Child." : "You are an Adult.");

    return 0;
}*/
/*// Example 4 (Using pointers)
int main(){
    int hours = 0;
    int minutes = 0;
    printf("Enter Hour : ");
    scanf("%d", &hours);
    printf("Enter Minute : ");
    scanf("%d", &minutes);
    char *meri = (hours < 12) ? "AM" : "PM";    // Pointer
    printf("%02d:%02d %s", hours, minutes, meri);

    return 0;
}*/
// Pointers, 
// Data type of a pointer is 'char'.
// Just put the ternary operator for it.

// typedef
// Reserved keyword that gives an existing datatype a "nickname".
// Helps simplify complex types and improves code readability.
// typedef existing_type new_name;
/*// Example 1 (Using int)
typedef int number;
int main(){
    number x = 3;
    number y = 4;
    number z = x + y;
    printf("%d", z);

    return 0;
}*/
/*// Example 2 (Using string)
typedef char* String;
int main(){
    String name = "My Name";
    printf("%s", name);

    return 0;
}*/

// enum
// A user defined data type that consists of a set of named integer constants.
// Benefit : Replaces numbers with readable names.
// enum constants should be in capital letters.
// If value isnt specified, the first constant is 0 by default and the next ones are incremented by 1.
/*// Example 1 (Without specifying  enum values)
enum Day{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}; 
int main(){
    enum Day today = SUNDAY; // Sunday Has a value of 0
    printf("%d \n", today);
    enum Day today1 = MONDAY; // Monday Has a value of 1
    printf("%d \n", today1);
    enum Day today2 = TUESDAY; // Tuesday Has a value of 2
    printf("%d \n", today2);
    enum Day today3 = WEDNESDAY; // Wednesday Has a value of 3
    printf("%d \n", today3);
    enum Day today4 = THURSDAY; // Thursday Has a value of 4
    printf("%d \n", today4);
    enum Day today5 = FRIDAY; // Friday Has a value of 5
    printf("%d \n", today5);
    enum Day today6 = SATURDAY; // Saturday Has a value of 6
    printf("%d \n", today6);

    return 0;
}*/
/*// Example 2 (enum values specified)
enum Day{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, 
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
};
int main(){
    enum Day today = SUNDAY; // Sunday Has a value of 1
    printf("%d \n", today);
    enum Day today1 = MONDAY; // Monday Has a value of 2
    printf("%d \n", today1);
    enum Day today2 = TUESDAY; // Tuesday Has a value of 3
    printf("%d \n", today2);
    enum Day today3 = WEDNESDAY; // Wednesday Has a value of 4
    printf("%d \n", today3);
    enum Day today4 = THURSDAY; // Thursday Has a value of 5
    printf("%d \n", today4);
    enum Day today5 = FRIDAY; // Friday Has a value of 6
    printf("%d \n", today5);
    enum Day today6 = SATURDAY; // Saturday Has a value of 7
    printf("%d \n", today6);
    
    return 0;
}*/
/*// Example 3 (typedef + enum)
typedef enum {
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, 
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;
// If you use typedef, you dont have to specify enum.
int main(){
    Day today = SUNDAY; // Sunday Has a value of 1
    printf("%d \n", today);
    Day today1 = MONDAY; // Monday Has a value of 2
    printf("%d \n", today1);
    Day today2 = TUESDAY; // Tuesday Has a value of 3
    printf("%d \n", today2);
    Day today3 = WEDNESDAY; // Wednesday Has a value of 4
    printf("%d \n", today3);
    Day today4 = THURSDAY; // Thursday Has a value of 5
    printf("%d \n", today4);
    Day today5 = FRIDAY; // Friday Has a value of 6
    printf("%d \n", today5);
    Day today6 = SATURDAY; // Saturday Has a value of 7
    printf("%d \n", today6);
    
    return 0;
}*/
/*// Example 4
typedef enum {
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, 
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;
int main(){
    Day today = MONDAY;
    
    if(today == SUNDAY || today == SATURDAY){
        printf("It is a Weekend.");
    }
    else{
        printf("It is a Weekday.");
    }
    
    return 0;
}*/
/*// Example 5 (Using Switch and Function)
typedef enum{
    SUCCESS, FAILURE, PENDING
}Status;
void connectStatus(Status status){
    switch(status){
        case SUCCESS:
            printf("Connection was Successful.");
            break;
        case FAILURE:
            printf("Could not connect.");
            break;
        case PENDING:
            printf("Connecting...");
            break;
    }
};
int main(){
    Status status = PENDING;
    connectStatus(status);

    return 0;
}*/

// structs
// A custom container that holds multiple pieces of related information.
// Similar to Objects in other languages.
// Struct is like a blueprint.
// If we just create a struct and not assign it any values and if we call it gives undefined behavior (if we just do `tag_name variable_name;`).
// To create an empty struct just do `tag_name variable_name = {0};` so that it resets all the value to 0.
/*// Example 1 (Creating and Using Structs)
typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFulltime;
}Student;
void printstudent(Student student){
    // To access an element in the struct, use '.'
    printf("Name : %s \n", student.name);     
    printf("Age : %d \n", student.age);
    printf("GPA : %.2f \n", student.gpa);
    printf("Full Time : %s \n", (student.isFulltime) ? "Yes" : "No");
    printf("\n");
};
int main(){
    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2 = {"Patrick", 32, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};
    Student student4 = {0};
    printstudent(student1);
    printstudent(student2);
    printstudent(student3);

    return 0;
}*/
/*// Example 2 (Assigning Values to an empty struct)
typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFulltime;
}Student;
int main(){
    Student student = {0};
    strcpy(student.name, "Sandy");
    student.age = 27;
    student.gpa = 4.0;
    student.isFulltime = true;
    printf("Name : %s \n", student.name);     
    printf("Age : %d \n", student.age);
    printf("GPA : %.2f \n", student.gpa);
    printf("Full Time : %s \n", (student.isFulltime) ? "Yes" : "No");

    return 0;
}*/
/*// Example 3 (Taking User input and assigning into struct)
typedef struct{
    char name[50];
    int age;
    float gpa;
    bool isFulltime;
}Student;
int main(){
    Student student = {0};
    char name[50] = "";
    char fulltime = '\0';
    printf("Enter Student Name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    strcpy(student.name, name);
    printf("Enter Student Age : ");
    scanf("%d", &student.age);
    printf("Enter Student GPA : ");
    scanf("%f", &student.gpa);
    printf("Is the Student Full Time? (Y/N) : ");
    scanf(" %c", &fulltime);
    if(fulltime == 'Y' || fulltime == 'y'){student.isFulltime = true;}
    else{student.isFulltime = false;}
    printf("Name : %s \n", student.name);     
    printf("Age : %d \n", student.age);
    printf("GPA : %.2f \n", student.gpa);
    printf("Full Time : %s \n", (student.isFulltime) ? "Yes" : "No");

    return 0;
}*/

/*// Array of structs
// Array where each element contains a struct {}.
// Helps organize and groups together related data.
typedef struct{
    char model[25];
    int year;
    int price;
}Car;
int main(){
    Car cars[] = {{"Mustang", 2025, 32000}, 
    {"Corvette", 2026, 68000}, 
    {"Challenger", 2024, 28000}};
    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("Model : %s  Year : %d   Price : $%d \n", cars[i].model, cars[i].year, cars[i].price);
    }
    return 0;
}*/

// Pointers
// A variable that stores the memory address of another variable.
// Benefit : They help avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.
/*// Explination
int main(){
    int age = 25;
    // `%p` is used to print the pointer address.
    // `&` gives the address  (Addresses are hexadecimal values).
    int *pAge = &age;
    // `*` is known as the dereference operator, and then you put a 'p' to specify that it is a pointer.
    // You can put the `*` either a suffix after the data type or as a prefix before the variable name.
    printf("%p \n", &age);
    printf("%p", pAge);

    return 0;
}*/
/*// Example 1
void birthday(int* age){
    (*age)++;    
    // `(*age)` we dereference it and then increment it by 1 or else it will increment the address by 1.
    // So we dereference it and get the value and then increment it by 1.
    // '*age' is within () is because of operator precedence (without () it will increment the address first and then dereference it.
};
int main(){
    int age = 25;
    // int *pAge = &age;
    // We don’t have to necessarily create a variable for the pointer and then pass it into a function, you can directly pass it in using `&variable_name`
    birthday(&age);
    printf("You are %d years old", age);

    return 0;
}*/

/*// Write Files
// To work with Files, there is a built in struct, a file, provided by the standard input output header file.
// Data type - 'FILE' (All caps).
// We will create a pointer to the file struct.
// Absolute File Path - The entire location to the file. Eg "C:\\Users\\User\\Folder\\File.txt" (Used if you want to store the file in a different folder and not in the folder the program file is in.
// Relative File Path - Just the file name and the file should be in the same folder as the program file (It will raise an error if file is not found in read mode
int main(){
    FILE *pFile = fopen("output.txt", "w");
    // fopen() - File Open (We add the file path followed by the mode in this function) (Always close the file, use `fclose(pointer);` ).
    // If unable to create or open a file it returns a value of NULL.
    char text[] = "Idk what do I type here \nso you tell me.";
    if(pFile == NULL){
        printf("Error opening file.");
        return 1;
    }
    fprintf(pFile, "%s", text);
    // To write into a text file use `fprintf(file_pointer, "%format_specifer", variable_name);` where the 'f' infront of 'printf' stands for file.
    printf("File Was Written Successfully");
    fclose(pFile);
    
    return 0;
}*/

/*// Read Files
// We use a while loop to read the data from the file.
// Use fgets function so once it finishes reading the full file it will return a NULL value.
int main(){
    FILE *pFile = fopen("input.txt", "r");
    char buffer[1024] = {0};
    // Buffer is used to temporarily store data.
    // We have to specify the size of the buffer (in bytes) (best is 1024 bytes = 1Kb).
    if(pFile == NULL){
        printf("Error Opening File.");
        return 1;
    }
    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        printf("%s", buffer);
    }
    fclose(pFile);

    return 0;
}*/

/*// malloc function
// A function in C that dynamically allocates a specified number of bytes in memory.
// The Memory that we reserve is from the location known as 'Heap', in most situations when we use the memory it is from the place called 'Stack'.
int main(){
    int number = 0;
    printf("Enter the Number of Grades : ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));
    // If the function fails, it returns a value of NULL. And if we try to dereference a NULL Pointer, it will cause a Segmentation Fault (which is dangerous).
    // Segmentation fault occurs when a program attempts to access a memory location that is not allowed to access, or attempts to access a memory location 
    // in a way that is not allowed (for Eg : attempting to write a read-only location, or to overwrite part of the operating system).
    if(grades == NULL){
        printf("Memory Allocation Failed.");
        return 1;
    }
    for(int i = 0; i < number; i++){
        printf("Enter Grade #%d : ", i+1);
        scanf(" %c", &grades[i]);
    }
    for(int i = 0; i<number; i++){
        printf("Grade #%d : %c \n", i+1, grades[i]);
    }

    free(grades);    // returning the memory space back to the os.
    grades = NULL;   // avoides dangling pointers
    // 	Once we are done using the reserved space, we have to return the space back to the os.
	// We also have to reset the pointer to avoid dangling pointers (dangling pointer are pointers that point to a location that we arent using anymore.

    return 0;
}*/

/*// calloc function
// Contiguous Allocation.
// Allocates memory dynamically and sets all allocated bytes to 0.
// malloc() is faster, but calloc() leads to less bugs.
// malloc function if printed without assigning values to it, they return undefined behavior. While in calloc function it sets all allocated bytes to 0 which leads to lesser bugs.
int main(){
    int number = 0;
    printf("Enter Number of Players : ");
    scanf("%d", &number);

    int *scores = calloc(number, sizeof(int));
    if(scores == NULL){
        printf("Memory Allocation Failed.");
        return 1;
    }
    for(int i = 0; i<number; i++){
        printf("Enter Score of Player #%d : ", i+1);
        scanf("%d", &scores[i]);
    }
    for(int i = 0; i<number; i++){
        printf("%d ", scores[i]);
    }
    free(scores);   // returning the memory space back to the os.
    scores = NULL;  // avoids dangling pointers

    return 0;
}*/

/*// realloc function
// Reallocation.
// Resize previously allocated memory.
// realloc will also free old memory.
// We can make the memory bigger or smaller.
int main(){
    int number = 0;
    printf("Enter the Number of Prices : ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));
    if(prices == NULL){
        printf("Error Allocating Memory");
        return 1;
    }
    for(int i = 0; i < number; i++){
        printf("Enter Price of Item #%d : ", i+1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a New Number Of Prices : ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));     // Temp means temporary
    if(temp == NULL){
        printf("Could Not Reallocate Memory");
    }
    else{
        prices = temp;

        for(int i = number; i < newNumber; i++){
            printf("Enter Price of Item #%d : ", i+1);
            scanf("%f", &prices[i]);
        }
        for(int i = 0; i < newNumber; i++){
            printf("$%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}*/

/*// Sample Program 12 : Digital Clock
int main(){
    time_t rawtime = 0; 
    // Using this cause int has a limit on how big an integer is, and this holds Unix Epoch.
    // Unix Epoch is around Jan 1 1970. (It measures how many seconds has passed since this date and that date is used as a reference point).
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("Digital Clock \n");
    while(isRunning){
        time(&rawtime);
        pTime = localtime(&rawtime);
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        // the `->` means "dereference the operator first and then give the current value".
        // `\r` means carriage return which means the cursor returns to the beginning.
        Sleep(1000);
    }

    return 0;
}*/
