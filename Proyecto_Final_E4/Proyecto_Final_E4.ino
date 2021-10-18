///CODIGO DE FUNCIONAMIENTO
char leer; // variable para almacenamiento de caracteres
int fila[]={2,3,4,5,6,7};
int col[]={9,10,11,12};
int tiempo= 0.1;//para el tiempo en los for
int timer = 0.001;//para el timepo en los delay
const int BOTON1 = 8;//para habilitar el boton como entrada
const int BOTON2 = 13;//para habilitar el boton como entrada
const int BOTON3 = 14;//para habilitar el boton analogico A0 como entrada
const int BOTON4 = 15;//para habilitar el boton analogico A1 como entrada

void setup(){
  Serial.begin(9600);  // inicialización del puerto serial para la comunicación a 9600 baudios

  for(int i= 0; i<=3; i++)
  {
    pinMode(col[i], OUTPUT);
  }
  for(int i=0; i<=5; i++)
   {
    pinMode(fila[i], OUTPUT);
   }
//PARA QUE TODO ESTE APAGADO AL PRINCIPIO
    for(int i= 0; i<=3; i++)
    {
    digitalWrite(col[i], HIGH);
    }
  for(int i= 0; i<=5; i++)
   {
    digitalWrite(fila[i], LOW);
   }
}
void limpiar()//PARA LIMPIAR LA MATRIZ 
{
  for(int i=0; i<=5000; i++)
  {
  for(int i= 0; i<=3; i++)
    {
    digitalWrite(col[i], HIGH);
    }
  for(int i= 0; i<=5; i++)
   {
    digitalWrite(fila[i], LOW);
   }
  }
}

void LETRA_A()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
      delay(tiempo);
    }
    for(int i=1; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_B()
{  
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    { 
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=3; i<=3; i++)
    { 
      digitalWrite(fila[0],LOW);
      digitalWrite(fila[1],HIGH);
      digitalWrite(fila[2],LOW);
      digitalWrite(fila[3],HIGH);
      digitalWrite(fila[4],HIGH);
      digitalWrite(fila[5],LOW);
      digitalWrite(col[i],LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }  
    for(int i=0; i<=5; i++)
    { 
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo); 
      digitalWrite(fila[i], LOW);
    }   
  }
}

void LETRA_C()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_D()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }  
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    } 
  }
}

void LETRA_E()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_F()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_G()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[4], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[4], LOW);
  }
}

void LETRA_H()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_I()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_J()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=1; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], LOW);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_K()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=2; i<=3; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[i], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(col[2], LOW);
      digitalWrite(fila[1], HIGH);
      delay(tiempo);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[4], HIGH);
      delay(tiempo);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[4], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[0], HIGH);
      delay(tiempo);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[5], LOW);
    
  }
}

void LETRA_L()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_M()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[2], HIGH);
      digitalWrite(col[2], LOW);
      delay(tiempo);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[2], HIGH);
  }
}

void LETRA_N()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=3; i<=4; i++)
    {
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], LOW);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[5], LOW);

      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      digitalWrite(fila[i], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_O()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_P()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      digitalWrite(fila[i], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_Q()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    digitalWrite(col[0], HIGH);
    digitalWrite(fila[5], HIGH);
    digitalWrite(col[3], LOW);
    digitalWrite(fila[4], HIGH);
    digitalWrite(col[2], LOW);
    delay(tiempo);
    digitalWrite(fila[5], LOW);
    digitalWrite(col[3], HIGH);
    digitalWrite(fila[4], LOW);
    digitalWrite(col[2], HIGH);
  }
}
void LETRA_R()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      digitalWrite(fila[i], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    digitalWrite(fila[5], HIGH);
    digitalWrite(col[3], LOW);
    delay(tiempo);
    digitalWrite(fila[5], LOW);
    digitalWrite(col[3], HIGH);
    
    digitalWrite(fila[4], HIGH);
    digitalWrite(col[2], LOW);
    delay(tiempo);
    digitalWrite(fila[4], LOW);
    digitalWrite(col[2], HIGH);
  }
}
void LETRA_S()
{
  for(int i=0; i<=5000; i++)
  {
     for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=3; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[0], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[3], HIGH);

      digitalWrite(fila[1], HIGH);
      digitalWrite(col[0], LOW);
      delay(tiempo);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[0], HIGH);

      digitalWrite(fila[5], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
  }
}

