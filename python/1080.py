number = []
number.append(int(input()))
bigger = number[0]
position = 1

for i in range(1, 100):
    number.append(int(input()))
    if number[i] > bigger:
        bigger = number[i]
        position = i+1

print(f"{bigger}\n{position}")
