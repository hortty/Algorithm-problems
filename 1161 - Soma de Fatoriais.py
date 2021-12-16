#Problem: 1161 - Soma de Fatoriais

i = 1
j = 1
vet = [""]*2
soma=1
soma2=1
while(True):
    try:
        vet = input().split()
        soma=1
        soma2=1
        i = int(vet[0])
        j = int(vet[1])
        if(i==0 or j==0):
            if(i==0):
                soma=1
            if(j==0):
                soma2=1
        while(i>1 or j>1):
            if(i>1):
                soma=(soma*i)
                i-=1
            if(j>1):
                soma2=(soma2*j)
                j-=1
        print(soma+soma2)
            
    except EOFError:
        break