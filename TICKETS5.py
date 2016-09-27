# not working 
# codechef - amitbansal7
t = int(input())

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
        for j in range(2,count):
          

          if A[j] == A[j+1]:
            f = f+1;

        if f == count/2:
          print('YES')

        else:
          print('NO')


    else:
        print('NO')


