# CODING CHALLENGE DAY 16: 🌙✨

---

##### ” للَّهُمَّ اِنَّكَ عَفُوٌّ ، تُحِبُّ الْعَفْوَ فَاعْفُ عَنِّي

##### “ O Allah, You are Most Forgiving, and You love forgiveness; so forgive me.

---

##

## Todays challenge description [Distributing DP] :

There are NN cells arranged in a row, numbered 1,2,…,N1,2,…,N from left to right.
Tak lives in these cells and is currently on Cell 11. He is trying to reach Cell NN by using the procedure described below.
You are given an integer KK that is less than or equal to 1010, and KK non-intersecting segments [L1,R1],[L2,R2],…,[LK,RK][l1,r1],[L2,R2],…,[LK,RK]. Let SS be the union of these KK segments. Here, the segment [l,r][l,r] denotes the set consisting of all integers ii that satisfy l≤i≤rl≤i≤r.
• When you are on Cell ii, pick an integer dd from SS and move to Cell i+di+d. You cannot move out of the cells.
To help Tak, find the number of ways to go to Cell NN, modulo 998244353998244353.

### Constraints

    • 2≤N≤2×1052≤N≤2×105
    • 1≤K≤min(N,10)1≤K≤min(N,10)
    • 1≤Li≤Ri≤N1≤Li≤Ri≤N
    • [Li,Ri][Li,Ri] and [Lj,Rj][Lj,Rj] do not intersect (i≠ji≠j)
    • All values in input are integers.

### Input

    Input is given from Standard Input in the following format:
    NN KK
    L1L1 R1R1
    L2L2 R2R2
    ::
    LKLK RKRK

### Output

    Print the number of ways for Tak to go from Cell 11 to Cell NN, modulo 998244353998244353.

### Sample Input 1 Copy

Copy
5 2
1 1
3 4

### Sample Output 1 Copy

Copy
4
The set SS is the union of the segment [1,1][1,1] and the segment [3,4][3,4], therefore S={1,3,4}S={1,3,4} holds.
There are 44 possible ways to get to Cell 55:
• 1→2→3→4→51→2→3→4→5,
• 1→2→51→2→5,
• 1→4→51→4→5 and
• 1→51→5.

### Sample Input 2 Copy

Copy
5 2
3 3
5 5

### Sample Output 2 Copy

Copy
0
Because S={3,5}S={3,5} holds, you cannot reach to Cell 55. Print 00.

### Sample Input 3 Copy

Copy
5 1
1 2

### Sample Output 3 Copy

Copy
5

### Sample Input 4 Copy

Copy
60 3
5 8
1 3
10 15

### Sample Output 4 Copy

Copy
221823067

### ADVICE 💖

Google and ChatGPT can be your so called "best friends" but it won't get you anywhere <3 Ctrl+C Ctrl+V are for the weakest of us all ;)

With love - Technical department team <3
