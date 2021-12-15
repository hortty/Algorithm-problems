# Problem: 1789 A Corrida de Lesmas

while True:
  try:
    a = int(input())
    maior=0
    c = [""]*a
    v = [0]*a
    c = input().split()
    maior=0
    for i in range(0,a):
        v[i] = int(c[i])
        if(i==0):
            maior=v[i]
        else:
            if(maior<v[i]):
                maior=v[i]
    if(maior<10):
        print(1)
    elif(maior>=10 and maior<20):
        print(2)
    else:
        print(3)
    
  except EOFError:
    break