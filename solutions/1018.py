notas_d = [100, 50, 20, 10, 5, 2, 1]
q_notas = []
def num_notas(valor, index):
    if index > 6:
        return
    if valor < notas_d[index]:
        q_notas.append(0)
        index += 1
        return num_notas(valor, index)
    q_notas.append((valor // notas_d[index]))
    valor %= notas_d[index]
    index+=1
    return num_notas(valor, index)

valor = int(input())
num_notas(valor, 0)
notas = q_notas
print(valor)
for i in range(len(notas_d)):
    print("%d nota(s) de R$ %d,00" %(notas[i], notas_d[i]))