void LETRA_T()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_U()
{
  for(int i=0; i<=5000; i++)
  {

     for(int i=0; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
  }
}
void LETRA_V()
{
  for(int i=0; i<=5000; i++)
  {

     for(int i=0; i<=3; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], HIGH);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
  }
}
void LETRA_W()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], HIGH);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[3], HIGH);
      digitalWrite(col[2], LOW);
      delay(tiempo);
      digitalWrite(fila[3], LOW);
      digitalWrite(col[2], HIGH);
  }
}
void LETRA_X()
{
  for(int i=0; i<=5000; i++)
  {

    for(int i=0; i<=1; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=4; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
  }
}

void LETRA_Y()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW); 
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], HIGH);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
     for(int i=0; i<=1; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(tiempo);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[1], HIGH);
  }
}
void LETRA_Z()
{
  for(int i=0; i<=5000; i++)
  {
     for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(tiempo);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[3], LOW);
      digitalWrite(fila[1], HIGH);
      delay(tiempo);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[2], HIGH);
      delay(tiempo);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[3], HIGH);
      delay(tiempo);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[3], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[4], HIGH);
      delay(tiempo);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[4], LOW);
    }
  }
}
//Letras Minusculas
void LETRA_a()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[3], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[3], LOW);
      digitalWrite(col[0], HIGH);

      //digitalWrite(fila[1], HIGH);
      //digitalWrite(col[0], LOW);
      //delay(0.1);
      //digitalWrite(fila[1], LOW);
      //digitalWrite(col[0], HIGH);

      digitalWrite(fila[4], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[0], HIGH);
  }
}
void LETRA_b()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[4], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[3], HIGH);
  }
}
void LETRA_c()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=3; i<=4; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_d()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[4], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[0], HIGH);
  }
}
void LETRA_e()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=4; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[3], HIGH);

      digitalWrite(fila[3], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[3], LOW);
      digitalWrite(col[3], HIGH);

      //digitalWrite(fila[5], HIGH);
      //digitalWrite(col[3], LOW);
      //delay(0.1);
      //digitalWrite(fila[5], LOW);
      //digitalWrite(col[3], HIGH);

  }
}
void LETRA_f()
{
  for(int i=0; i<=5000; i++)
  {
   for(int i=0; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_g()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=4; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[2], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[0], HIGH);


  }
}
void LETRA_h()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[4], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[3], HIGH);

      digitalWrite(fila[5], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[3], HIGH);
  }
}
void LETRA_i()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=2; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[0], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[1], HIGH);
  }
}
void LETRA_j()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=2; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], LOW);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[0], HIGH);
      digitalWrite(col[2], LOW);
      delay(0.1);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[2], HIGH);

      digitalWrite(fila[5], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[1], HIGH);

      digitalWrite(fila[4], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[0], HIGH);
  }
}
void LETRA_k()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=2; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[3], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[3], LOW);
      digitalWrite(col[1], HIGH);

      digitalWrite(fila[4], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[1], HIGH);
  }
}
void LETRA_l()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_m()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[4], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[1], HIGH);

  }
}
void LETRA_n()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=0; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=3; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }

  }
}
void LETRA_o()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=3; i<=4; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_p()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[3], HIGH);
  }
}
void LETRA_q()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[2], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[0], HIGH);
  }
}
void LETRA_r()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=2; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[2], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[1], HIGH);
  }
}
void LETRA_s()
{
  for(int i=0; i<=5000; i++)
  {
     for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[3], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[4], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[4], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[5], LOW);
    }
  }
}
void LETRA_t()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[5], HIGH);
      digitalWrite(col[2], LOW);
      delay(0.1);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[2], HIGH);
  }
}
void LETRA_u()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=4; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_v()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], HIGH);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=4; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_w()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], HIGH);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=2; i<=5; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[3], HIGH);
      digitalWrite(col[2], LOW);
      delay(0.1);
      digitalWrite(fila[3], LOW);
      digitalWrite(col[2], HIGH);

  }
}
void LETRA_x()
{


  for(int i=0; i<=5000; i++)
  {
    
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
     for(int i=3; i<=4; i++)
    {
  
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], LOW);
      digitalWrite(col[2], LOW);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
  }
}
void LETRA_y()
{
  for(int i=0; i<=5000; i++)
  {
     for(int i=0; i<=3; i++)
    {
      digitalWrite(col[3], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[3], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[4], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[4], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[5], LOW);
    }
  } 
}
void LETRA_z()
{
  for(int i=0; i<=5000; i++)
  {
     for(int i=1; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[3], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[3], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[4], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[4], LOW);
    }
  }  
}
//Numeros 
void LETRA_1()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], LOW);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[1], LOW);
      digitalWrite(fila[0], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[1], LOW);
    }
  }
}
void LETRA_2()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[0], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[3], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[4], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[4], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[5], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[5], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[0], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[0], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[5], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[5], LOW);
    }
  }
}
void LETRA_3()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[0], LOW);
      digitalWrite(fila[0], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[0], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[3], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[4], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[4], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[5], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[0], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[0], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[0], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[5], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[5], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[2], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[2], LOW);
    }
    
  }
}
void LETRA_4()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], HIGH);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[2], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[2], LOW);
      
      digitalWrite(col[0], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[3], LOW);
    }
  }
}
void LETRA_5()
{
  for(int i=0; i<=5000; i++)
  {
     for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=3; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[0], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[0], HIGH);
      
      digitalWrite(fila[0], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[0], LOW);
      digitalWrite(col[3], HIGH);

      digitalWrite(fila[1], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[0], HIGH);

      digitalWrite(fila[2], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[0], HIGH);

      digitalWrite(fila[5], HIGH);
      digitalWrite(col[0], LOW);
      delay(0.1);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], HIGH);
  }
}
void LETRA_6()
{
  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=1; i<=4; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[0], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], HIGH);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
      digitalWrite(fila[4], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);

      digitalWrite(fila[3], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[3], LOW);
  }
}
void LETRA_7()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }

      digitalWrite(fila[1], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[1], LOW);
      digitalWrite(col[3], HIGH);
      
      digitalWrite(fila[2], HIGH);
      digitalWrite(col[2], LOW);
      delay(0.1);
      digitalWrite(fila[2], LOW);
      digitalWrite(col[2], HIGH);

      digitalWrite(fila[3], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[3], LOW);
      digitalWrite(col[1], HIGH);

      digitalWrite(fila[4], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[4], LOW);
      digitalWrite(col[1], HIGH);

      digitalWrite(fila[5], HIGH);
      digitalWrite(col[1], LOW);
      delay(0.1);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[1], HIGH);
  }
}
void LETRA_8()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], HIGH);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=1; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[0], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[3], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[4], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[4], LOW);
      
      digitalWrite(col[3], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[3], LOW);

      digitalWrite(col[3], LOW);
      digitalWrite(fila[4], HIGH);
      delay(0.1);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[4], LOW);
    }
  }
}

