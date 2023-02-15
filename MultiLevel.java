/*  Saya [Amirah Dzatul Himmah_2002871] mengerjakan latihan praktikum 2
    dalam mata kuliah DPBO untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
*/
class Human {

    private String nik, name, gender;

    Human(String nik_h, String name_h, String gender_h) {
        nik = nik_h;
        name = name_h;
        gender = gender_h;
    }

}

class Mahasiswa extends Human {
    String nim, fakultas, prodi;

    Mahasiswa(String nik_h, String name_h, String gender_h, String nim_h, String prodi_h, String fakultas_h) {
        super(nik_h, name_h, gender_h);
        nim = nim_h;
        fakultas = fakultas_h;
        prodi = prodi_h;
    }
}

class SivitasAkademik extends Mahasiswa {
    String asal_univ, email_edu;

    SivitasAkademik(String nik_h, String name_h, String gender_h, String nim_h, String prodi_h, String fakultas_h,
            String asal_univ_h, String email_edu_h) {
        super(nik_h, name_h, gender_h, nim_h, prodi_h, fakultas_h);
        asal_univ = asal_univ_h;
        email_edu = email_edu_h;
    }
}

public class MultiLevel {

    public static void main(String args[]) {
        SivitasAkademik sivitas1 = new SivitasAkademik("123", "ami", "perempuan", "2002871", "ilkom", "fpmipa", "upi",
                "ami@upi.edu");
        SivitasAkademik sivitas2 = new SivitasAkademik("321", "sar", "laki-laki", "2002939", "pilkom", "fpips", "itb",
                "sar@itb.ad.id");

        System.out.println("Sivitas Akademik 1 : ");
        System.out.println("NIK : " + sivitas1.nik_h);
    }

}
