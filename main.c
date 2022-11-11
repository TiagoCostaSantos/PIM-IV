#include <stdio.h>
#include <conio.h>

int main(void){

    // ------------ CADASTRO DE USUARIOS -------------

    struct ficha_user{

        char usuario[30];
        int senha;

    };

    struct ficha_user user;

    printf("cadastro de usuario:\n");
    printf("User: ");
    fflush(stdin);

    fgets(user.usuario, 20, stdin);
    printf("Senha: ");
    scanf("%d", &user.senha);

    FILE *ArqLogin; // SALVANDO INFORMAÇÕES
    int a;

    ArqLogin = fopen("UsersLogin.txt", "a");

    if(ArqLogin == NULL){

        printf("Erro na abertura do arquivo! Por favor tente novamente mais tarde! :(\n"); // CASO SALVAMENTO DE DADOS DE ERRADO
        system("pause");
        return 1;

    }else{

        fprintf(ArqLogin, "%s%d\n", user.usuario, user.senha); // TELA APÓS CADASTRO COMPLETADO!
        printf("\nUSUARIO CADASTRADO COM SUCESSO! \n");
        printf("\nUsuario...: %s", user.usuario);
        printf("senha.....: %d \n", user.senha);

    }
    system("pause");
    return (0);

}
