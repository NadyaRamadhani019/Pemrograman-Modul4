angka1, angka2 = map(int, input("").split())

if angka1<angka2:
    for i, j in zip(range(angka1, angka2+1), range(angka2, angka1-1, -1)):
        print(f"{i} {j}", end=' ')
        if i<angka2 or j>angka1:
            print("-", end=' ')
else:
    for i, j in zip(range(angka1, angka2-1, -1), range(angka2, angka1+1)):
        print(f"{i} {j}", end=' ')
        if i>angka2 or j<angka1:
            print("-", end=' ')