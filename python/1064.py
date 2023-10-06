def positive(num):
    if(num > 0):
        return 1
    else:
        return 0


def main():
  numbers = []
  sum = 0;
  aux = 0;
  
  for i in range(6):
    numbers.append(float(input()))
    aux += positive(numbers[i])
    if(positive(numbers[i])):
      sum += numbers[i]

  print(f"{aux} valores positivos")
  print(f"{sum/aux:.1f}")


main()