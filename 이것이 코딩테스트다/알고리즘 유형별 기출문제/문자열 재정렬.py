import heapq
a = input()
sum = 0
q = []
for i in a:
    if '0' <= i <='9':
        sum += int(i)
    else:
        heapq.heappush(q, i)

print(''.join(q) + str(sum))
