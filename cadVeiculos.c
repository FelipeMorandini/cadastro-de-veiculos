#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

/*
- marca do veículo
- modelo 
- ano de fabricação
- placa (formato XXX-YYYY; onde X denota as letras e Y denota os números da placa).  
*/

struct veiculo {

         char marca[20];

         char modelo[20];

         char ano_fabricacao[5];
         
         char placa[8];

};

 struct veiculo cad_veiculo[10];
 char placa1;
 char placa2;
 char placa3;
 char placa4;
 char placa5;
 char placa6;
 char placa7;
 char placa8;
 char placa_formatada;
  
 
 
int main () {
  
int opcao, i, l;

setlocale(LC_ALL, "Portuguese");

       for (i = 1; i <=10;) {

           printf("\n\nCadastro de Veículos: \n");

           printf("Digite o índice de uma das opções abaixo: \n");

           printf("1 - Cadastrar veículo\n");

           printf("2 - Listar veículos \n");
	
           printf("3 - Listar veículos por ano de Fabricação. \n");

           printf("4 - Listar veículos por ano de Fabricação com ano mínimo.\n");
           
           printf("5 - Listar veículos por modelo. \n");

           printf("0 - Sair \n");

           scanf("%d", &opcao);

           switch(opcao) {

           case 1:

                   printf ("\n Informe a marca do veículo:");

                   scanf ("%s", &cad_veiculo[i].marca);

                   fflush(stdin);
                   
                   printf ("\n Informe o modelo do veículo:");

                   scanf ("%s", &cad_veiculo[i].modelo);

                   fflush(stdin);

                   printf ("\n Informe o ano de fabricação do veículo:");

                   scanf ("%s", &cad_veiculo[i].ano_fabricacao);

                   fflush(stdin);
                   
                   printf ("\n Informe a placa do veículo:");

                   scanf ("%s", &cad_veiculo[i].placa);

                   fflush(stdin);

                   i++;

               break;

           case 2:

               for (l = 1; l <=10; l++) {

                   if(l < i) {

                       printf("\n\nMarca: %s\n", &cad_veiculo[l].marca);

                       printf("\nModelo: %s\n", &cad_veiculo[l].modelo);

                       printf("\nAno de fabricação:%s\n", &cad_veiculo[l].ano_fabricacao);
                    
                        placa1 = cad_veiculo[l].placa[0];
                        placa2 = cad_veiculo[l].placa[1];
                        placa3 = cad_veiculo[l].placa[2];
                        placa4 = cad_veiculo[l].placa[3];
                        placa5 = cad_veiculo[l].placa[4];
                        placa6 = cad_veiculo[l].placa[5];
                        placa7 = cad_veiculo[l].placa[6];
                        printf("\nPlaca: %c%c%c-%c%c%c%c \n",placa1,placa2,placa3,placa4,placa5,placa6,placa7);

                   }

                   else {

                       l = 20;

                   }

               }

               break;

           case 3: ;
              
               char ano_fab[5];              
            
               printf ("\n Informe o ano de fabricação desejado:");

               scanf ("%s", ano_fab);
        
                for (l = 1; l <=10; l++) {

                   if(l < i){
                    
                   int ret;
                  
                    ret = strncmp(ano_fab, cad_veiculo[l].ano_fabricacao, 6);
                    
                       if(ret == 0) {
                        
                         printf("\n\nMarca: %s\n", &cad_veiculo[l].marca);

                         printf("\nModelo: %s\n", &cad_veiculo[l].modelo);

                         printf("\nAno de fabricação:%s\n", &cad_veiculo[l].ano_fabricacao);
                        
                        placa1 = cad_veiculo[l].placa[0];
                        placa2 = cad_veiculo[l].placa[1];
                        placa3 = cad_veiculo[l].placa[2];
                        placa4 = cad_veiculo[l].placa[3];
                        placa5 = cad_veiculo[l].placa[4];
                        placa6 = cad_veiculo[l].placa[5];
                        placa7 = cad_veiculo[l].placa[6];
                        printf("\nPlaca do veículo: %c%c%c-%c%c%c%c \n",placa1,placa2,placa3,placa4,placa5,placa6,placa7);     
                        
        }                    
                       
                   }

                   else{

                       l = 10;

                   }

               }

               break;

           case 4: ;

               char ano_fab_acima[5];              
            
               printf ("\n Informe o ano de fabricação limite para o filtro:");

               scanf ("%s", ano_fab_acima);
            
                for (l = 1; l <=10; l++) {

                   if(l < i){
                 
                    int valorinformado = atoi(ano_fab_acima);
                    int valoratual = atoi(cad_veiculo[l].ano_fabricacao);
                
                       if(valoratual > valorinformado) {
                        
                         printf("\n\nMarca: %s\n", &cad_veiculo[l].marca);

                         printf("\nModelo: %s\n", &cad_veiculo[l].modelo);

                         printf("\nAno de fabricação:%s\n", &cad_veiculo[l].ano_fabricacao);
                         
                        placa1 = cad_veiculo[l].placa[0];
                        placa2 = cad_veiculo[l].placa[1];
                        placa3 = cad_veiculo[l].placa[2];
                        placa4 = cad_veiculo[l].placa[3];
                        placa5 = cad_veiculo[l].placa[4];
                        placa6 = cad_veiculo[l].placa[5];
                        placa7 = cad_veiculo[l].placa[6];
                        printf("\nPlaca do veículo: %c%c%c-%c%c%c%c \n",placa1,placa2,placa3,placa4,placa5,placa6,placa7);

        }                    

                   }

                   else{

                       l = 10;

                   }

               }

               break;
               
            case 5: ;
            
               char modelo[20];              
            
               printf ("\n Informe o modelo para filtrar:");

               scanf ("%s", modelo);

                for (l = 1; l <=10; l++) {

                   if(l < i){
                      
                   int ret;
                  
                    ret = strncmp(modelo, cad_veiculo[l].modelo, 20);
                      
                       if(ret == 0) {
                        
                        printf("\n\nMarca: %s\n", &cad_veiculo[l].marca);

                        printf("\nModelo: %s\n", &cad_veiculo[l].modelo);

                        printf("\nAno de fabricação:%s\n", &cad_veiculo[l].ano_fabricacao);

                        placa1 = cad_veiculo[l].placa[0];
                        placa2 = cad_veiculo[l].placa[1];
                        placa3 = cad_veiculo[l].placa[2];
                        placa4 = cad_veiculo[l].placa[3];
                        placa5 = cad_veiculo[l].placa[4];
                        placa6 = cad_veiculo[l].placa[5];
                        placa7 = cad_veiculo[l].placa[6];
                        printf("\nPlaca do veículo: %c%c%c-%c%c%c%c \n",placa1,placa2,placa3,placa4,placa5,placa6,placa7);
                        
                        }                    

                   }

                   else {

                       l = 10;

                   }

               }

               break;

           case 0: exit(0);

           default:

               printf ("Opção invalida\n");

               break;

       }

}

return 0;

}