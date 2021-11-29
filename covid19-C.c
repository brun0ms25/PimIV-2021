//Bibliotecas necessárias para executar o programa


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


//Declarar as variáveis


char *nomePct[50][100];
char endereco[50][100];
char email[50][100];
char login[10][100];
char arquivo[1];
char cpf[12][100];
char cep[12][100];
int tel[14][100];
int dtNascimento[8][100];
int dtCid[8][100];
int cid[10][100];
int senha[5][100];
int op[5];
int op1[5];


//inicio do main --- principal ---

int main()

{
	
	
char login[15]="sistema";
char login1[15];
char senha[15]="2021";
char senha1[15];
	printf("Digite seu Login: ");
	scanf("%s", &login);
	printf("Senha: ");
	scanf("%s", &senha);
	printf("\n");
	printf("-------------------------------------------------------------\n \n");
	
	
if((senha == senha1) && (login == login1));
{
	
	
	printf("%"			"BEM VINDO"			"\n\n");
	printf("\n\n" "Sistema de Cadastro de Pacientes com Covid-19 - SCPC" "\n\n");
	printf("----------------------------------------------------------------\n");
	printf("Escolha uma opcao: \n\n");
	printf("1- Cadastrar um(a) novo(a) paciente \n\n");
	printf("0- Sair \n\n");
	printf("-------------------------------------------------------------\n \n");
	scanf("%d", &op);
	
	
while(*op==1){ //inicio op cadastro


	printf("\n \n");	
	printf("Digite o nome do paciente: \n");
getchar();
	scanf("%s", &*nomePct);	
	printf("\n \n");
	printf("\n Digite o Endereco: \n");
getchar();
	scanf("%s", &endereco);	
	printf("\n \n");	
	printf("\n Digite um email: \n");
getchar();
	scanf("%s", &email);	
	printf("\n \n");	
	printf("\n Digite o CPF: \n");
getchar();
	scanf("%s", &cpf);	
	printf("\n \n");	
	printf("\n Digite o CEP: \n");
getchar();
	scanf("%s", &cep);	
	printf("\n \n");	
	printf("\n Digite o Telefone: \n");
getchar();
	scanf("%i", &tel);	
	printf("\n \n");	
	printf("\n Digite a Data de Nascimento: \n");
getchar();
	scanf("%s", &dtNascimento);	
	printf("\n \n");	
		
	printf("------- Informacoes sobre o quadro clinico do paciente ----------- \n");
	printf("\n \f");
	printf("\n Informe o diagnostico: \n");
	scanf("%s", &cid);
getchar();
	printf("\n \n");
	system("pause");
	printf("\n" " Digite 1 para cadastrar um novo paciente ou digite 2 para gerar arquivo: \n");
	scanf("%d", &op);
getchar();
	printf("\n \n");	
	
		
continue;
}


//fim if cadastrar
if(*op==1,2,3){
	
	printf("\n \n" " ** CONFIRMA GERAR O ARQUIVO ? (S/N) ** \n \n");
	scanf("%c", &arquivo);
	
	
if(*arquivo== 's'){
	
	
FILE *pont_arq;

pont_arq=fopen("arquivo.txt", "a"); //abrindo o arquivo
fprintf(pont_arq, "\n" "Nome: " "%s" "\n" "CPF: " "%s" "\n" "CEP: " "%s" "\n" "Endereco: " "%s" "\n" "Telefone: " "%i" "\n" "Diagnostico: " "%s" "\n", *nomePct, *cpf, *cep, *endereco, *tel, *cid);
fclose(pont_arq); //fechando o arquivo
	printf("O arquivo foi criado com sucesso!"); //mensagem para o usuario
getch();
	system("pause");
return(0);


} //fim do arquivo
else {
	system("exit");
	}
		
		
} //fim do if listar e gerar arquivo
if(*op==0){
	printf("\n-----------------------------------------\n");
	printf("\n \nSaindo......\n \n");
	system("exit");
	
	
} //fim do if sair


if(*op>=4){
	printf("\n\n Opcao invalida!! \n\n");
	system("exit");	
	
	
} //fim do if opcao invalida
else {
	printf("\n \n------------------------------------\n \n");
	printf("\n Usuario e/ou senha invalido(a). \n");
	system("exit");
	
	
} //fim do else invalido		
	
} //fim do if login
	
} //fim do main
