#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{

     int numerocerto, chute;

     srand(time(NULL));

     numerocerto = rand() % 101;

     std::cout << std::endl
               << "\tAcerte o Número gerado!!!" << std::endl;
     std::cout << std::endl
               << "Insira seu palpite(Número entre 0 e 100): ";
     std::cin >> chute;

     while (chute != numerocerto)
     {
          if (chute < 0 || chute > 100)
          {
               std::cout << "Palpite inválido!!! Tente novamente: ";
          }
          else if (chute < numerocerto)
          {
               std::cout << std::endl
                         << "O número gerado é MAIOR do que " << chute << "!!! Tente novamente: ";
          }
          else
          {
               std::cout << std::endl
                         << "O número gerado é MENOR do que " << chute << "!!! Tente novamente: ";
          }

          std::cin >> chute;
     }

     std::cout << std::endl
               << "Parabéns, o número certo é " << numerocerto << " , Você acertou!!!";

     return 0;
}