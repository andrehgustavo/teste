//Programa: fib_b4_n.cpp
//Programa que recebe um valor inteiro positivo n e imprime os termos da série de Fibonacci inferiores a n.

#include <iostream> //cin, cout, endl

int main(void)
{
  int n;
  int i=0;
  int temp;
  int a=0;
  int b=1;
  
  std::cout << "Digite um número inteiro positivo: " << std::endl;
  std::cin >> n;

  
  std::cout << "Os termos da sequência de Fibonacci menores que " << n << " são:" << std::endl;

  std::cout << b << " ";
  while (i <=n){
      temp = a;
      a=b;
      b=temp+a;
      if(b <= n){
	std::cout << b << " ";
      }
      i=b;
  }
  std::cout << std::endl; 
  return 0;
}


