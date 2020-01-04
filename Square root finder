// Simple square root finder with a maximum of 9999999999 input

#include <iostream>
#include <cmath> 
int main()
{
		double a, b, n, x, y, z;
	n=0;
	x=1;
	y=3.1622776601;
	z=1;
	std::cout<<"Digite o numero para calcular sua raiz quadrada (max 10 digitos)\n \n";
	std::cin>>a;
	b=a;
	while(b >= 1){
		b=b/10;
		n+=1;
	}
	while(n != 1){
		x*=3.1622776601;
		y*=3.1622776601;
		n-=1;
	}
	z=x+(y-x)/2;
	while(std::abs (a-z*z) >= 0.000001)
	{
		if(a-z*z > 0){
			x=z;
		}
		else{
			y=z;
		}
		z=x+(y-x)/2;
	}
	std::cout<<"\nA raiz quadrada de "<<a<<" eh "<<z;
	std::cin.ignore();
	std::cin.get();
		
	}
