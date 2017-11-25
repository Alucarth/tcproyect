#include <stdio.h>
main()
{
	int op; //opcion
	FILE *fp;
	/* code */
	do{
		printf("\n Menu \n" );
		printf(" 1: Lectura \n" );
		printf(" 2: Escritura \n" );
		printf(" 3: Salir \n" );

		printf("Escriba una de las opciones: " );
		scanf("%d",&op);
		// printf("selecciono %d \n", op);
		 switch (op)
		 {
		     case 1: 
		     	  fp = fopen('/memoria.txt','w+');
		     	  fprintf(fp, "Escribiendo el archivo de texto\n");
		     	  fputs("probando desde el fputs\n",fp);
		     	  fclose(fp);


		          break;
		     case 2: /*Call function here to do the required operation*/
		          break;
		     case 3: printf("Goodbye\n"); 
		         break;
		     default: printf("Opcion invalida. Presione Enter\n");
		                    break;
		 }

	}while(op != 3);
	printf("Ejecucion Termida XD ");
	
}