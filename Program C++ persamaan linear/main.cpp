#include <iostream>

using namespace std;

int main()
{
 float Ax, Ay, Bx, By, m, c, x, y;
 // contoh dari persamaan linear : y=2x-4 / 2y+5x=7
    // Grafik y = 2x-4 , m=(y2-y1)/(x2-x1) ---> untuk gradien mal
    // garis lururs , y-y1=m(x-x1)

 cout << "==== PROGRAM SISTEM PERSAMAAN LINEAR ====\n";
 cout << "Nama : Rosmala risa\n\n\n";
 cout << "Persamaan linear y = mx + c\n\n";
 cout << "Masukkan Titik Ax : "; cin  >> Ax;
 cout << "Masukkan Titik Ay : "; cin  >> Ay;
 cout << "Masukkan Titik Bx : "; cin  >> Bx;
 cout << "Masukkan Titik By : "; cin  >> By;
 cout << "Masukkan Nilai x  : "; cin  >> x;

 // diketahui dua buah titik (4,5) dan (6,7) dan nilai x = 2
 // m=(7-5)/(6-4)=1 || c=5-(1x4)=1
 // persamaan garis : y = mx+c =1x+1
 m = ((By-Ay)/(Bx-Ax));
 c = Ay - (m*Ax);
 y = m*x + c;

 cout << "\nm = " << m;
 cout << "\nc = " << c;
 cout << "\nPersamaan Linear y = " << m << " x + " << c;
 cout << "\nUntuk x = " << x << " maka nilai y = " << y;
 cout << "\n======== SELESAI BEB ========";
 return 0;
}
