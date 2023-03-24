


   

try :
   print("Enter T ")
   T = int(input())
   
   if T<1 and T>100:
        raise ValueError
   

     
   for i in range(T):
      
      
      print ("Enter N and M (separated by space) ")
      string = str(input()).strip()
      N = int(string[0])
      M= int(string[-1])
      
      if N<0 or N>1000:
           raise ValueError
        
   
      if M<0 or M>1000:
           raise ValueError
      
      print('Max numbers of people who can travel together is for test case ',i,' : ',N*5+M*7)
      
      
     
except ValueError:
      print("T must be between 1 and 100")
      print("N must be between 0 and 1000")
      print("M must be between 0 and 1000")
      exit()




