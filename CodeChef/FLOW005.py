t = int(input())


for i in range(t):
    count = 0
    rs = int(input())

    while(rs>0):

      if rs >= 100:
        rs = rs -100
        count +=1

      elif rs >= 50:
        rs = rs -50
        count +=1

      elif rs >= 10:
        rs = rs -10
        count +=1

      elif rs >= 5:
        rs = rs -5
        count +=1

      elif rs >= 2:
        rs = rs - 2
        count += 1

      elif rs >= 1:
        rs = rs -1
        count +=1

    print(count,"\n")


