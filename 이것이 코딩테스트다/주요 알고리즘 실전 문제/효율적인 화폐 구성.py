n, m = map(int, input().split())

d = [1e9] * (m+1)
d[0] = 0

money = []
for i in range(n):
    money.append(int(input()))


for i in range(n):
    for j in range(money[i], m+1):
        if d[j - money[i]] != 1e9:
            d[j] = min(d[j], d[j-money[i]] + 1)

if d[m] != 1e9:
    print(d[m])
else:
    print(int(-1))