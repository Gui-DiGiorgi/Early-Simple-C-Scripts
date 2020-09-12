// A simple system solver for x and y and two valid equations
// it finds the answer if it has a unique one, but it also tells you if it has infinite or no solutions

#include <iostream>
#include <cmath> 
int main()
{
		double a, b, c, d, e, f, A, B, C, y, x, z;

	std::cout<<"Monte as duas equacoes para que fiquem na forma ax+by=c\n";	
	std::cout<<"Por favor, use valores decimais ao inves de fracoes\n";
	std::cout<<"Lembre-se tambem de usar .(ponto) ao inves de ,(virgula) para numeros com casas decimais\n";	
	std::cout<<"Digite o numero...\n";	
	std::cout<<"\nque acompanha o primeiro x:";
	std::cin>>a;
    std::cout<<"\nque acompanha o primeiro y:";
	std::cin>>b;  
	std::cout<<"\nsolitario da primeira equacao:";
	std::cin>>c;
	std::cout<<"\nque acompanha o segundo x:";
	std::cin>>d;
    std::cout<<"\nque acompanha o segundo y:";
	std::cin>>e;  
	std::cout<<"\nsolitario da segunda equacao:";
	std::cin>>f;
	A=a/d;
	B=b/e;
	C=c/f;
	if (A==B && A==C && B==C){
	std::cout<<"\nEsse sistema tem multiplas respostas";
	std::cin.ignore();	
	std::cin.get();	
	}
	else{	
		if(A==B && A!=C){
			std::cout<<"\nEsse sistema nao tem solucao";
			std::cin.ignore();
        	std::cin.get();
        }
        else{
        	 z=a*e-b*d;
             x=c*e-b*f;
             y=a*f-c*d;
             a=x/z;
             b=y/z;
    std::cout<<"\nO sistema tem somente uma solucao, onde x vale "<<a<<" e y vale "<<b<<".\nSe voce achou respostas em fracao, por favor verificar se a fracao eh equivalente aos valores aqui apresentados.";
    std::cin.ignore();
	std::cin.get();
		}     
	}
}

