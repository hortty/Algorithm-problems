#1028 - Figurinhas

import math
a = int(input())
vet = [""]*10
ric = 0
vic = 0
i=0
while(i<a):
    vet = input().split(' ')
    ric = int(vet[0])
    vic = int(vet[1])
    print(math.gcd(ric,vic))
    i+=1