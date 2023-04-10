# CODING CHALLENGE DAY 18: 🌙✨

---

##### ” اَللَّهُمَّ إنا نَسْتَعِينُكَ وَنَسْتَغْفِرُكَ وَنُؤْمِنُ بِكَ وَنَتَوَكَّلُ عَلَيْكَ وَنُثْنِئْ عَلَيْكَ الخَيْرَ وَنَشْكُرُكَ وَلَا نَكْفُرُكَ وَنَخْلَعُ وَنَتْرُكُ مَنْ ئَّفْجُرُكَ اَللَّهُمَّ إِيَّاكَ نَعْبُدُ وَلَكَ نُصَلِّئ وَنَسْجُدُ وَإِلَيْكَ نَسْعأئ وَنَحْفِدُ وَنَرْجُو رَحْمَتَكَ وَنَخْشآئ عَذَابَكَ إِنَّ عَذَابَكَ بِالكُفَّارِ مُلْحَقٌ "

##### “ O Allah! We implore You for help and beg forgiveness of You and believe in You and rely on You and extol You and we are thankful to You and are not ungrateful to You and we alienate and forsake those who disobey You. O Allah! You alone do we worship and for You do we pray and prostrate and we betake to please You and present ourselves for the service in Your cause and we hope for Your mercy and fear Your chastisement. Undoubtedly, Your torment is going to overtake infidels O Allah! "
---

##

## Todays challenge description [Oliver and the Game] :

Oliver and Bob are best friends. They have spent their entire childhood in the beautiful city of Byteland. The people of Byteland live happily along with the King.
The city has a unique architecture with total N houses. The King's Mansion is a very big and beautiful bungalow having address = 1. Rest of the houses in Byteland have some unique address, (say A), are connected by roads and there is always a unique path between any two houses in the city. Note that the King's Mansion is also included in these houses.

Oliver and Bob have decided to play Hide and Seek taking the entire city as their arena. In the given scenario of the game, it's Oliver's turn to hide and Bob is supposed to find him.
Oliver can hide in any of the houses in the city including the King's Mansion. As Bob is a very lazy person, for finding Oliver, he either goes towards the King's Mansion (he stops when he reaches there), or he moves away from the Mansion in any possible path till the last house on that path.

Oliver runs and hides in some house (say X) and Bob is starting the game from his house (say Y). If Bob reaches house X, then he surely finds Oliver.

Given Q queries, you need to tell Bob if it is possible for him to find Oliver or not.

The queries can be of the following two types:
    0 X Y : Bob moves towards the King's Mansion.
    1 X Y : Bob moves away from the King's Mansion

### INPUT :

    The first line of the input contains a single integer N, total number of houses in the city. Next N-1 lines contain two space separated integers A and B denoting a road between the houses at address A and B.
    Next line contains a single integer Q denoting the number of queries.
    Following Q lines contain three space separated integers representing each query as explained above.

### OUTPUT :

    Print "YES" or "NO" for each query depending on the answer to that query.

### CONSTRAINTS :
    1 ≤ N ≤ 10^5
    1 ≤ A,B ≤ N
    1 ≤ Q ≤ 5*10^5
    1 ≤ X,Y ≤ N

### NOTE :

Large Input size. Use printf scanf or other fast I/O methods.

#### Sample Input

    9
    1 2
    1 3
    2 6
    2 7
    6 9
    7 8
    3 4
    3 5
    5
    0 2 8
    1 2 8
    1 6 5
    0 6 5
    1 9 1

#### Sample Output

    YES

    NO

    NO

    NO

    YES

### Explanation

Query 1 Bob goes from 8 towards 1 meeting 2 in the path. Query 2 Bob goes from 8 away from 1 and never meets 2. Query 3 Bob goes from 5 away from 1 and never meets 6. Query 4 Bob goes from 5 towards 1 and never meets 6. Query 5 Bob goes from 1 away from 1 and meets finds Oliver at 9. he can take the following two paths 1 -> 2 -> 6 -> 9 OR 1 -> 2 -> 7 -> 8 9 appears in atleast one of them

### ADVICE 💖

Google and ChatGPT can be your so called "best friends" but it won't get you anywhere <3 Ctrl+C Ctrl+V are for the weakest of us all ;)

With love - Technical department team <3
