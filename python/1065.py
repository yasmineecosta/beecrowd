def is_pair(num):
    if(num % 2 == 0):
        return 1
    else:
        return 0
    
def main():
  number = []
  pairs = 0;
  for i in range(5):
    number.append(int(input()))
    if(is_pair(number[i]) == 1):
        pairs += 1

  print(f"{pairs} valores pares");  
  

main()

