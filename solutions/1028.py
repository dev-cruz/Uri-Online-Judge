n = int(input())

for i in range(n):
    l = input().split(' ')
    a, b = int(l[0]), int(l[1])
    a, b = abs(a), abs(b)
    if a < b:
        menor = a
    else:
        menor = b

    j = menor
    while j <= 1:
        if a % j == 0 and a % j == 0:
            print(j)
            break
        j -= 1
