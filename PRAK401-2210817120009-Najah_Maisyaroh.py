angka, simbol = input().split()
angka = int(angka)
for i in range(1, 50 + 1):
    if (i % angka == 0):
        print(simbol, end=" ")
    else:
        print(i, end=" ")