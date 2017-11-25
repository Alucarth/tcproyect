#include <stdio.h>
int main(int argc, char const *argv[])
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
		     	  
		     	  fp = fopen("memoria.txt","w");
		     	  char texto[2];
		     	  
		     	  printf("escriba nombre: " );
		     	  scanf("%s",texto);
		     	  printf("\n escribiendo: %s \n",texto );
		     	  fprintf(fp, " %s  \n",texto);
		     	  //fputs("probando	 el fputs\n",fp);
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
	return 0;
	
}