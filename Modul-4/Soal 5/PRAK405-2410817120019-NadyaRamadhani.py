n, kelipatan = map(int, input("").split( ))
total = 0

for i in range (1, n+1):
    z = 0
    for j in range (i, 0, -1):
        z += j*kelipatan
        print(f"({j} * {kelipatan})", end=' ')
        if j>1:
            print(" + ", end=' ')

    print(f" = {z}")
    total += z

print(total)