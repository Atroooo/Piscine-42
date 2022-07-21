#include <unistd.h>

void showChar(int a, int b, int c){
	a += '0';
	b += '0';
	c += '0';
 
	char *verg = ",";  
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if(a != '7')
	{ 
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void ft_print_comb(void){
	int a;
   	int b;
	int c;

	 a = 0;
	 b = 1;
	 c = 2;

	 while(a <= 9){
		while(b <= 9){
			while(c <= 9){
					showChar(a, b ,c);
					c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}

int main(){
	ft_print_comb();	
}
