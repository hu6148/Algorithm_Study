s = input()

answer0 = 0
answer1 = 0

if s[0] == '1':
    answer0 += 1
else: 
    answer1 += 1

for i in range(len(s) - 1):
    if s[i] != s[i + 1]:
        if s[i + 1] == '1':
            answer0 += 1
        else:
            answer1 += 1

print(min(answer0, answer1))

