n = int(input())
resp = input()
for i in range(n):
    events = int(input())
    if events == 1:
        if resp == 'A':
            resp = 'B'
        elif resp == 'B':
            resp = 'A'
        elif resp == 'C':
            resp = 'C'
    elif events == 2:
        if resp == 'A':
            resp = 'A'
        elif resp == 'B':
            resp = 'C'
        elif resp == 'C':
            resp = 'B'
    elif events == 3:
        if resp == 'A':
            resp = 'C'
        elif resp == 'B':
            resp = 'B'
        elif resp == 'C':
            resp = 'A'

print(resp)

