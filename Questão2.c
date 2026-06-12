A) typedef struct { 

    int codigo; 

    char nome[100]; 

    float salario; 

} Funcionario; 

 

B) int main() { 
Funcionario funcionarios[50]; 
int N; 
 
// validação de N (0 ≤ N ≤ 50) 
do { 
printf("Digite a quantidade de funcionarios (0 a 50): "); 
scanf("%d", &N); 
} while (N < 0 || N > 50); 
 
return 0; 
} 

 

C) void cadastrarFuncionarios(Funcionario f[], int N) { 

    int i; 

 

    for(i = 0; i < N; i++) { 

        printf("\nFuncionario %d\n", i + 1); 

 

        printf("Codigo: "); 

        scanf("%d", &f[i].codigo); 

 

        printf("Nome: "); 

        scanf(" %[^\n]", f[i].nome); 

 

        printf("Salario: "); 

        scanf("%f", &f[i].salario); 

    } 

} 

 

D) void imprimirAcimaMedia(Funcionario f[], int N) { 

    int i; 

    float soma = 0, media; 

 

    for(i = 0; i < N; i++) { 

        soma += f[i].salario; 

    } 

 

    if (N > 0) { 

        media = soma / N; 

 

        printf("\nMedia salarial: %.2f\n", media); 

        printf("Funcionarios acima da media:\n"); 

 

        for(i = 0; i < N; i++) { 

            if(f[i].salario > media) { 

                printf("Nome: %s | Salario: %.2f\n", f[i].nome, f[i].salario); 

            } 

        } 

    } else { 

        printf("Nenhum funcionario cadastrado.\n"); 

    } 

} 
