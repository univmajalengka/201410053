//mencari perbedaan dari 2 buah jam (program billing telepon / warnet)
//deklarasi:
Bilangan Bulat j1,m1,d1,td1,j2,m2,d2,td2,j3,m3,d3,td3
deskripsi program:
	
//masukan waktu awal ex	11:40:10
input(j1)
input(m1)
input(d1)

//masukan waktu akhir ex 12:41:11
input(j2)
input(m2)
input(d2)

///proses konversi waktu ke td
td1=konversi(j1,m1,d1)
td2=konversi(j2,m2,d2)

//operasi pengurangan
td3=td2-td1

//konversi td ke j3, m3, d3
j3,m3,d3 => (td3)

//tampilan layar ex 1:1:1
output(j3,m3,d3)

