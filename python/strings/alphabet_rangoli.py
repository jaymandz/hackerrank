# Score: 20.00 out of 20 points
# https://www.hackerrank.com/challenges/alphabet-rangoli/problem

def print_rangoli_row(size, ri):
    for i in range(size - 1, 0, -1):
        if ri - i <= 0: print('--', end='')
        else: print(chr(97 + size - (ri - i))+'-', end='')
    print(chr(97 + size - ri), end='')
    for i in range(1, size):
        if ri - i <= 0: print('--', end='')
        else: print('-'+chr(97 + size - (ri - i)), end='')
    print()

def print_rangoli(size):
    for r in range(1, size): print_rangoli_row(size, r)
    print_rangoli_row(size, size)
    for r in range(size - 1, 0, -1): print_rangoli_row(size, r)

if __name__ == '__main__':
    size = int(input())
    print_rangoli(size)
