/*
 * Ejemplo de operador modulo
 * Por: Alexander Arroyo
 * Fecha: 8 de abril de 2022
 * 
 * Este es un programa para ejemplificar el uso básico del lengiaje C
 * y el microcontrolador ESP32CAM
 * 
 */

// Bibliotecas
#include <serial.h>;

// Constantes

// Variables
int dato = 0;

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() { //Inicio de void setup ()
  // Aquí va tu código
  Serial.begin(115200); //Inizialización del monitor serial
  Serial.println("Conexión iniciada");  //Mensaje de prueba
  delay (1000);

}// Fin de void setup

//Cuerpo del programa - Se ejecuta constantemente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  dato++;
  //dato = dato + 1;

  Serial.println(dato);
  delay(1000);

}//Fin de void loop

// Funciones del usuario
