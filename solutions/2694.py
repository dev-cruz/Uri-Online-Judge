

def main():
    n = int(input())
    while n:
        linha = input()
        nums = ''
        for x in linha:
            if x.isdigit():
                nums += x
            else:
                nums += ' '
        nums = nums.split(' ')
        resp = 0
        for x in nums:
            if x != '':
                resp += int(x)
        print(resp)
        n -= 1    


if __name__ == "__main__":
    main()