def pair_or_odd(num):
    if num % 2 == 0:
        return 1
    else:
        return 0

def pos_or_neg(num):
    if num > 0:
        return 1
    elif(num < 0):
        return 0
    else:
        return -1

def main():
    pairs = 0
    odds = 0
    pos = 0
    neg = 0
    
    for i in range(5):
        num = int(input())
        if(pair_or_odd(num)):
            pairs += 1
        else:
            odds += 1

        if pos_or_neg(num) == 1:
            pos += 1
        elif pos_or_neg(num) == 0:
            neg += 1
  
    print(f"{pairs} valor(es) par(es)"); 
    print(f"{odds} valor(es) impar(es)");
    print(f"{pos} valor(es) positivo(s)");
    print(f"{neg} valor(es) negativo(s)");
  
main()
