A) typedef struct { 

    int codigo; 

    char nome[100]; 

    float salario; 

} Funcionario; 

 

B) void aplicarAumento(Funcionario *f, float percentual) { 

    f->salario = f->salario + (f->salario * percentual / 100); 

} 

 

C) int main() { 
Funcionario func; 
 
func.codigo = 1; 
 
printf("Digite o nome: "); 
scanf(" %[^\n]", func.nome); 
 
printf("Digite o salario: "); 
scanf("%f", &func.salario); 
 
printf("Salario original: %.2f\n", func.salario); 
 
aplicarAumento(&func, 10); 
 
printf("Salario atualizado: %.2f\n", func.salario); 
 
return 0; 
} 
