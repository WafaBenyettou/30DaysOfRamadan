
def how_Much_We_KILL(N, K, heights):
    count = 0  
    for i in range(N):
        if heights[i] > K:  
            if i == 0 or heights[i-1] <= K:  
                count += 1  
    return count  

T = int(input("cases : "))

for t in range(T):
    
    N= int(input("N:"))
    K= int(input("K:"))
    
    heights_string = input("heights : ")
    
    heights = heights_string.split(" ")
    
    heights = list(map(int,heights))
    
    
    min_players = how_Much_We_KILL(N, K, heights)

    
    print(min_players)