# 9512_g1ej6
Implementar una clase arreglo, con las operaciones para poder ejecutar este  programa:

int main(){
  7         //declaraciones;
  8         Arreglo a(7), b(12);
  9 
 10 
 11         a[3] = 25.3;
 12         a[0] = 123.456;
 13         b[11] = 349;
 14         b[2] = 32.8;
 15         Arreglo c(a);
 16         //a[2] = a[0] + a[1];
 17         //arreglo b = a;
 18         std::cout<< a[0] << "\t" << a[3] << std::endl;
 19         std::cout<< c[0] << "\t" << c[3] << std::endl;
 20         std::cout<< "a antes de copia: " << a[2] << std::endl;
 21         std::cout<< "b: " << b[2] << b[10] << b[11] <<  std::endl;
 22         a = b;
 23         c = c = a;
 24         std::cout<< "a después de copia: " << a[2] << std::endl;
 25 
 26   return 0;
 27 }

