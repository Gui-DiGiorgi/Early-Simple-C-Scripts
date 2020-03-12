// In this project I code the steps needed to eat 99.9% of a cookie if your bite is in relation to the rest of the cookie
// For example, you have a 50g cookie, and you bite for 4g, so your bite is 8% of the cookie, so, the cookie now has 46g,
// but your bite is now 3.68g (8% of 46g), how many bites you need to eat 99.9% of the cookie? This can done mathematically,
// but computing it is funnier, besides infinite sums are a pain to do**. By the way, the answer is... run this script and find out.
// I kid, it's 83 bites, and the lastly you bit for 0.00394866g.

#include <iostream> 
int main()
{
		double a, b, c, d, e, n;
	std::cout<<"Digite a massa do biscoito (gramas)\n \n";
	std::cin>>a;
	std::cout<<"\n";
	std::cout<<"Digite o tamanho da mordida no biscoito (gramas). A regra eh q as mordidas\nsubsequentes sao equivalentes a porcentagem restante da bolacha vezes o tamanho da\nmordida inicial \n \n";
	std::cin>>b;
	std::cout<<"\n";
	c=a;
	d=b;
	e=0.001*a;
	while(c > e){
		c=c-d;
		d=b*(c/a);
		n+=1;
	std::cout<<"Processo "<<n<<": O biscoito tem "<<c<<" gramas e a mordida esta como "<<d<<" gramas.\n";
	}
	std::cout<<"\nVoce demorou "<<n<<" mordidas para comer 99.9% do biscoito";
	std::cin.ignore();
	std::cin.get();
		
	}

// ** (on 12/03/2020) Upon reading this again, I realised that this, 
// while managed to see the iterations and their values, made the actual
// calculation of the end value slower. A smarter approach would be calculating
// as such: total bites = ceiling(log(stop amount limit)/log(1 - the relative size of the bite))
// stop amount limit = 0.001 => log(0.001) = -3
// example for the 8% bite => total bites = ceiling(-3/log(0.92)) = 83
