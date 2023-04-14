# CODING CHALLENGE DAY 22: 🌙✨

---

##### ” 
##### “ 
---

##

## Todays challenge description [  ] :

Zonal Computing Olympiad 2015, 29 Nov 2014

We have a rectangular region that is 100000100000100000 units along the XXX-axis and 500500500 units along the YYY-axis.

We assume that the origin (0,0)(0,0)(0,0) is at the bottom-left corner of this region, so that the top-left corner is at (0,500)(0, 500)(0,500), the bottom-right at (100000,0)(100000, 0)(100000,0) and the top-right corner at (100000,500)(100000, 500)(100000,500). We are also given the coordinates of a set of NNN points inside this region. The points have only integer coordinates and do not appear along the XXX-axis or YYY-axis.

We would like to draw a rectangle, with its base on the XXX-axis, of maximum area within the region such that it does not contain any of the NNN points in its interior. More specifically, the points may appear on the boundary but cannot be properly inside the rectangle.

For example, if there are 555 points : (1,4),(2,3),(3,2),(5,1)(1, 4), (2, 3), (3, 2), (5, 1)(1,4),(2,3),(3,2),(5,1) and (5,2)(5, 2)(5,2). Then the rectangle whose bottom-left and top-right corners are given by (0,0)(0,0)(0,0) and (2,3)(2,3)(2,3) is a possibility and its area is 666. Another possibility is the rectangle with bottom-left and top-right corners at (3,0)(3,0)(3,0) and (5,500)(5,500)(5,500) with area 100010001000. The rectangle with bottom-left at (2,3)(2, 3)(2,3) and top-right at (100000,500)(100000, 500)(100000,500) is not valid since its base does not lie on the XXX-axis. The largest rectangle that meets the requirements in this case is the one with its bottom-left corner at (5,0)(5,0)(5,0) and top-right at (100000,500)(100000,500)(100000,500) with area 499975004999750049997500.

Your program should take a description of the NNN points and output the size of the maximum rectangle satisfying the above property that can be drawn within the 100000×500100000 × 500100000×500 region.
Input format

The first line contains a single integer NNN, giving the number of points marked in the region.

This is followed by NNN lines, each containing two integers separated by a space describing the coordinates of one point.
Output format

Output a single integer giving the area of the largest rectangle that may be drawn with its base on the XXX-axis and which does not contain any of the given NNN points in its interior.
Test data

In both subtasks, the XXX-coordinate of each of the NNN points is in the range 111 to 999999999999999 inclusive, and the YYY-coordinate of each of the NNN points is in the range 111 to 499499499 inclusive.

    Subtask 111 (404040 marks) :1≤N≤5000: 1 \le N \le 5000:1≤N≤5000
    Subtask 222 (606060 marks) :1≤N≤100000: 1 \le N \le 100000:1≤N≤100000

Sample Input

5
1 4 
2 3
3 2
5 1
5 2

Sample Output

49997500



### ADVICE 💖

Google and ChatGPT can be your so called "best friends" but it won't get you anywhere <3 Ctrl+C Ctrl+V are for the weakest of us all ;)

With love - Technical department team <3
