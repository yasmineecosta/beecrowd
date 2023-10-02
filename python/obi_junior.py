# Jazz,Kola,Luna,Mobi,Nuti,Onda e Pong
# val1, val2 = [int(i) for i in input().split()]

# def soma_digitos(num):
#     soma = 0
#     while num>0:
#         soma += num % 10
#         # soma do digito menos significativo
#         num //= 10
#         # numero sem o digito menos significativo
#     return soma

# def contagem_e_soma(S, A, B):
#     contagem = 0
#     for num in range(A, B+1):
#         if soma_digitos(num) == S:
#             contagem += 1
#     return contagem

# S = int(input())
# A = int(input())
# B = int(input())

# print(contagem_e_soma(S, A, B))

def minima_diferenca_de_duplas(A,B,C,D):
    # duplas = [[A,B],[A,C],[A,D],[B,C],[B,D],[C,D]]
    # minima_diferenca = float('inf')
    # for dupla1, dupla2 in duplas:
    #     diferenca = abs(dupla1 + dupla2 - (A+B+C+D))
    #     minima_diferenca = min(minima_diferenca, diferenca)
    # return minima_diferenca
    dupla1 = B+C
    dupla2 = A+D
    return abs(dupla2 - dupla1)


A = int(input())
B = int(input())
C = int(input())
D = int(input())

print(minima_diferenca_de_duplas(A,B,C,D))