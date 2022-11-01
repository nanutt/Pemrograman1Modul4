bil1, bil2 = map(int, input().split())
if(bil1 < bil2):
    a = 1
    for i in range(bil1, bil2+1):
        x= bil2 - a + 1
        a +=  1
        if (i == bil1):
            print(end="")
        else:
            print(" - ", end=" ")
        print(f"{i} {x}", end=" ")
else:
    a = 0
    for i in reversed(range(bil2, bil1 + 1)):
        x = bil2 + a
        a += 1
        if (i == bil1):
            print(end="")
        else:
            print(" - ", end=" ")
        print(f"{i} {x}", end=" ")