# Program Mengolah Data Mahasiswa
Program ini bertujuan untuk mengelola data nilai mahasiswa dengan membaca nama dan nilai, menentukan grade berdasarkan skor, mencari nilai tertinggi, serta menampilkan daftar nilai dan mahasiswa dengan nilai tertinggi dalam format “Last Name, First Name”.

## Struct studentType
Struct ini digunakan untuk menyimpan data tiap mahasiswa yang terdiri dari:
studentFName: nama depan mahasiswa.
studentLName: nama belakang mahasiswa.
testScore: nilai ujian.
grade: huruf nilai (A–F) yang akan diberikan berdasarkan skor.

## Fungsi readData()
Fungsi ini bertugas membaca input data mahasiswa dari pengguna. Langkah-langkah: Meminta pengguna memasukkan nama depan, nama belakang, dan nilai ujian kemudian menyimpan data ke dalam array students. Parameter students[] digunakan untuk menampung data, dan size menunjukkan jumlah mahasiswa yang akan diinput.

## Fungsi assignGrade()
Fungsi ini memberikan huruf grade untuk setiap mahasiswa berdasarkan nilai ujian (testScore):
A: 90–100
B: 80–89
C: 70–79
D: 60–69
F: < 60
Grade disimpan ke dalam atribut grade di struct mahasiswa.

## Fungsi findHighestScore()
Fungsi ini mencari nilai ujian tertinggi dari seluruh mahasiswa. Langkah-langkah: Menginisialisasi nilai tertinggi dengan nilai mahasiswa pertama, membandingkan dengan nilai mahasiswa lain menggunakan perulangan, mengembalikan nilai tertinggi sebagai hasil fungsi.

## Fungsi printAll()
Fungsi ini menampilkan seluruh data mahasiswa dalam bentuk tabel yang rapi. Langkah-langkah:
1. Menampilkan header kolom: nama, nilai, dan grade.
2. Mencetak setiap mahasiswa dengan format: Last Name, First Name (rata kiri, menggunakan setw() dan left untuk perataan).
3. Menampilkan nilai dan huruf grade sejajar agar mudah dibaca.
   
## Fungsi printHighest()
Fungsi ini menampilkan mahasiswa yang memiliki nilai tertinggi. Langkah-langkah: Menampilkan nilai tertinggi, mengecek setiap mahasiswa yang memiliki skor sama dengan nilai tertinggi, menampilkan nama dalam format “Last Name, First Name” secara rapi.

## Fungsi main()
Merupakan fungsi utama yang mengatur alur eksekusi program. Langkah-langkah:
1. Mendeklarasikan array students berukuran NUM_STUDENTS.
2. Memanggil readData() untuk membaca input mahasiswa.
3. Memanggil assignGrade() untuk memberikan huruf nilai.
4. Memanggil findHighestScore() untuk mencari nilai tertinggi.
5. Memanggil printAll() untuk menampilkan seluruh data mahasiswa.
6. Memanggil printHighest() untuk menampilkan mahasiswa dengan nilai tertinggi.
