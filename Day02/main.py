T = input()
H = input().split(" ");
N = input().split(" ");
sum = 0;
for i in N:
    if(int(H[1])<=int(i)):
        sum += 1;
print(sum);
