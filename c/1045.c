#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,aquadrado,bquadrado,cquadrado,x	;
	
	scanf("%f%f%f", &a,&b,&c);

 if (a < b){
  x = a; a = b; b = x; 
  } 
  if (b < c){
   x = b; b = c; c = x; 
   } 
  if (a < b){
   x = a; a = b; b = x; 
   }
   
   aquadrado = pow(a,2);
	bquadrado = pow(b,2);
	cquadrado = pow(c,2);


  
  
	if(a>=b+c) {
		printf("NAO FORMA TRIANGULO\n");
	}else{
		
	if(aquadrado > (bquadrado+cquadrado)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		
		if(aquadrado < (bquadrado+cquadrado)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		
		if(aquadrado == (bquadrado + cquadrado)){
		printf("TRIANGULO RETANGULO\n");
		}
		
		if((a==b)&&(a==c) && (b==c)){
		printf("TRIANGULO EQUILATERO\n");
		} else {
				
		if((a==b) || (a==c) || (c==b)){
		printf("TRIANGULO ISOSCELES\n");
		}
		}
	
		
	}
	
	return 0;
}