# Loops and Control
This project covers essential programming concepts including data types, user input, conditional branches (if, else, if-else), loops (do-while, for, while), and nested loops. It is designed to enhance practical understanding and application of these fundamental areas in programming. The focus is solely on these technical topics, providing a comprehensive learning experience in these key areas of programming.

### Diagonal

This programming task requires creating a program that prompts users to input an integer `N` within the range 1 to 9. If the input is valid, it prints a diagonal line from `N` to 1. If `N` is outside this range, it displays "Invalid value for N!" and exits. The program keeps running, allowing for multiple inputs, until an invalid `N` is entered, utilizing a `do-while` loop for this purpose.
```
❯ ./diagonal
N: 7
       7
      6
     5
    4
   3
  2
 1
N: 3
   3
  2
 1
N: -2
Invalid value for N!
```
### Ladder

In this program, the user is repeatedly prompted to enter the height for a ladder made of hashtags. If the input is 0, the program instructs "The height can't be zero." and asks again. If the input is negative, it displays "That is invalid" and terminates. Positive inputs result in a printed ladder of hashtags of the specified height. The program continues until a negative input is received.
```
❯ ./ladder                  
How tall of a ladder do you need? 5
#  #
####
#  #
####
#  #
How tall of a ladder do you need? 0
The height can't be zero!
How tall of a ladder do you need? -1
Invalid height!%                  
```
### Range

In this program, users input three integers: `start`, `stop`, and `step`. If `start` is less than `stop`, it prints numbers from `start` to `stop` in ascending order, incrementing by `step`. If `start` is greater than `stop`, it prints in descending order with the same step increment. The program terminates with the message "Bye, bye!" when `start` equals `stop`.
```
❯ ./range 
Start: 1
Stop: 10
Step: 3
1, 4, 7, 10
Start: 2
Stop: 32
Step: 7
2, 9, 16, 23, 30
Start: 1
Stop: 1
Step: 1
Bye, bye!%
```
### Divisor

In this program, the user inputs a positive number. The program then calculates and prints out all the factors of that number. It checks if the number is prime (having only two distinct factors: 1 and itself) and prints "This number is Prime Number!" if it is. If the number has more than two factors, it prints "This number is not Prime Number!" instead. If the user inputs a negative number, the program responds with "Sorry, we don't deal with negativity" and terminates.
```
❯ ./divisor 
What number do you want to check? 6
1, 2, 3, 6
This is not a Prime Number!
What number do you want to check? 7
1, 7
This is a Prime Number!
What number do you want to check? -12
Sorry, we don't deal with negativity!%
```