void LETRA_9()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=0; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], HIGH);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], LOW);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[0], LOW);
      digitalWrite(fila[1], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[1], LOW);

      digitalWrite(col[0], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[0], HIGH);
      digitalWrite(fila[2], LOW);
    }
  }
}
void LETRA_0()
{

  for(int i=0; i<=5000; i++)
  {
    for(int i=1; i<=2; i++)
    {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      digitalWrite(col[3], HIGH);
      digitalWrite(fila[0], HIGH);
      digitalWrite(fila[1], LOW);
      digitalWrite(fila[2], LOW);
      digitalWrite(fila[3], LOW);
      digitalWrite(fila[4], LOW);
      digitalWrite(fila[5], HIGH);
      delay(0.1);
      digitalWrite(col[i], HIGH);
    }
    for(int i=0; i<=5; i++)
    {
      digitalWrite(fila[i], HIGH);
      digitalWrite(col[0], LOW);
      digitalWrite(col[1], HIGH);
      digitalWrite(col[2], HIGH);
      digitalWrite(col[3], LOW);
      delay(0.1);
      digitalWrite(fila[i], LOW);
    }
    for(int i=0; i<=3; i++)
    {
      digitalWrite(col[2], LOW);
      digitalWrite(fila[2], HIGH);
      delay(0.1);
      digitalWrite(col[2], HIGH);
      digitalWrite(fila[2], LOW);

      digitalWrite(col[1], LOW);
      digitalWrite(fila[3], HIGH);
      delay(0.1);
      digitalWrite(col[1], HIGH);
      digitalWrite(fila[3], LOW);
    }
  }
}
void loop()
{
  if(digitalRead(BOTON1) == HIGH){//al presionarlo 1 vez, muestra el abecedario en mayuscula
    LETRA_A();
    delay(100);
    LETRA_B();
    delay(100);
    LETRA_C();
    delay(100);
    LETRA_D();
    delay(100);
    LETRA_E();
    delay(100);
    LETRA_F();
    delay(100);
    LETRA_G();
    delay(100);
    LETRA_H();
    delay(100);
    LETRA_I();
    delay(100);
    LETRA_J();
    delay(100);
    LETRA_K();
    delay(100);
    LETRA_L();
    delay(100);
    LETRA_M();
    delay(100);
    LETRA_N();
    delay(100);
    LETRA_O();
    delay(100);
    LETRA_P();
    delay(100);
    LETRA_Q();
    delay(100);
    LETRA_R();
    delay(100);
    LETRA_S();
    delay(100);
    LETRA_T();
    delay(100);
    LETRA_U();
    delay(100);
    LETRA_V();
    delay(100);
    LETRA_W();
    delay(100);
    LETRA_X();
    delay(100);
    LETRA_Y();
    delay(100);
    LETRA_Z();
    delay(100);  
  }
  if(digitalRead(BOTON2) == HIGH){//al presionarlo 1 vez, se muestra el abecedario en minusculas
    LETRA_a();
    delay(100);
    LETRA_b();
    delay(100);
    LETRA_c();
    delay(100);
    LETRA_d();
    delay(100);
    LETRA_e();
    delay(100);
    LETRA_f();
    delay(100);
    LETRA_g();
    delay(100);
    LETRA_h();
    delay(100);
    LETRA_i();
    delay(100);
    LETRA_j();
    delay(100);
    LETRA_k();
    delay(100);
    LETRA_l();
    delay(100);
    LETRA_m();
    delay(100);
    LETRA_n();
    delay(100);
    LETRA_o();
    delay(100);
    LETRA_p();
    delay(100);
    LETRA_q();
    delay(100);
    LETRA_r();
    delay(100);
    LETRA_s();
    delay(100);
    LETRA_t();
    delay(100);
    LETRA_u();
    delay(100);
    LETRA_v();
    delay(100);
    LETRA_w();
    delay(100);
    LETRA_x();
    delay(50);
    LETRA_y();
    delay(100);
    LETRA_z();
    delay(100);     
  }
  if(digitalRead(BOTON3) == HIGH){//al presionarlo 1 vez, se muestra los numeros
    LETRA_1();
    delay(100);
    LETRA_2();
    delay(100);
    LETRA_3();
    delay(100);
    LETRA_4();
    delay(100);
    LETRA_5();
    delay(100);
    LETRA_6();
    delay(100);
    LETRA_7();
    delay(100);
    LETRA_8();
    delay(100);
    LETRA_9();
    delay(100);
    LETRA_0();
    delay(100);    
  }
  if(digitalRead(BOTON4) == HIGH){//Al dejarlo presionado se muestra la letra o frase que se introduce en la pantalla serial.
      leer = Serial.read(); //almacena la lectura del puerto serial en la variable "leer" que es de tipo caracter
      limpiar();
      delay(timer);
      
      switch(leer){   
      case 'A':
        Serial.println(leer); 
        LETRA_A();  
      break;
      case 'B':
        Serial.println(leer);
        LETRA_B();
      break;
      case 'C':
      Serial.println(leer);    
        LETRA_C();
      break;
      case 'D':
        Serial.println(leer);
        LETRA_D();
      break;
      case 'E':
        Serial.println(leer);
        LETRA_E();
      break;
      case 'F':
        Serial.println(leer);
        LETRA_F();
      break;
      case 'G':
        Serial.println(leer);
        LETRA_G();
      break;
      case 'H':
        Serial.println(leer);
        LETRA_H();
      break;
      case 'I':
        Serial.println(leer);
        LETRA_I();
      break;
      case 'J':
        Serial.println(leer);
        LETRA_J();
      break;
      case 'K':
        Serial.println(leer);
        LETRA_K();
      break;
      case 'L':
        Serial.println(leer);
        LETRA_L();
      break;
      case 'M':
        Serial.println(leer);
        LETRA_M();
      break;
      case 'N':
        Serial.println(leer);
        LETRA_N();
      break;
      case 'O':
        Serial.println(leer);
        LETRA_O();
      break;
      case 'P':
        Serial.println(leer);
        LETRA_P();
      break;
      case 'Q':
        Serial.println(leer);    
        LETRA_Q();
      break;
      case 'R':
        Serial.println(leer);
        LETRA_R();
      break;
      case 'S':
        Serial.println(leer);
        LETRA_S();
      break;
      case 'T':
        Serial.println(leer);
        LETRA_T();
      break;
      case 'U':
        Serial.println(leer);
        LETRA_U();
      break;
      case 'V':
        Serial.println(leer);
        LETRA_V();
      break;
      case 'W':
        Serial.println(leer);
        LETRA_W();
      break;
      case 'X':
        Serial.println(leer);
        LETRA_X();
      break;
      case 'Y':
        Serial.println(leer);
        LETRA_Y();
      break;
      case 'Z':
        Serial.println(leer);
        LETRA_Z();
      break;
      case 'a':
        Serial.println(leer); 
        LETRA_a();  
      break;
      case 'b':
        Serial.println(leer);
        LETRA_b();
      break;
      case 'c':
      Serial.println(leer);    
        LETRA_c();
      break;
      case 'd':
        Serial.println(leer);
        LETRA_d();
      break;
      case 'e':
        Serial.println(leer);
        LETRA_e();
      break;
      case 'f':
        Serial.println(leer);
        LETRA_f();
      break;
      case 'g':
        Serial.println(leer);
        LETRA_g();
      break;
      case 'h':
        Serial.println(leer);
        LETRA_h();
      break;
      case 'i':
        Serial.println(leer);
        LETRA_i();
      break;
      case 'j':
        Serial.println(leer);
        LETRA_j();
      break;
      case 'k':
        Serial.println(leer);
        LETRA_k();
      break;
      case 'l':
        Serial.println(leer);
        LETRA_l();
      break;
      case 'm':
        Serial.println(leer);
        LETRA_m();
      break;
      case 'n':
        Serial.println(leer);
        LETRA_n();
      break;
      case 'o':
        Serial.println(leer);
        LETRA_o();
      break;
      case 'p':
        Serial.println(leer);
        LETRA_p();
      break;
      case 'q':
        Serial.println(leer);    
        LETRA_q();
      break;
      case 'r':
        Serial.println(leer);
        LETRA_r();
      break;
      case 's':
        Serial.println(leer);
        LETRA_s();
      break;
      case 't':
        Serial.println(leer);
        LETRA_t();
      break;
      case 'u':
        Serial.println(leer);
        LETRA_u();
      break;
      case 'v':
        Serial.println(leer);
        LETRA_v();
      break;
      case 'w':
        Serial.println(leer);
        LETRA_w();
      break;
      case 'x':
        Serial.println(leer);
        LETRA_x();
      break;
      case 'y':
        Serial.println(leer);
        LETRA_y();
      break;
      case 'z':
        Serial.println(leer);
        LETRA_z();
      break;
      case '1':
        Serial.println(leer);
        LETRA_1();
      break;
      case '2':
        Serial.println(leer);
        LETRA_2();
      break;
      case '3':
        Serial.println(leer);
        LETRA_3();
      break;
      case '4':
        Serial.println(leer);
        LETRA_4();
      break;
      case '5':
        Serial.println(leer);
        LETRA_5();
      break;
      case '6':
        Serial.println(leer);
        LETRA_6();
      break;
      case '7':
        Serial.println(leer);
        LETRA_7();
      break;
      case '8':
        Serial.println(leer);
        LETRA_8();
      break;
      case '9':
        Serial.println(leer);
        LETRA_9();
      break;
      case '0':
        Serial.println(leer);
        LETRA_0();
      break;
      }
}
}
