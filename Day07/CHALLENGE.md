# CODING CHALLENGE DAY 07:🌙✨
------------------
 ##### ” اَللَّهُمَّ اجْعَلْناَ بِالْإِيْمَانِ كَامِلِيْنْ، وَلِلْفَرَآئِضِ مُؤَدِّيْنَ، وَلِلصَّلَاةِ حَافِظِيْنَ، وَلِلزَّكَاةِ فَاعِلِيْنَ، وَلِمَا عِنْدَكَ طَالِبِيْنَ، وَلِعَفْوِكَ رَاجِيْنَ، وَبِالْهُدَى مُتَمَسِّكِيْن، وَعَنِ اللَّغْوِ مُعْرِضِيْنَ، وَفِي الدُّنْيَا زَاهِدِيْنَ، وَفِي الْأَخِرَةِ رَاغِبِيْنَ، وَبِالْقَضَاءِ رَاضِيْنَ، وَبِالنَّعْمَاءِ شَاكِرِيْنَ، وَعَلَى الْبَلاءِ صَابِرِيْنَ، وَتَحْتَ لِوَاءِ سَيِّدِنَا مُحَمَّدٍ صَلَّى اللهُ عَلَيْهِ وَسَلَّمَ يَوْمَ الْقِيَامَةِ سَائِرِيْنَ، وَإِلَى الْحَوْضِ وَارِدِيْنَ، وَفِي الْجَنَّةِ دَاخِلِيْنَ، وَمِنَ النَّارِ نَاجِيْنَ، وَعَلَى سَرِيْرَةِ الْكَرَامَةِ قَاعِدِيْنَ، وَبِحُوْرِ عيْنٍ مُتَزَوِّجِيْنَ، وَمِنْ سُنْدُسٍ وَاِسْتَبْرَقٍ وَدِيْبَاجٍ مُتَلَبِّسِيْنَ، وَمِنْ طَعَامِ الْجَنَّةِ آكِلِيْنَ، وَمِنْ لَبَنٍ وَعَسَلٍ مُصَفًّى شَارِبِيْنَ، بِأَكْوَابٍ وَأَبَارِيْقَ وَكَأْسٍ مِنْ مَعِيْنٍ، مَعَ الَّذِيْنَ أَنعَمْتَ عَلَيْهِمْ مِنَ النَّبِيِّين والصِّدِّيقِينَ والشُّهَدَاءِ والصَّالِحِين، وحَسُنَ أُولَئِكَ رَفِيقًا، ذَلِكَ الْفَضْلُ مِنَ اللهِ وَكَفَى بِاللهِ عَلِيْمًا، وَالحَمدُ لِلَّهِ رَبِّ العَالَمِينَ
 ##### “ O Allah make us from those who have complete faith, perform all obligations, guard their prayers, give zakat, seek that which is due from You, hope for Your forgiveness, hold on firmly to guidance, turn away from futile acts, show no interest for worldly pleasures, desire the life of the hereafter, are pleased with the divine decree, are thankful for Your blessings, are patient during trials, would walk under the flag of our leader (sayyidina) Muhammad s.a.w. on the Day of Judgement, would arrive to the Prophet’s well (in the hereafter), would enter the Paradise, would be saved from the hellfire, would sit on the honoured mattresses (of paradise), would be married to the companions of Paradise, would be adorned with garments (of paradise) from Silk and Brocade, would eat from the food of Paradise, would drink from the milk and pure honey in the cups and goblets from the fountain of clear-water, in the company of those You bestow blessings upon them from amongst the Prophets, the righteous, the martyrs and the pious and what a great company do they make, and it is sufficient that Allah is All-Knowing, and praise be to Allah the Lord of all Worlds
---------------------
## 
## Todays challenge description [It belongs to me] :

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
|kayla jayla||


### Explanation:

 - **Test case 1**: Consider S = "johanna". So, S[0] = 'j', S[1] = 'o', S[2] = 'h' and so on. If we remove the indices [3, 4, 6] or [3, 5, 6] from S, it becomes "john". Hence "john" is a subsequence of S, so the answer is "YES".

 - **Test case 2**:  Any string is a subsequence of it self, as it is formed after removing "0" characters. Hence the answer is "YES".

 - **Test case 3**:  "jayla" can not be attained from "kayla" as removing any character from "kayla" would make the string length smaller than "jayla", also there is no 'j' in "kayla". Similar reasoning can be applied to see why "kayla" can't be attained from "jayla". Hence the answer is "NO".



### ADVICE 💖

Google and ChatGPT can be your so called "best friends" but it won't get you anywhere <3 Ctrl+C Ctrl+V are for the weakest of us all ;)

With love - Technical department team <3

