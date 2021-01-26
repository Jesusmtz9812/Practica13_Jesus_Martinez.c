//Practica13 Cruz Martinez Jesus ALberto
//Fecha de entrega: 25 ce enero
#include <stdio.h> //Librerias
//Funcion principal
int main(){

// Variables
 int respuestaUno = 0;
 int respuestaDos = 0;
 int respuestaTres = 0;
 int respuestaCuatro = 0;
 int respuestaCinco = 0;
 FILE *fichero;
 
 //blpque de instrucciones
    printf("Bienvenido al test para conocerte mejor \n");

    fichero = fopen("Respuestas.txt", "a"); //crea archivo .txt 
    printf("******************** \n", fichero);
       // Bloque de instrucciones
            {
            int respuestaUno = 1;

            printf("Eres bueno jugando videojuegos? \n");
            printf("1 - Si \n");
            printf("2 - No \n");
            printf("3 - Maso menos \n");
            printf("4 - Claro que si \n");
            scanf("%i", &respuestaUno);


            return respuestaUno;
           }


        {
        int respuestaDos = 1;
            printf("Que juego es tu favorito de estos 4? \n");
            printf("1 - Call of Duty \n");
            printf("2.- Fortnite \n");
            printf("3 - Minecraft \n");
            printf("4 - Claro que si \n");
            scanf("%i",  &respuestaDos);



            return respuestaDos;
}


            {
            int respuestasTres = 1;

            printf(" Comprarias Play starion  o XBOX \n");
            printf("1 - PLAY STATION \n");
            printf("2.- XBOX \n");
            scanf("%i", &respuestasTres);


            return respuestaTres;

}

            {
            int respuestaCuatro = 1;

            printf(" En que prefieres jugar videojuegos? \n");
            printf("1 - Celular \n");
            printf("2.- PC \n");
            printf("3 - Consola \n");
            scanf("%i", &respuestaCuatro);

            return respuestaCuatro;
}

            {
            int respuestaCinco = 1;

            printf(" Te gustaria programar tu propio videojuego? \n");
            printf("1 - Claro \n");
            printf("2.- No me llama la atencion \n");
            scanf("%i", &respuestaCinco);
            return respuestaCinco;
}

    {
    switch (respuestaUno){
        case 1:
            fputs("- Si", fichero);
            break;
        case 2:

            fputs("- No \n", fichero);
            break;
        case 3:
            fputs("- Maso menos \n", fichero);
            break;

        case 4:
            fputs("- Claro que si", fichero);
            break;
        default://Todo
            printf("Vuelve a ingresar tus respuetas.");
            break;

}
        return respuestaUno;

  }


  {
    switch (respuestaDos){
        case 1:
            fputs("- Call of duty", fichero);
            break;
        case 2:

            fputs("- Fortnite \n", fichero);
            break;
        case 3:
            fputs("- Minecraft \n", fichero);
            break;

        case 4:
            fputs("- FIFA", fichero);
            break;
        default://Todo
            printf("Vuelve a ingresar tus respuetas.");
            break;

   }
        return respuestaDos;

 }
    {
    switch (respuestaTres){
        case 1:
            fputs("- PLAY STATION", fichero);
            break;
        case 2:

            fputs("- FIFA \n", fichero);
            break;

        default://Todo
            printf("Vuelve a ingresar tus respuetas.");
            break;

   }
        return respuestaTres;
 }


{
    switch (respuestaCuatro){
        case 1:
            fputs("- Celular", fichero);
            break;
        case 2:

            fputs("- PC \n", fichero);
            break;
        case 3:
            fputs("- Consola \n", fichero);
            break;

            default://Todo
            printf("Vuelve a ingresar tus respuetas.");
            break;

        }
        return respuestaCuatro;

}
    {
    switch (respuestaCinco){
        case 1:
            fputs("- Claro", fichero);
            break;
        case 2:

            fputs("- No me llama la atencion \n", fichero);
            break;

        default://Todo
            printf("Vuelve a ingresar tus respuetas.");
            break;

        }
        return respuestaCinco;
}


        return 0;
}
