n, m = map(int, input().split())
a, b, direction = map (int, input().split())

visited = [[0]* m for _ in range(n)]
visited[a][b] = 1

map_array = []

for _ in range(n):
    map_array.append(list(map(int, input().split())))

da = [-1, 0, 1, 0]
db = [0, 1, 0, -1]

def turn_left():
    global direction
    direction -= 1
    if direction == -1:
        direction = 3

answer=1
turn_time=0

while True:
    turn_left()
    na = a + da[direction]
    nb = b + db[direction]

    if visited[na][nb] == 0 and map_array[na][nb] == 0:
        visited[na][nb]=1
        a=na
        b=nb
        answer += 1
        turn_time = 0
        continue
    else:
        turn_time+=1

    if turn_time==4:
        na = a - da[direction]
        nb = b - db[direction]

        if map_array == 0:
            a = na
            b = nb
        else:
            break

        turn_time=0

print(answer)


