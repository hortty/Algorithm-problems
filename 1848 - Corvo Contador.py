#Problem: 1848 - Corvo Contador

cont=0
valor=0
while(True):
    v = input()
    if(v=="caw caw"):
        cont+=1
        print(valor)
        valor=0
    elif(v=="---"):
        valor+=0
    elif(v=="--*"):
        valor+=1
    elif(v=="-*-"):
        valor+=2
    elif(v=="-**"):
        valor+=3
    elif(v=="*--"):
        valor+=4
    elif(v=="*-*"):
        valor+=5
    elif(v=="**-"):
        valor+=6
    elif(v=="***"):
        valor+=7
    if(cont==3):
        break