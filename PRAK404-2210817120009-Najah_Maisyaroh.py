loop = 1
while loop == 1:
    print("Pilih program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit")
    menu = int(input("Masukkan pilihan : "))
    if menu == 1: 
        pilihan = "penjumlahan"
        bil1=float(input ("Masukkan nilai pertama : "))
        bil2=float(input ("Masukkan nilai kedua   : "))
        hasil = bil1 + bil2
        print("Hasil",pilihan, "antara %0.2f dengan %0.2f adalah %0.2f \n" %(bil1, bil2, hasil))
    elif menu == 2: 
        pilihan = "pengurangan" 
        bil1=float(input ("Masukkan nilai pertama : "))
        bil2=float(input ("Masukkan nilai kedua   : "))
        hasil = bil1 - bil2
        print("Hasil",pilihan, "antara %0.2f dengan %0.2f adalah %0.2f \n" %(bil1, bil2, hasil))
    elif menu == 3: 
        pilihan = "perkalian"
        bil1=float(input ("Masukkan nilai pertama : "))
        bil2=float(input ("Masukkan nilai kedua   : "))
        hasil = bil1 * bil2
        print("Hasil",pilihan, "antara %0.2f dengan %0.2f adalah %0.2f \n" %(bil1, bil2, hasil))
    elif menu == 4:
        pilihan = "pembagian"
        bil1=float(input ("Masukkan nilai pertama : "))
        bil2=float(input ("Masukkan nilai kedua   : "))
        hasil = bil1 / bil2
        print("Hasil",pilihan, "antara %0.2f dengan %0.2f adalah %0.2f \n" %(bil1, bil2, hasil))
    elif menu == 5:
        nama = "Najah Maisyaroh"
        print(f"Terimakasih, telah menggunakan kalkulator {nama}")
        loop = 0
        break
    else:
        print("Input anda salah, silahkan coba lagi \n")
    continue