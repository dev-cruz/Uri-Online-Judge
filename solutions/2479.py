
def main():
    n = int(input())
    kids = []
    behaved = 0
    not_behaved = 0
    for x in range(n):
        name = input()
        if name[0] == '+': 
            behaved += 1
        else:
            not_behaved += 1
        kids.append(name[2:])
    kids = sorted(kids)
    for i in kids:
        print(i)
    print("Se comportaram: %d | Nao se comportaram: %d" %(behaved, not_behaved))


if __name__ == '__main__':
    main()