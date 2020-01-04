// In this one, I code the answer to what is needed fo a number to reach the next 10^x room, for example 6 needs a 4 for 10,
// or 2443 needs 7557 for 10000. It basically finds how many numbers you typed (for example, 3 for 345), 
// and does 10^(that many numbers)-your number

#include <iostream>
#include <cmath> 
int main()
{
		int a, b, c, n, z;
	n=0;
	c=1;
	std::cout<<"Digite o numero para calcular seu complemento (maior que 0)\n \n";
	std::cin>>a;
	b=a;
	while(b >= 1){
		b=b/10;
		n+=1;
	}
		while(n != 0){
		c*=10;
		n-=1;
	}
	z=c-a;
	std::cout<<"\nO complemento de "<<a<<" eh "<<z;
	std::cin.ignore();
	std::cin.get();
		
	}
