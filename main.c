#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

#define SIZE 128

// -- FUNCAO SEGUNDARIA PARA CORES, BOLD E CARACTERES COMO "�" E COM ACENTO "�"

void Printc(char phrase[SIZE]){//COR VERDE
    setlocale(LC_ALL, "Portuguese");
    printf("\x1b[1m\033[0;32m%s\x1b[0m\033[0m", phrase);
}

void PrintV(char phrase[SIZE]){//COR VERMELHA
    setlocale(LC_ALL, "Portuguese");
    printf("\x1b[1m\033[0;31m%s\x1b[0m\033[0m ", phrase);


}

struct dados{               // ------- INF PACIENTE ---------
        		char nome['50'];
        		char cpf['14'];
        		char tel['20'];
        		char rua ['50'];
        		int num;
        		char bairro['30'];
        		char cidade ['30'];
        		char estado ['30'];
        		char cep['40'];
        		int diaNasc;
        		int mesNasc;
        		int anoNasc;
        		char email['50'];
        		char dataDiag['20'];
        		char comorbidade['50']

};

struct dados dadosPaciente;

int main(void){
    #define cor "\031[32m"

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    void retornar_Tela(int v){// retornando valores j� descrito pelo usuario caso erre algum valor


                    if(v >= 1){
                        printf("\n  ______________________ DADOS PESSOAIS _____________________\n");
                        if(v == 1){
                             PrintV("\n  -->NOME INVALIDO, (MUITO PEQUENO OU GRANDE, UTILIZE SOMENTE LETRAS)");
                        }
                    }
                    if(v >= 2){
                        printf("\n  |NOME DO PACIENTE: %s", dadosPaciente.nome);
                        if(v == 2){
                            PrintV("\n  !CPF INVALIDO (MUITO PEQUENO/GRANDE, SOMENTE NUMEROS SEM TRA�OS)\n");
                        }
                        if(v >= 3){
                            printf("  |CPF: %s", dadosPaciente.cpf);
                            if(v == 3){
                                PrintV("\n  !TELEFONE INVALIDO, SOMENTE NUMEROS SEM TRA�OS, OU MUITO GRANDE\n");
                            }
                            if(v >= 4){
                                printf("\n  |TELEFONE: %s", dadosPaciente.tel);
                                if(v == 4){
                                    PrintV("\n  |DIGITE UMA DATA VALIDA (EX DIA: 04)\n");
                                }
                                if(v >= 5){
                                    printf("\n  |DIA: %d", dadosPaciente.diaNasc);
                                    if(v == 5){
                                        PrintV("\n  |DIGITE UMA DATA VALIDA (EX M�S: 04)\n");
                                    }
                                    if(v >= 6){
                                        printf("\n  |  >M�S: %d", dadosPaciente.mesNasc);
                                        if(v == 6){
                                            PrintV("\n  |DIGITE UMA DATA VALIDA (EX ANO: 1950)\n");
                                        }
                                        if(v >= 7){
                                            printf("\n  |   >ANO: %d", dadosPaciente.anoNasc);
                                            if(v == 7){
                                                 PrintV("\n  |EMAIL INV�LIDO, (MUITO PEQUENO/GRANDE) ");
                                            }
                                            if(v >= 8){
                                                printf("\n  |EMAIL: %s", dadosPaciente.email);
                                                if(v == 8){
                                                    printf("\n  _________________________ ENDERE�O ________________________\n");
                                                    printf("\n  |POR FAVOR DIGITE O NOME DE SUA RUA!");

                                                }
                                                if(v >= 9){
                                                    printf("\n  _________________________ ENDERE�O ________________________\n");
                                                    printf("\n  |Rua: %s", dadosPaciente.rua);
                                                    if(v == 9){
                                                        PrintV("\n  |NUMERO INVALIDO DIGITE NOVAMENTE!\n");
                                                    }
                                                    if(v >= 10){
                                                            printf("\n  |NUMERO: %d", dadosPaciente.num);
                                                            if(v == 10){
                                                                PrintV("\n  |BAIRRO INVALIDO DIGITE NOVAMENTE!\n");
                                                            }
                                                        if(v >= 11){
                                                                printf("\n  |BAIRRO: %s", dadosPaciente.bairro);
                                                                if(v == 11){
                                                                    PrintV("\n  |CIDADE INVALIDA TENTE NOVAMENTE!\n");
                                                                }
                                                            if(v >= 12){
                                                                printf("\n  |CIDADE: %s", dadosPaciente.cidade);
                                                                if(v == 12){
                                                                    PrintV("\n  |ESTADO INVALIDO DIGITE NOVAMENTE!\n");
                                                                }
                                                                if(v >= 13){
                                                                    printf("\n  |ESTADO: %s", dadosPaciente.estado);
                                                                    if(v == 13){
                                                                        PrintV("\n  |CEP INVALIDO DIGITE NOVAMENTE!\n");
                                                                    }
                                                                    if(v >= 14){
                                                                        printf("\n  |CEP: %d", dadosPaciente.cep);
                                                                        if(v >= 15){
                                                                            printf("\n  _________________________ DIAGN�STICO ________________________\n");
                                                                            if(v == 16){
                                                                                PrintV("\n  |DATA DE DIAGNOSTICO INVALIDO TENTE NOVAMENTE\n");
                                                                            }

                                                                        }
                                                                    }

                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

    // ---------LOGIN DE USUARIOS DA SA�DE---------------
    void login(){

        char user[30];
        char senha[30];
        login:
        printf("\n   ______________ LOGIN _______________\n\n");
        printf("   1.USUARIO: ");
        fflush(stdin);
        fgets(user, 30, stdin);

        printf("   2.SENHA: ");
        fflush(stdin);
        fgets(senha, 30, stdin);

        FILE *pont_UsersLogin; // CHAMANDO ARQUIVO PARA COMPARA��O DE USUARIO E SENHA
        char string[30];
        int logado;

        pont_UsersLogin = fopen("UsersLogin.txt", "r+");
        printf("%s", string);

        // ------------- VERIFICANDO SE USUARIO EXISTE ------------
        while(fgets(string, 29, pont_UsersLogin) != NULL){

            if(strcmp(user,string) == 0){ // VERIF NOME
                fgets(string, 29, pont_UsersLogin);

                 if(strcmp(senha,string) == 0){// VERIF SENHA CASO NOME = TRUE
                 system("cls");
                 char *pt_nome, *pt_cpf, *pt_email, *pt_rua, *pt_bairro, *pt_cidade, *pt_estado, *pt_dtDiag, *pt_anoNasc;
                 int m, charcount = 0, msg_erro;
                 int logado = 1;

                 cadastroPaciente:
                 fflush(stdin);

                //---------------------------NOME--------------------------
                printf("\n  ______________________ DADOS PESSOAIS _____________________\n");
                nome:

                printf("\n  |NOME DO PACIENTE: ");
                fgets(dadosPaciente.nome, 50, stdin);
                fflush(stdin);
                pt_nome = dadosPaciente.nome;
                charcount = 0;
                for(m = 0; pt_nome[m]; m++){// VERIFICANDO TAMANHO E TIPOS DE CARACTERES INVALIDOS PARA O NOME
                    charcount++;
                    if(pt_nome[m] == '1' || pt_nome[m] == '2'|| pt_nome[m] == '3'|| pt_nome[m] == '4'|| pt_nome[m] == '5'|| pt_nome[m] == '6'|| pt_nome[m] == '7'|| pt_nome[m] == '8'|| pt_nome[m] == '9'){
                        system("cls");
                        retornar_Tela(1);
                        goto nome;
                    }else if(pt_nome[m] == '!'|| pt_nome[m] == '@'|| pt_nome[m] == '#'|| pt_nome[m] == '%'|| pt_nome[m] == '('|| pt_nome[m] == ')'){
                        system("cls");
                        retornar_Tela(1);
                        goto nome;
                    }

                }

                if(charcount >=48 || charcount <= 2){// VERIFICANDO SE TAMANHO DE NOME � VALIDO
                    system("cls");
                    retornar_Tela(1);
                    goto nome;
                }

                //--------------------------- CPF ------------------------
                char * PontCPF = dadosPaciente.cpf;
                int b, contador;

                cpf:
                contador = 0;

                printf("  |CPF: ");
                scanf("%s", dadosPaciente.cpf);

                for(b = 0; PontCPF[b]; b++){
                    if(PontCPF[b] == '1' ||PontCPF[b] == '2' ||PontCPF[b] == '3' ||PontCPF[b] == '4' ||PontCPF[b] == '5' ||PontCPF[b] == '6' ||PontCPF[b] == '7' ||PontCPF[b] == '8' ||PontCPF[b] == '9' ||PontCPF[b] == '0' || PontCPF[b] == 'X' || PontCPF[b] == 'x'){

                    }else{
                        system("cls");
                        retornar_Tela(2);
                        goto cpf;
                    }
                    contador++;
                }

                if(contador >= 13 || contador<=6){
                    system("cls");
                    retornar_Tela(2);
                    goto cpf;
                }

                // ------------------------- TELEFONE ----------------------
                char * pt_tel = dadosPaciente.tel;
                int c, cont;

                tel:
                cont = 0;

                printf("  |TELEFONE: ");
                scanf("%s", dadosPaciente.tel);

                for(b = 0; pt_tel[b]; b++){
                    if(pt_tel[b] == '1' ||pt_tel[b] == '2' ||pt_tel[b] == '3' ||pt_tel[b] == '4' ||pt_tel[b] == '5' ||pt_tel[b] == '6' ||pt_tel[b] == '7' ||pt_tel[b] == '8' ||pt_tel[b] == '9' ||pt_tel[b] == '0'){
                        cont++;
                    }else{
                        system("cls");
                        retornar_Tela(3);
                        goto tel;
                    }

                }

                // --------------------- DATA DE NASCIMENTO --------------
                diaNasc:

                printf("\n  |DIA DE NASCIMENTO: ");
                scanf("%d", &dadosPaciente.diaNasc);
                fflush(stdin);

                if(dadosPaciente.diaNasc >= 32 || dadosPaciente.diaNasc == 0){
                    system("cls");
                    dadosPaciente.diaNasc = 0;
                    retornar_Tela(4);
                    goto diaNasc;
                }
                mesNasc:

                printf("  | >M�S DE NASCIMENTO: ");
                scanf("%d", &dadosPaciente.mesNasc);
                fflush(stdin);

                if(dadosPaciente.mesNasc >= 13 || dadosPaciente.mesNasc == 0){
                    system("cls");
                    dadosPaciente.mesNasc = 0;
                    retornar_Tela(5);
                    goto mesNasc;
                }

                anoNasc:

                printf("  |  >ANO DE NASCIMENTO: ");
                scanf("%d", &dadosPaciente.anoNasc);
                fflush(stdin);

                if(dadosPaciente.anoNasc <= 0){
                    system("cls");
                    retornar_Tela(6);
                    goto anoNasc;
                }
                // -------------------- EMAIL -------------------
                email:
                printf("\n  |EMAIL DO PACIENTE: ");
                fgets(dadosPaciente.email, 50, stdin);
                fflush(stdin);
                pt_email = dadosPaciente.email;
                charcount = 0;

                for(m = 0; pt_email[m]; m++){
                    charcount++;
                }

                if(charcount >=48 || charcount <= 2){// VERIFICANDO SE TAMANHO DE EMAIL � VALIDO
                    system("cls");
                    retornar_Tela(7);
                    goto email;
                }

                printf("\n  _________________________ ENDERE�O ________________________\n");
                rua:
                printf("\n  |RUA: ");
                scanf("%49[^\n]s", &dadosPaciente.rua);
                fflush(stdin);
                pt_rua = dadosPaciente.rua;
                charcount = 0;

                for(m = 0; pt_rua[m]; m++){
                    charcount++;
                }

                if(charcount <= 1){
                    system("cls");
                    retornar_Tela(8);
                    goto rua;
                }

                numero:
                printf("  |NUMERO: ");
                scanf("%d", &dadosPaciente.num);
                fflush(stdin);
                if(dadosPaciente.num <= 1){
                    system("cls");
                    dadosPaciente.num = 0;
                    retornar_Tela(9);
                    goto numero;
                }

                bairro:
                printf("  |BAIRRO: ");
                scanf("%25[^\n]s", &dadosPaciente.bairro);
                fflush(stdin);
                pt_bairro = dadosPaciente.bairro;
                charcount = 0;
                for(m = 0; pt_bairro[m]; m++){
                    charcount++;
                }
                if(charcount <= 1){
                    system("cls");
                    retornar_Tela(10);
                    goto bairro;
                }

                cidade:
                printf("  |CIDADE: ");
                scanf("%19[^\n]s", &dadosPaciente.cidade);
                fflush(stdin);
                pt_cidade = dadosPaciente.cidade;
                charcount = 0;
                for(m = 0; pt_cidade[m]; m++){
                    charcount++;
                }
                if(charcount <= 1){
                    system("cls");
                    retornar_Tela(11);
                    goto cidade;
                }
                estado:
                printf("  |ESTADO: ");
                scanf("%19[^\n]s", &dadosPaciente.estado);
                fflush(stdin);
                pt_estado = dadosPaciente.estado;
                charcount = 0;

                for(m = 0; pt_estado[m]; m++){
                    charcount++;
                }
                if(charcount <= 1){
                    system("cls");
                    retornar_Tela(12);
                    goto estado;
                }

                char * pt_cep = dadosPaciente.cep;
                int d, cont2;

                cep:
                cont2 = 0;

                printf("  |CEP: ");
                scanf("%s", dadosPaciente.cep);

                for(b = 0; pt_cep[b]; b++){
                    if(pt_cep[b] == '1' ||pt_cep[b] == '2' ||pt_cep[b] == '3' ||pt_cep[b] == '4' ||pt_cep[b] == '5' ||pt_cep[b] == '6' ||pt_cep[b] == '7' ||pt_cep[b] == '8' ||pt_cep[b] == '9' ||pt_cep[b] == '0'){
                        cont2++;
                    }else{
                        system("cls");
                        retornar_Tela(13);
                        goto cep;
                    }

                }

                if(cont2 <= 3 || contador >=45){
                    system("cls");
                    retornar_Tela(13);
                    goto cep;
                }

                printf("\n  _________________________ DIAGN�STICO ________________________\n");
                int retorno = 0;
                dtDiag:
                printf("\n  |DATA DE DIAGN�STICO: ");
                fgets(dadosPaciente.dataDiag, 20, stdin);
                fflush(stdin);
                pt_dtDiag = dadosPaciente.dataDiag;
                charcount = 0;

                for(m = 0; pt_dtDiag[m]; m++){
                    charcount++;
                }
                if(charcount <= 1){
                    system("cls");

                    if(retorno == 0){
                        retornar_Tela(15);
                        retorno = 1;
                    }else{
                        retornar_Tela(16);
                    }
                    goto dtDiag;
                }
                system("cls");

                FILE*pont_arq;   // SALVAR ARQUIVO COM INF (CADASTROPACIENTES.TXT)
                char palavra[20];

                pont_arq=fopen("cadastropacientes.txt","a+b");

                if(pont_arq == NULL){

                    PrintV("Erro na abertura do arquivo!");
                    return 1;

                }else{
                     while(fgets(palavra, 19,pont_arq) != NULL){ //  VERIFICANDO SE cpf J� EXISTENTE

                        if(strcmp(dadosPaciente.cpf,palavra) == 0){ // SE cpf J� EXISTIR
                            PrintV("CPF j� cadastrado!");
                            system("pause");
                            system("cls");
                            goto cadastroPaciente;

                        }
                    }
                }

                fprintf(pont_arq, "Nome: %s",dadosPaciente.nome);
                fprintf(pont_arq, "CPF: %s\n",dadosPaciente.cpf);
                fprintf(pont_arq, "Telefone: %s\n",dadosPaciente.tel);
                fprintf(pont_arq, "Rua: %s\n",dadosPaciente.rua);
                fprintf(pont_arq, "Numero: %d\n",dadosPaciente.num);
                fprintf(pont_arq, "Bairro: %s\n",dadosPaciente.bairro);
                fprintf(pont_arq, "Cidade: %s\n",dadosPaciente.cidade);
                fprintf(pont_arq, "Estado: %s\n",dadosPaciente.estado);
                fprintf(pont_arq, "CEP: %s\n",dadosPaciente.cep);
                fprintf(pont_arq, "Data de nascimento: %d/%d/%d\n",dadosPaciente.diaNasc, dadosPaciente.mesNasc, dadosPaciente.anoNasc);
                fprintf(pont_arq, "Email: %s",dadosPaciente.email);
                fprintf(pont_arq, "Data do diagn�stico: %s",dadosPaciente.dataDiag);
                fprintf(pont_arq, "comorbidade: ");


                char opcaoComorbidade;
                int erro = 0;


                confirmarComorbidade:
                printf("\n\n   ______________________________________________");
                printf("\n                                                   ");
                printf("\n      SEU PACIENTE POSSUI ALGUMA COMORBIDADE?      ");
                printf("\n                     1 - SIM                       ");
                printf("\n                     2 - N�O                       ");
                printf("\n\n   ______________________________________________");

                if(erro == 1){
                    PrintV("\n    Op��o inv�lida! Digite uma op��o v�lida.\n");
                    erro = 0;
                }
                printf("\n   ESCOLHA UMA OP��O: ");
                scanf("%s", &opcaoComorbidade);

                if(opcaoComorbidade == '1'){
                    printf("\n   COMORBIDADE: ");
                    fflush(stdin);
                    fgets(dadosPaciente.comorbidade, 50, stdin);
                    fprintf(pont_arq, "%s\n", dadosPaciente.comorbidade);

                }else if(opcaoComorbidade == '2'){
                    fprintf(pont_arq,"nenhuma\n\n");

                }else{
                    erro = 1;
                    system("cls");
                    goto confirmarComorbidade;

                }
                system("cls");
                fclose(pont_arq);

                printf("\n   ______________________REGISTRO CONCLUIDO_____________________\n");
                printf("\n                  PACIENTE  CADASTRADO COM SUCESSO!      \n");

              printf("\n  |NOME: %s", dadosPaciente.nome);
                printf("  |CPF: %d\n", dadosPaciente.cpf);
                printf("  |TEL: %s\n", dadosPaciente.tel);
                printf("  |RUA: %s", dadosPaciente.rua);
              printf("\n  |NUMERO: %d", dadosPaciente.num);
              printf("\n  |BAIRRO: %s", dadosPaciente.bairro);
              printf("\n  |CIDADE: %s", dadosPaciente.cidade);
              printf("\n  |ESTADO: %s", dadosPaciente.estado);
              printf("\n  |CEP: %d", dadosPaciente.cep);
              printf("\n  |DATA DE NASCIMENTO: %d/%d/%d", dadosPaciente.diaNasc, dadosPaciente.mesNasc, dadosPaciente.anoNasc);
              printf("\n  |EMAIL: %s", dadosPaciente.email);
              printf("\n  |DATA DE DIAGN�STICO: %s", dadosPaciente.dataDiag);

                // ----------------VERIFICANDO SE PERTENCE AO GRUPO DE RISCO------------------
                int anoAtual = 2022;
                int idade = anoAtual - dadosPaciente.anoNasc;

                if(idade > 65){
                   printf("\n   _____________________________________________________________\n");
                   printf("\n   ------------------------------------------------------------\n");
                    printf("\x1b[1m\033[0;31m              PACIENTE NO GRUPO DE RISCO, COM %d ANOS DE IDADE\x1b[0m\033[0m       \n", idade);
                    printf("   ------------------------------------------------------------\n\n");

                    FILE*pt_arq;
                    char string[20];

                    pt_arq=fopen("grupoderisco.txt","a+b");

                    if(pt_arq == NULL){

                        PrintV("Erro na abertura do arquivo!");
                        return 1;
                    }

                    fprintf(pont_arq, "idade: %d\n",idade);
                    fprintf(pont_arq, "CEP: %s\n", dadosPaciente.cep);
                    fclose(pt_arq);
                }

                int opcao;
                confirmarOpcao:

                printf("  [1]NOVO CADASTRO.   [2]SAIR.\n\n");
                printf("  USER: ");
                fflush(stdin);
                scanf("%d", &opcao);

                if(opcao == 1){
                    system("cls");
                    opcao = 0;
                    goto cadastroPaciente;

                }else if(opcao == 2){
                    opcao = 0;
                    return 0;
                }else{

                    printf("Numero invalido, tente novamente!");
                    goto confirmarOpcao;
                }
                }
            }
        }

        if(logado == 1){
            system("cls");
            return 1;
        }else{
            int voltar2;
            printf("   ____________________________________\n");
            PrintV("\n   !USU�RIO (E/OU) SENHA INV�LIDO(S), TENTE NOVAMENTE\n\n");
            printf("    [1]Menu   [2]Tentar novamente\n\n");
            printf("   USER: ");
            fflush(stdin);
            scanf("%d", &voltar2);

            if(voltar2 == 1){// VOLTAR MENU
                printf("voce selecionou voltar");
                system("cls");

            }else{// REFAZER CADASTRO
                system("cls");
                goto login;
            }
        }

        fclose(pont_UsersLogin);


    }

   // ----------CADASTRO DE USUARIOS DA SAUDE-------------
    void cadastro(){

        struct ficha_user{ // ------------ INF DE CADASTRO -------------
            char usuario[30];
            char senha[30];
        };

        struct ficha_user user; // struct <identificador> <variavel>;
        cadastro:
        printf("\n   __________ CADASTRO DE USUARIO _________\n\n");
        printf("    1.NOME DE USUARIO: ");
        fflush(stdin);
        fgets(user.usuario, 20, stdin);

        printf("    2.SENHA: ");
        fflush(stdin);
        fgets(user.senha, 20, stdin);

        if(strlen(user.usuario) < 2 || strlen(user.senha) < 2){ // VERIFICANDO SE NOME E SENHA S�O MAIORES QUE 1 CARACTER
            PrintV("Por favor digite um nome e senha v�lido!\n");
            system("pause");
            system("cls");
            goto cadastro;
        }

        FILE *ArqLogin; // SALVANDO INFORMA��ES
        char string[30];

        ArqLogin = fopen("UsersLogin.txt", "r+");

        if(ArqLogin == NULL){

            PrintV("Erro na abertura do arquivo! Por favor tente novamente mais tarde! :(\n"); // CASO SALVAMENTO DE DADOS DE ERRADO
            system("pause");

        }else{

            while(fgets(string, 29,ArqLogin) != NULL){ //  VERIFICANDO SE USUARIO J� EXISTENTE

                if(strcmp(user.usuario,string) == 0){ // SE USUARIO J� EXISTIR

                        int voltar;
                        printf("   ________________________________________\n");
                        PrintV("\n   !ATEN��O -> USUARIO J� EXISTE, TENTE NOVAMENTE COM UM NOVO NOME\n\n");
                        printf("    [1] Retornar ao menu    [2] Tentar novamente\n\n");
                        printf("   USER: ");
                        fflush(stdin);
                        scanf("%d", &voltar);

                        if(voltar == 1){// RETORNA MENU

                            system("cls");

                            return 1;
                        }else{// REFAZER CADASTRO
                            system("cls");
                            goto cadastro;
                        }

                }

            }


            fprintf(ArqLogin, "%s%s\n", user.usuario, user.senha); // SALVANDO USUARIO E SENHA
            system("cls");
            printf("\n   _______USUARIO CADASTRADO COM SUCESSO!______ \n");// TELA AP�S CADASTRO COMPLETADO!
            printf("\n   |USUARIO: %s\n", user.usuario);
              printf("   |SENHA..: %s \n", user.senha);
              printf("   _____________________________________________ \n\n\n");
            system("pause");

        }

        fclose(ArqLogin);
    }

    // --------------- HOME(MENU) ----------------
    int valorValido = 0;
    int opcao;
    menu:
    printf("\n");
    printf("   _____________________________________________________________\n");
    printf("   |                                                           |\n");
    printf("   |                                                           |\n");
    Printc("   |                PROGRAMA PACIENTES COVID-19                |\n");
    printf("   |                -=========================-                |\n");

    printf("   |                          1-Login                          |\n");
    printf("   |                                                           |\n");
    printf("   |                        2-Cadastro                         |\n");
    printf("   |                                                           |\n");
    printf("   |                          3-Sair                           |\n");
    printf("   |                                                           |\n");
    printf("   |___________________________________________________________|\n");
    printf("   | Digite: [1]Login [2]Cadastro [3]Sair                      |\n");
    printf("   |===========================================================|\n\n");

    if(valorValido == 1){
        PrintV("   DIGITE UM NUMERO V�LIDO (1,2,3)\n");
    }
    printf("   User:");
    fflush(stdin);
    scanf("%d", &opcao);

    if(opcao == 1){
        system("cls");
        login();
        system("cls");
        opcao=0;
        goto menu;
    }else if(opcao == 2){
        system("cls");
        cadastro();
        system("cls");
        opcao= 0;
        goto menu;
    }else if(opcao == 3){

        system("exit");

    }else{

        system("cls");
        valorValido = 1;
        goto menu;
    }

    return (0);

}

