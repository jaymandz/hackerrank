# Score: 20.00 out of 20 points
# https://www.hackerrank.com/challenges/compress-the-string/problem

from itertools import groupby

S = input()
for token, group in groupby(S):
    print('(%s, %s)' % (len(list(group)), token), end=' ')
