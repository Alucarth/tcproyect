#include <stdio.h>
#include <string.h>

void escribir(FILE *fp,char direccion1[2], char direccion2[2] , char dato[2])
{
	printf("%s\n",direccion1 );
	printf("%s\n",direccion2 );
	printf("%s\n",dato );
	fprintf(fp, "%s %s %s \n",direccion1,direccion2,dato);
	
}

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

		     	  char d[2],linea[10];
		     	  memset(linea, 0, 10);
		     	  memset(d, 0, 2);
		     	  
		     	  //linea =0;
		     	  printf("d1: \n");
		     	  scanf("%s",&d);
		     	  strcat(d," ");
		     	  strcat(linea,d);
		     	  
		     	  printf("d2: \n");
		     	  scanf("%s",&d);
		     	  strcat(d," ");
		     	  strcat(linea,d);
		     	  
		     	  printf("dato: \n");
		     	  scanf("%s ",&d);
		     	  strcat(d,"");
		     	  strcat(linea,d);
		     	  
				  

				  fprintf(fp,"%s \n",linea);
		     	  // escribir(fp,d1,d2,dato);

		     	  // printf("d1: \n");
		     	  // scanf("%s",&d1);
		     	  // printf("d2: \n");
		     	  // scanf("%s",&d2);
		     	  // printf("dato: \n");
		     	  // scanf("%s",&dato);
		     	  
		     	  // escribir(fp,d1,d2,dato);

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