def main():
    linha = input().split(' ')
    n = int(linha[0])
    k = int(linha[1])
    names = []
    while n:
        name = input()
        names.append(name)        
        n -= 1
    names = sorted(names)
    print(names[k-1])

if __name__ == '__main__':
    main()