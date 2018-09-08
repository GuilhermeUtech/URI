#include<stdio.h>

int main(){
	int n=0,i=0,num_cobaia=0,num_total_cobaias=0,total_coelhos=0,total_ratos=0,total_sapos=0;
	char tipo_cobaia;
	float porcentagem_rato=0, porcentagem_coelho=0, porcentagem_sapo=0;
	scanf("%d", &n);
	
	while(i < n){
		scanf("%d %c", &num_cobaia, &tipo_cobaia);
		
		
		if(tipo_cobaia == 'R'){
			total_ratos = total_ratos+num_cobaia;
		}
		if(tipo_cobaia == 'S'){
			total_sapos = total_sapos+num_cobaia;
		}
		if(tipo_cobaia == 'C'){
			total_coelhos = total_coelhos+num_cobaia;
		}
		
			i++;
		
	}
	
	num_total_cobaias = total_coelhos + total_sapos + total_ratos;
	
	printf("Total: %d cobaias\n", num_total_cobaias);
	printf("Total de coelhos: %d\n", total_coelhos);
	printf("Total de ratos: %d\n", total_ratos);
	printf("Total de sapos: %d\n", total_sapos);
	
	porcentagem_coelho = ((100*(float)total_coelhos)/num_total_cobaias);
	porcentagem_sapo = ((100*(float)total_sapos)/num_total_cobaias);
	porcentagem_rato = ((100*(float)total_ratos)/num_total_cobaias);
	
	printf("Percentual de coelhos: %.2f %%\n", porcentagem_coelho);
	printf("Percentual de ratos: %.2f %%\n", porcentagem_rato);
	printf("Percentual de sapos: %.2f %%\n", porcentagem_sapo);
	
	return 0;
}