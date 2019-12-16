def main():
    arr = input().split()
    int_arr = []
    for i in arr:
        int_arr.append(int(i))
    if int_arr == sorted(int_arr, reverse=True):
        print('D')
    elif int_arr == sorted(int_arr):
        print('C')
    else:
        print('N')


if __name__ == '__main__':
    main()