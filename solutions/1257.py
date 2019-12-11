from string import ascii_letters as asc

def get_value(string, position):
    alpha = asc[:26]
    total = 0
    for i in range(len(string)):
        total += alpha.index(string[i])
        total += position
        total += i
    return total

n = int(input())

while n:
    l = int(input())
    position = 0
    total = 0
    while l:
        string = input().lower()
        total += get_value(string, position)
        position += 1
        l -= 1
    print(total)
    n -= 1 