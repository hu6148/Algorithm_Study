from collections import deque
import sys

input = sys.stdin.readline

q= deque()
n = int(input())
k = int(input())

board = [[0] * (n + 1) for _ in range(n + 1)]
my = [[0] * (n + 1) for _ in range(n + 1)]
my[1][1] = 1


for i in range(k):
    a, b = map(int, input().split())
    board[a][b] = 1

l = int(input())
array = []
for _ in range(l):
    a, b = input().split()
    array.append((int(a), b))

time = 0 
q.append((1, 1))
my[1][1] = 1

dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]
x, y = 1, 1
direction_x = 0
direction_y = 0
rank = 0


while True:
    x = x + dx[direction_x]
    y = y + dy[direction_x]
    time += 1

    if ((x<1 or x>n) or (y<1 or y>n)) or my[x][y] == 1:
        break
    
    my[x][y] = 1
    q.append((x, y))

    if board[x][y] == 0:
        a, b = q.popleft()
        my[a][b] = 0
    else:
        board[x][y] = 0


    if rank == l:
        continue
    if time == array[rank][0]:
        if array[rank][1] == 'D':
            direction_x += 1
            direction_y += 1
            if direction_x == 4:
                direction_x = 0
            if direction_y == 4:
                direction_y = 0
        else:
            direction_x -= 1
            direction_y -= 1
            if direction_x == -1:
                direction_x = 3
            if direction_y == -1:
                direction_y = 3
        rank += 1
        
print(time)
