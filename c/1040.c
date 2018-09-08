#include <stdio.h>

int main(void)
{
	
	double n1,n2,n3,n4,v1,v2,v3,v4,media,nota,exame;
	scanf("%lf %lf %lf %lf", &n1,&n2,&n3,&n4);
	v1 = n1*2;
	v2 = n2*3;
	v3 = n3*4;
	v4 = n4*1;
	media = (v1+v2+v3+v4)/(10.0);
	printf("Media: %.1lf\n", media);
	if (media >= 7.0) {
		printf("Aluno aprovado.\n");
	}

	if (media < 5.0 ){
		printf("Aluno reprovado.\n");
	}

	if (media >= 5.0 && media < 7.0){
		printf("Aluno em exame.\n");

		scanf("%lf", &nota);
		printf("Nota do exame: %.1lf\n", nota);
		media = (v1+v2+v3+v4)/(10.0);
		exame = (media + nota)/2.0;
		if (exame >= 5.0){
			printf("Aluno aprovado.\n");
		}
		if (exame < 5.0){
			printf("Aluno reprovado.\n");	
		}

		printf("Media final: %.1lf\n",exame);
	}
 
	return 0;
}