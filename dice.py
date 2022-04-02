test=int(input())
for x in range(test):
  n=int(input())
  list1 = list(map(int,input().split()))[:n]
  start=0
  count=0
  for i in sorted(list1):
    if i>start:
      count+=1 
      start+=1   
  print('Case #'+str(x+1)+':',count)
