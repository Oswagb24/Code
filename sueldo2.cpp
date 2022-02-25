//Oswaldo Rodriguez Lucio IA187
#include <iostream>
using namespace std;

int main()
 {
  int horas;
  float sueldo;
  std::cout << "Ingrese horas trabajadas: ";
  cin >> horas;
  if (horas <= 40) 
  {
    sueldo = 45 * horas;
  } 
  else {
    // Lo que gana en 40 horas 
    sueldo = 45 * 40;
    // Restante 
    int horasExtra = horas - 40;
    float sueldoExtra = horasExtra * 22;
    sueldo += sueldoExtra;
  }

  cout << "Sueldo: " << sueldo << "\n";
  if (sueldo <= 1800) 
  {
    float sueldoSinAhorro = sueldo * 0.9;
    cout << "Sueldo final: " << sueldoSinAhorro;
  } 
  else
   {
    float sueldoConRetencion = sueldo * 0.85;
    cout << "Sueldo con retencion: " << sueldoConRetencion;
  }
return 0; }
