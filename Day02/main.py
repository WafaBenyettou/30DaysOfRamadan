T = int(input());
for i in range(T):
    H = input().split(" ");
    N = input().split(" ");
    sum = 0;
    for j in range(int(H[0])):
        if(int(H[1]) < int(j)):
            sum += 1;
    print(sum); 