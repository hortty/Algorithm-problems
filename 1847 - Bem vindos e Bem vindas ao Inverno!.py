#Problem: 1847 - Bem-vindos e Bem-vindas ao Inverno!

vet = [""]*3
vet = input().split()
a = int(vet[0])
b = int(vet[1])
c = int(vet[2])

if((b-a)<0):
    if((c-b)>=0):
        print(":)")
    else:
        if((b-a)<(c-b)):
            print(":)")
        else:
            print(":(")
elif((b-a)>0):
    if((c-b)<=0):
        print(":(")
    else:
        if((b-a)>(c-b)):
            print(":(")
        else:
            print(":)")
else:
    if((c-b)>0):
        print(":)")
    else:
        print(":(")