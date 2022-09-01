#include <stdio.h>
 
int main() {

    float nota1, p1=2, nota2, p2=3, nota3, p3=4, nota4, p4=1, media, somaPeso;
    float notaExame, mediaFinal;
    
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
    somaPeso = p1+p2+p3+p4;
    media = ((p1*nota1)+(p2*nota2)+(p3*nota3)+(p4 * nota4)) / somaPeso;
    
    if(media < 5.0){
        printf("Media: %.1f\nAluno reprovado.\n", media);
    }
    if(media >= 7.0){
        printf("Media: %.1f\nAluno aprovado.\n", media);
    }
    if(media >= 5.0 && media <= 6.9){
        printf("Media: %.1f\nAluno em exame.\n", media);
    
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);
        
        mediaFinal = (media + notaExame) / 2;
        
        if(mediaFinal >= 5.0){
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", mediaFinal);
        }
        
        if(mediaFinal <= 4.9){
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", mediaFinal);
        }
    }
    return 0;
}

