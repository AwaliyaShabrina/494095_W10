// ------------------------------------------------------------
// Tugas: Struct and Union
// Chapter 9 - Programming Exercise No. 2
// Nama    : Awaliya Shabrina
// NIM     : 22/494095/TK/54174
// ------------------------------------------------------------
// Program ini mengelola data nilai mahasiswa dengan membaca 
// nama dan nilai, menentukan grade berdasarkan skor, mencari 
// nilai tertinggi, serta menampilkan daftar nilai dan mahasiswa 
// dengan nilai tertinggi dalam format “Last Name, First Name”.
// ------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Struct untuk menyimpan data mahasiswa
struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

// Konstanta jumlah mahasiswa
const int NUM_STUDENTS = 20;

// a. Fungsi untuk membaca data mahasiswa
void readData(studentType students[], int size) {
    cout << "Masukkan data " << size << " mahasiswa (FirstName LastName Score):\n";
    for (int i = 0; i < size; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ": ";
        cin >> students[i].studentFName >> students[i].studentLName >> students[i].testScore;
    }
}

// b. Fungsi untuk memberikan grade berdasarkan nilai
void assignGrade(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        int score = students[i].testScore;
        if (score >= 90)
            students[i].grade = 'A';
        else if (score >= 80)
            students[i].grade = 'B';
        else if (score >= 70)
            students[i].grade = 'C';
        else if (score >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }
}

// c. Fungsi untuk mencari nilai tertinggi
int findHighestScore(const studentType students[], int size) {
    int highest = students[0].testScore;
    for (int i = 1; i < size; i++) {
        if (students[i].testScore > highest)
            highest = students[i].testScore;
    }
    return highest;
}

// d. Fungsi untuk mencetak nama mahasiswa dengan nilai tertinggi
void printHighest(const studentType students[], int size, int highest) {
    cout << "\nNilai tertinggi: " << highest << endl;
    cout << "Mahasiswa dengan nilai tertinggi:\n";
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highest) {
            string fullName = students[i].studentLName + ", " + students[i].studentFName;
            cout << left << setw(25) << fullName << endl;
        }
    }
}

// Fungsi untuk menampilkan semua data mahasiswa
void printAll(const studentType students[], int size) {
    cout << "\nDaftar Nilai Mahasiswa:\n";
    cout << left << setw(25) << "Nama (Last, First)"
         << setw(10) << "Score"
         << setw(5) << "Grade" << endl;
    cout << string(40, '-') << endl;

    for (int i = 0; i < size; i++) {
        string fullName = students[i].studentLName + ", " + students[i].studentFName;
        cout << left << setw(25) << fullName
             << setw(10) << students[i].testScore
             << setw(5) << students[i].grade << endl;
    }
}

// Fungsi utama hanya berisi deklarasi dan pemanggilan fungsi
int main() {
    studentType students[NUM_STUDENTS];

    readData(students, NUM_STUDENTS);
    assignGrade(students, NUM_STUDENTS);
    int highest = findHighestScore(students, NUM_STUDENTS);

    printAll(students, NUM_STUDENTS);
    printHighest(students, NUM_STUDENTS, highest);

    return 0;
}
