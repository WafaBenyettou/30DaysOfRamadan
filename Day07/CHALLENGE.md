# CODING CHALLENGE DAY 06:🌙✨
------------------
 ##### ”اللَّهُمَّ إِنِّي أَسْأَلُكَ مُوْجِبَاتِ رَحْمَتِكَ، وَعَزَائِمَ مَغْفِرَتِكَ، وَالسَّلَامَةَ مِنْ كُلِّ إِثْمٍ، وَالْغَنِيْمَةَ مِنْ كُلِّ بِرٍ، وَالْفَوْزَ بِالجَنَّةِ، وَالنَّجَاةَ مِنَ النَّارِ 
 ##### “ O Allah! I beg You for that which incites Your mercy and the means of Your forgiveness, safety from every sin, the benefit from every good deed, success in attaining Jannah and safety from the Fire.
---------------------
## 
## Todays challenge description [ Special string 🧙‍♂️ ] :

In an attempt to control the rise in population, Archer was asked to come up with a plan. This time he is targeting marriages. Archer, being as intelligent as he is, came up with the following plan:

A man with name M is allowed to marry a woman with name W, only if M is a subsequence of W or W is a subsequence of M.

A is said to be a subsequence of B, if A can be obtained by deleting some elements of B without changing the order of the remaining elements.

Your task is to determine whether a couple is allowed to marry or not, according to Archer's rule.

### Input Format

   
    The first line contains an integer T, the number of test cases. T test cases follow. Each test case contains two space separated strings M and W.



### Output Format

For each test case print "YES" if they are allowed to marry, else print "NO". (quotes are meant for clarity, please don't print them)

### Constraints

    1 ≤ T ≤ 100
    1 ≤ |M|, |W| ≤ 25000 (|A| denotes the length of the string A.)
    All names consist of lowercase English letters only.


           

### Sample 1:

| Input | Output |
| ----- | ------ |
| 3 |YES|
| john johanna |YES|
| ira ira |NO|
|kayla jayla|2|


### Explanation:

 - **Test case 1**: Consider S = "johanna". So, S[0] = 'j', S[1] = 'o', S[2] = 'h' and so on. If we remove the indices [3, 4, 6] or [3, 5, 6] from S, it becomes "john". Hence "john" is a subsequence of S, so the answer is "YES".

 - **Test case 2**:  Any string is a subsequence of it self, as it is formed after removing "0" characters. Hence the answer is "YES".

 - **Test case 3**:  "jayla" can not be attained from "kayla" as removing any character from "kayla" would make the string length smaller than "jayla", also there is no 'j' in "kayla". Similar reasoning can be applied to see why "kayla" can't be attained from "jayla". Hence the answer is "NO".



### ADVICE 💖

Google and ChatGPT can be your so called "best friends" but it won't get you anywhere <3 Ctrl+C Ctrl+V are for the weakest of us all ;)

With love - Technical department team <3

