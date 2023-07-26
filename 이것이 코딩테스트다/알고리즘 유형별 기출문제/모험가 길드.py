n = int(input())
array = list(map(int, input().split()))

array.sort()

count = 0
temp = 0
for i in array:
    temp += 1
    if temp >= i:
        count += 1
        temp = 0

print(count)

