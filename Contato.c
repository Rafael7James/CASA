#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Contato
{
    char nome[50];
    char telefone[15];
    char email[50];
};
char *buscarTelefonePorNome(struct Contato contatos[], int tamanho, const char *nome)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(contatos[i].nome, nome) == 0)
        {
            return contatos[i].telefone;
        }
    }
    return "Contato não encontrado";
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct Contato contatos[3];

    for (int i = 0; i < 3; ++i)
    {
        printf("Cadastro do Contato %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", contatos[i].nome);
        printf("Telefone: ");
        scanf("%s", contatos[i].telefone);
        printf("Email: ");
        scanf("%s", contatos[i].email);
    }

    char nomeBusca[50];
    printf("\nDigite o nome do contato para buscar o telefone: ");
    scanf("%s", nomeBusca);

    char *telefoneEncontrado = buscarTelefonePorNome(contatos, 3, nomeBusca);
    printf("Telefone de %s: %s\n", nomeBusca, telefoneEncontrado);

    return 0;
}