/*
   PROGRAMA K1
*/


#include "datos_entrenamiento.h" //en doble comilla estan almacenadas en una carpeta local
#include "datos_test.h"
int col = 0;
int fila = 0;
float distancia1;
float distancia2;
float distancia3;
float distanciamenor = 1000;
float distanciamenor1 = 1000;
int k=4;

void setup() {
  Serial.begin(9600);
}

void loop() {

  //primero();
  segundo();
}

void primero() {
  for (int fila = 0 ; fila < 50; fila++) { //contador filas (for lento)
    for (int col = 0 ; col < 5; col++) { //contador columnas (for rapido)
      Serial.print(matriz [fila][col]); //imprime dato matriz
      Serial.print(" , "); //separador dato
      delay(25);
    }
    col = 0; //reinicio de colmunas
    Serial.println(" ");
  } //carac en blanco y avance de lines
}



void segundo() {
  for (; fila < 50; fila++) { //contador filas (for lento)
    distancia1 = sqrt(pow((matriz[fila][0] - prueba[1][0]), 2) +
                      pow((matriz[fila][1] - prueba[1][1]), 2) +
                      pow((matriz[fila][2] - prueba[1][2]), 2) +
                      pow((matriz[fila][3] - prueba[1][3]), 2));
    Serial.println(distancia1);
    distancia2 = sqrt(pow((matriz[fila + 1][0] - prueba[1][0]), 2) +
                      pow((matriz[fila + 1][1] - prueba[1][1]), 2) +
                      pow((matriz[fila + 1][2] - prueba[1][2]), 2) +
                      pow((matriz[fila + 1][3] - prueba[1][3]), 2));
    Serial.println(distancia2);
    distancia3 = sqrt(pow((matriz[fila + 2][0] - prueba[1][0]), 2) +
                      pow((matriz[fila + 2][1] - prueba[1][1]), 2) +
                      pow((matriz[fila + 2][2] - prueba[1][2]), 2) +
                      pow((matriz[fila + 2][3] - prueba[1][3]), 2));
    Serial.println(distancia3);

    //pow es valor y exponente, el sprt es para raiz cuadrada
    if (distancia1 < distancia2 && distancia2 < distancia3 && distancia1 < distancia3)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia2 < distancia1 && distancia2 < distancia3 && distancia3 < distancia1)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia2 < distancia1 && distancia3 < distancia2 && distancia3 < distancia1)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
    }
    if (distancia2 < distancia1 && distancia2 < distancia3 && distancia1 < distancia3)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia3 < distancia2 && distancia3 < distancia1 && distancia1 < distancia2)
    {
      Serial.println("**********************************");
      Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
    if (distancia1 < distancia2 && distancia3 < distancia2 && distancia1 < distancia3)
    {
      Serial.println("**********************************");
       Serial.println("LA FLOR ES LA NUMERO: ");
      Serial.println(matriz[fila][4]);
      Serial.println("**********************************");
        delay(1000);
    }
  }
}

/*if (distancia2 < distanciamenor1 )
  {
  distanciamenor1 = distancia2;

  Serial.println("**********************************");
  Serial.println(matriz[fila][4]);
  }*/





