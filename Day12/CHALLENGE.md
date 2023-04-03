# CODING CHALLENGE DAY 12: 🌙✨
-------------------
 ##### ” اللَّهُمَّ صَلِّ عَلَى مُحَمَّدٍ وَعَلَى آلِ مُحَمَّدٍ كَمَا صَلَّيْتَ عَلَى إِبْرَاهِيمَ وَعَلَى آلِ إِبْرَاهِيمَ، إِنَّكَ حَمِيدٌ مَجِيدٌ، اللَّهُمَّ بَارِكَ عَلَى مُحَمَّدٍ وَعَلَى آلِ مُحَمَّدٍ كَمَ ا بَارَكْتَ عَلَى إِبْرَاهِيمَ وَعَلَى آلِ إِبْرَاهِيمَ، إِنَّكَ حَمِيدٌ مَجِيدٌ

 ##### “  O Allah, bestow Your favor on Muhammad and on the family of Muhammad as You have bestowed Your favor on Ibrahim and on the family of Ibrahim, You are Praiseworthy, Most Glorious. O Allah, bless Muhammad and the family of Muhammad as You have blessed Ibrahim and the family of Ibrahim, You are Praiseworthy, Most Glorious
---------------------
## 
## Todays challenge description [ D. Anton and School ] :

As you probably know, Anton goes to school. One of the school subjects that Anton studies is Bracketology. On the Bracketology lessons students usually learn different sequences that consist of round brackets (characters "(" and ")" (without quotes)).
On the last lesson Anton learned about the regular simple bracket sequences (RSBS). A bracket sequence s of length n is an RSBS if the following conditions are met:
    • It is not empty (that is n ≠ 0).
    • The length of the sequence is even.
    • First  charactes of the sequence are equal to "(".
    • Last  charactes of the sequence are equal to ")".
For example, the sequence "((()))" is an RSBS but the sequences "((())" and "(()())" are not RSBS.
Elena Ivanovna, Anton's teacher, gave him the following task as a homework. Given a bracket sequence s. Find the number of its distinct subsequences such that they are RSBS. Note that a subsequence of s is a string that can be obtained from s by deleting some of its elements. Two subsequences are considered distinct if distinct sets of positions are deleted.
Because the answer can be very big and Anton's teacher doesn't like big numbers, she asks Anton to find the answer modulo 109 + 7.
Anton thought of this task for a very long time, but he still doesn't know how to solve it. Help Anton to solve this task and write a program that finds the answer for it!


### Input Format

    The only line of the input contains a string s — the bracket sequence given in Anton's homework. The string consists only of characters "(" and ")" (without quotes). It's guaranteed that the string is not empty and its length doesn't exceed 200 000.

### Output Format

Output one number — the answer for the task modulo 10^9 + 7.

Examples
input
Copy
)(()()
output
Copy
6
input
Copy
()()()
output
Copy
7
input
Copy
)))
output
Copy
0


### Note

In the first sample the following subsequences are possible:
    • If we delete characters at the positions 1 and 5 (numbering starts with one), we will get the subsequence "(())".
    • If we delete characters at the positions 1, 2, 3 and 4, we will get the subsequence "()".
    • If we delete characters at the positions 1, 2, 4 and 5, we will get the subsequence "()".
    • If we delete characters at the positions 1, 2, 5 and 6, we will get the subsequence "()".
    • If we delete characters at the positions 1, 3, 4 and 5, we will get the subsequence "()".
    • If we delete characters at the positions 1, 3, 5 and 6, we will get the subsequence "()".
The rest of the subsequnces are not RSBS. So we got 6 distinct subsequences that are RSBS, so the answer is 6.

### ADVICE 💖

Google and ChatGPT can be your so called "best friends" but it won't get you anywhere <3 Ctrl+C Ctrl+V are for the weakest of us all ;)

With love - Technical department team <3

