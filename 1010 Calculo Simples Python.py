"""
Problem: 1010 Cálculo Simples using Python 

Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
"""
vetor = input().split(" ")
vetor2 = input().split(" ")
a = int(vetor[0])
b = int(vetor[1])
c = float(vetor[2])

d = int(vetor2[0])
e = int(vetor2[1])
f = float(vetor2[2])
valor=(b*c)+(e*f)
print(f"VALOR A PAGAR: R$ {valor:.2f}")