numbers = []
ordem = []

for i in range(3):
    numbers.append(int(input()))
    ordem.append(numbers[i])

    
for i in range(3):
    for j in range(2):
        if(ordem[j] > ordem[j+1]):
            aux = ordem[j]
            ordem[j] = ordem[j+1]
            ordem[j+1] = aux

for i in range(3):
    print(ordem[i])

print()

for i in range(3):
    print(numbers[i])