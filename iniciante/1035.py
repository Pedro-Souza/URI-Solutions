t = input()

a, b, c, d = t.split()
if(b > c and d > a and (c + d) > (a + b) and int(c) > 0 and int(d) > 0):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")