a = input()
length = len(a) // 2
sum1 = 0
sum2 = 0
for i in range(length):
    sum1 += int(a[i])

for i in  range(length):
    sum2 += int(a[i + length])

if sum1 == sum2:
    print('LUCKY')
else:
    print('READY')