print("Pilih Program")
print("1. Penjumlahan")
print("2. Pengurangan")
print("3. Perkalian")
print("4. Pembagian")
print("5. Exit")
pilihan = int(input("Masukkan Pilihan: "))

if pilihan==5:
    print("Terimakasih, telah menggunakan kalkulator NADYARAMADHANI")
elif pilihan<1 or pilihan>5:
    print("Input anda salah, silahkan coba lagi")
else:
    nil1 = float(input("Masukkan Nilai Pertama: "))
    nil2 = float(input("Masukkan Nilai Kedua: "))
    
    if pilihan==1:
        print(f"Hasil penjumlahan antara {nil1:.2f} dengan {nil2:.2f} adalah {nil1+nil2:.2f}")
    elif pilihan==2:
        print(f"Hasil pengurangan antara {nil1:.2f} dengan {nil2:.2f} adalah {nil1-nil2:.2f}")
    elif pilihan==3:
        print(f"Hasil perkalian antara {nil1:.2f} dengan {nil2:.2f} adalah {nil1*nil2:.2f}")
    elif pilihan==4:
        if nil2==0:
            print("Tidak dapat dibagi dengan nol")
        else:
            print(f"Hasil pembagian antara {nil1:.2f} dengan {nil2:.2f} adalah {nil1/nil2:.2f}")