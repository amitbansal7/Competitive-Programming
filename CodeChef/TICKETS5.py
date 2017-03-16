# codechef - amitbansal7
# not working if string has more the 6 letters..
 
def tickets(t):

  
 
  for i in range(t):
    f=0
    ticket = str(input())
    A = list(ticket)
 
    length =len(list(ticket))
    length = int(length)
    count = length/2
    count = int(count)
    
 
    if(length%2==0):
 
      if length==2 and A[0]!=A[1]:
          print('YES')
 
      else:
          
        f =1
        for j in range(0,count,2):
          
 
          if A[j] == A[j+2]:
            f = f+1;
 
        if f == count:
          print('YES')
 
        else:
          print('NO')
 
 
    else:
        print('NO')
        
        
  return 0    
        
t = int(input())
 
if 1 <= t<= 100:
   tickets(t)        
 