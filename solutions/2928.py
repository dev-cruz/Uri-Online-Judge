def main():
    n = int(input())
    lake = []
    for i in range(n):
        tmp = input()
        lake.append(tmp)
    pulos = metros = i = 0
    while i < n:
        if '.' in lake[i]:
            while '.' in lake[i] and i < n:
                metros += 1
                i += 1
            if metros < 3:
                pulos += 1
                metros = 0
            else:
                print('N')
                return
        i += 1
    print(pulos)


if __name__ == '__main__':
    main()
    
    