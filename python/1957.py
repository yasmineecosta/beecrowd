def decToHex(dec):
  hex = ""
  while dec>0:
    r = dec % 16

    if r < 10:
        digit = str(r)
    else:
        digit = chr(ord('A') + (r - 10))
        
    hex = digit + hex
    dec //= 16

  return hex


V = int(input())
print(decToHex(V))


  

