#include <bits/stdc++.h>
#include "SivitasAkademik.cpp"

using namespace std;

int main()
{
    SivitasAkademik data1, data2;

    // Input Data 1
    data1.setNik("123456789098765");
    data1.setName("Hans John");
    data1.setGender("Laki-laki");
    data1.setNim("2006945");
    data1.setFakultas("FPMIPA");
    data1.setProdi("Ilmu Komputer");
    data1.setUniv("Universitas Pendidikan Indonesia");
    data1.setEmail("hans@upi.edu");

    // Input Data 1
    data2.setNik("123456789098764");
    data2.setName("Jany Doe");
    data2.setGender("Perempuan");
    data2.setNim("2002871");
    data2.setFakultas("FPMIPA");
    data2.setProdi("Pendidikan Ilmu Komputer");
    data2.setUniv("Universitas Pendidikan Indonesia");
    data2.setEmail("jany@upi.edu");

    // Menampilkan Data
    cout << '\n'
         << "DATA MAHASISWA 1" << '\n';
    cout << "==============" << '\n';
    cout << "NIK              : " << data1.getNik() << endl;
    cout << "Nama             : " << data1.getName() << endl;
    cout << "Jenis Kelamin    : " << data1.getGender() << endl;
    cout << "NIM              : " << data1.getNim() << endl;
    cout << "Fakultas         : " << data1.getFakultas() << endl;
    cout << "Program Studi    : " << data1.getProdi() << endl;
    cout << "Asal Universitas : " << data1.getUniv() << endl;
    cout << "Email Edu        : " << data1.getEmail() << endl;

    cout << '\n'
         << "DATA MAHASISWA 2" << '\n';
    cout << "==============" << '\n';
    cout << "NIK              : " << data2.getNik() << endl;
    cout << "Nama             : " << data2.getName() << endl;
    cout << "Jenis Kelamin    : " << data2.getGender() << endl;
    cout << "NIM              : " << data2.getNim() << endl;
    cout << "Fakultas         : " << data2.getFakultas() << endl;
    cout << "Program Studi    : " << data2.getProdi() << endl;
    cout << "Asal Universitas : " << data2.getUniv() << endl;
    cout << "Email Edu        : " << data2.getEmail() << endl;
    return 0;
}