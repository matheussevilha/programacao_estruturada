//Exercício 1 - 
//
//Programa para converter letras maiúsculas em minúsculas e vice-versa. 
//
//
//#include <stdio.h> 
//#include <string.h> 
//#define TAMANHO_STRING 1000 
//
//void conversao_string (char a[]) 
//{ 
//  int i; 
//  for(i = 0; i < TAMANHO_STRING && a[i] != '\0'; i++) 
//  { 
//    if(a[i] >= 'A' && a[i] <= 'Z') 
//    { 
//      a[i] += 32; 
//    } 
//    else if(a[i] >= 'a' && a[i] <= 'z')
//    { 
//      a[i] -= 32; 
//    } 
//  } 
//}
//
//Teste rápido da função:
//
//int main () 
//{ 
//  char CH[50]; 
//  scanf("%999s", CH); 
//  conversao_string(CH); 
//  printf("%s", CH); 
//  printf("\n"); 
//  return 0; 
//}

//Exercício 2 -
//
//Levando em conta a ordem lexicográfica dos caracteres, é possível verificar o tipo (dígito, maiúsculo, minúsculo).
//
//Quais seriam as saídas (printf's) de cada instrução a seguir:
//
//(a) if(c>='0' && c<='9')
//
//R: Nesse caso seriam printados somentes os dígitos, pois são os valores entre '0' e '9'.
//
//(b) if(c>='A' && c<='Z')
//
//R: Para esse caso, seriam os caracteres maiúsculos.
//
//(c) if(c>='a' && c<='z')
//
//R: Nesse último cenário, teríamos então os caracteres minúsculos.

//Exercício 3 -
//
//Programa que leia 5 palavras separadas por espaços e as exiba na ordem inversa
//

//#include <stdio.h>
//#include <string.h>
//#define TAMANHO_M 100
//
//int main ()
//{
//  char M1[TAMANHO_M], M2[TAMANHO_M], M3[TAMANHO_M], M4[TAMANHO_M], M5[TAMANHO_M];
//  scanf("%99s %99s %99s %99s %99s", M1, M2, M3, M4, M5);
//  printf("%s %s %s %s %s", M5, M4, M3, M2, M1);
//  printf("\n");
//  return 0;
//}

#include <stdio.h>

int main ()
{
  printf("Obrigado por fazer Online, facilita a vida do estudante trabalhador!\n");
  return 0;
}
