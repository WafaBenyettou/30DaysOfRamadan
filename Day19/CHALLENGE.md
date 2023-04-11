# CODING CHALLENGE DAY 19: 🌙✨

---

##### ” رَبَّنَا وَاجْعَلْنَا مُسْلِمَيْنِ لَكَ وَمِن ذُرِّيَّتِنَا أُمَّةً مُّسْلِمَةً لَّكَ وَأَرِنَا مَنَاسِكَنَا وَتُبْ عَلَيْنَآ إِنَّكَ أَنتَ التَّوَّابُ الرَّحِيمُ

##### “ Our Lord! Make of us Muslims, bowing to Thy (Will), and of our progeny a people Muslim, bowing to Thy (will); and show us our place for the celebration of (due) rites; and turn unto us (in Mercy); for Thou art the Oft-Returning, Most Merciful [2:128]

---

##

## Todays challenge description [ Fire Escape Routes ] :

Problem

There are N people working in a building, and each one works in a separate cabin. Chef’s employees are numbered by integers from 111 to N, inclusive. Chef wants to ensure the safety of his employees. He wants to have fire escapes in the building and wants to train the employees to use these by conducting mock drills.

Chef knows that the number of people working in his office can be very large. In order to avoid crowding of a common fire escape route during emergency, Chef has decided to build multiple fire escapes. For the safety of every employee, each cabin has a fire exit which is connected to one of the fire escape routes.

A lot of employees are friends with each other. The friendship is mutual. This means that if employee i is a friend of employee  then employee j is a friend of employee i as well. But friendship is NOT necessarily transitive. This means that if employee i is a friend of employee j AND employee j is a friend of employee kkk, then employee i and employee kkk need not necessarily be friends.

If two employees are friends, they do not want to escape through different routes. This complicates the task for the Chef. As already mentioned, he wants to have the maximum number of fire escape routes to ensure maximum safety. Also, for every escape route, one of the employees using that route needs to be appointed as the fire drill captain. The captain will be responsible for conducting the mock drills and train all the employees using that route. Your task is simple. Given the number of employees and the friendship list, you need to tell the Chef the maximum number of fire escape routes that he can have in the building and the number of ways of selecting the captains for every route. Since the number of ways can be really large, output this value modulo 10^9+7.

### Input

    The first line of the input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
    The first line of each test case contains two space-separated integers N and M, denoting the number of employees and the number of friendship relations, respectively.
    Each of the following M lines contains two space-separated integers i and j, denoting that employee i and employee j are friends.

### Output

    For each test case, output a single line containing two space separated integers, denoting the maximum number of distinct fire escape routes that can be constructed and the number of ways of selecting the captains modulo 10^9+7.

### Constraints

    1≤T≤5
    1≤N≤10^5
    0≤M≤10^5
    1≤i,j≤N
    i≠j
    For any pair of employees i and j such that 1≤i,j≤N , at most one pair among (i,j) and (j,i) will appear in the input

Sample 1:
#### Input


    3
    4 2
    1 2
    2 3
    5 3
    1 2
    2 3
    1 3
    6 3
    1 2
    3 4
    5 6

#### Output
    2 3
    3 3
    3 8

### Explanation:

- **Example case 1:** Here employees 1 and 2 are friends and should share the same fire escape. Also employees 2 and 3 share the same fire escape. This means employees 1, 2, and 3 will have a common route. But to maximize number of routes Chef could assign another route to employee 4 since it is not a friend of other employee. So we have two escape routes with the following distribution of employees by routes: {1,2,3}, {4}. Therefore, there are 3 ways to chose drill captains: (1,4),(2,4), (3,4), where first element in the pair denotes the captain for the first route and second element denotes the captain for the second route.

- **Example case 2:** Here the optimal distribution of employees by routes is {1,2,3}, {4}, {5}. Therefore, there are 3 ways to chose drill captains: (1,4,5), (2,4,5),(3,4,5).

- **Example case 3:** Here the optimal distribution of employees by routes is {1,2}, {3,4}, {5,6}. Therefore, there are 8 ways to chose drill captains: (1,3,5), (1,3,6),(1,4,5), (1,4,6), (2,3,5), (2,3,6), (2,4,5),(2,4,6).




### ADVICE 💖

Google and ChatGPT can be your so called "best friends" but it won't get you anywhere <3 Ctrl+C Ctrl+V are for the weakest of us all ;)

With love - Technical department team <3
