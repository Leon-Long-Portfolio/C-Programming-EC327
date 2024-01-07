# Combinatorics
This programming problem requires writing a function to calculate the number of ways to achieve at least 'r' heads in 'N' coin flips, using the concept of combinations (denoted as "n choose r"). The challenge lies in handling large numbers efficiently, as direct computation of factorials can quickly lead to integer overflow. The function should accept non-negative integers 'N' and 'r', with 'N' being greater than or equal to 'r', and return the number of possible combinations. The main part of the program will repeatedly prompt the user for the number of coin flips and the desired number of heads, outputting the calculated number of ways to achieve this outcome. The program should handle large values for 'N' and 'r', and continue running until the user decides to stop, emphasizing efficiency and robustness in handling large numerical calculations.
```
❯ ./counting_heads
How many coins would you like to flip? 5
How many heads do you want? 2
Flipping 5 coins, we can get 2 heads 10 ways.
Flip again? (y/n) y
How many coins would you like to flip? 4
How many heads do you want? 2
Flipping 4 coins, we can get 2 heads 6 ways.
Flip again? (y/n) y
How many coins would you like to flip? 1000
How many heads do you want? 999
Flipping 1000 coins, we can get 999 heads 1000 ways.
Flip again? (y/n) n
Program ends
```
