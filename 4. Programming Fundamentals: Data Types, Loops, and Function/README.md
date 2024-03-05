# Programming Fundamentals: Data Types, Loops, and Function
The primary objective of this programming assignment is to apply fundamental C++ programming concepts, including data types, conditional statements, loops, and basic functions, to solve a series of distinct problems. The assignment comprises five questions, each targeting specific skills: calculating the shortest distance from a point to a line using geometric principles, developing a simple "rock, paper, scissors" game with user input and random choice generation, computing the Hamming distance between two numbers in hexadecimal format, determining whether a given number is a palindrome, and implementing character manipulation with ASCII values. This assignment aims to strengthen the understanding and application of essential programming constructs in real-world scenarios, enhancing problem-solving abilities and proficiency in C++ programming.
### Shortest Distance
The task involves developing a C++ program that calculates the shortest distance from a point to a line, integrating both programming and mathematical principles. This requires reading user-provided coordinates, applying geometric formulas to determine a line's equation, and then accurately computing the perpendicular distance from a third point to this line. Precision is crucial, as the program must output the distance with at least two decimal places. Overall, this question combines elements of software development with computational geometry, highlighting the intersection of computer engineering and applied mathematics in solving real-world problems.
```
❯ ./shortest_distance                           
Enter three x,y coordinates:
1 2 2 3 2 4
The shortest distance for (2,4) to the line composed of (1,2) and (2,3) is 0.707107.

❯ ./shortest_distance
Enter three x,y coordinates:
2 4 6 7 5 9 
The shortest distance for (5,9) to the line composed of (2,4) and (6,7) is 2.2.
```
### Rock, Paper, Scissors
This "rock, paper, scissors" programming question in computer science focuses on essential concepts such as user input handling, random number generation, control structures, and decision-making logic. The exercise aims to teach students how to create an interactive application that responds to user choices, utilizes randomness to simulate computer decisions, and employs logical comparisons and control flow to determine the outcome of a game. Overall, this question effectively blends theoretical concepts with practical application, providing a comprehensive learning experience in basic programming skills.
```
❯ ./RockPaperScissors
Choose Rock (0), Paper (1), or Scissors (2): 2
Computer chooses: Rock
You lose!

❯ ./RockPaperScissors
Choose Rock (0), Paper (1), or Scissors (2): 1
Computer chooses: Rock
You win!

❯ ./RockPaperScissors
Choose Rock (0), Paper (1), or Scissors (2): 7
Invalid Input!
```
