leds_values = {
    "1": 2, "2": 5,
    "3": 5, "4": 4,
    "5": 5, "6": 6,
    "7": 3, "8": 7,
    "9": 6, "0": 6
}

n = int(input())

while n:
    num = input()
    total = 0
    for x in num:
        total += leds_values[x]
    print("%d leds" %(total))
    n -= 1
