#include <iostream>//Me permet d'utiliser cout et cin.

int main(int argc, char **argv)
{
    int i = 1;
    int j;

    if (argc == 1)
    {//cout = charactère output (un peu comme un printf en c).
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;//<< est un opérateur d'insertion, il "envoie vers".
        //std::endl est comme un \n en c.
    }
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    std::cout << (char)std::toupper(argv[i][j]);//std::toupper est la version cpp de toupper. std:: car tout ce qui vient de la bibli standard est dans le namespace std.
                else
                    std::cout << argv[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;//Termine par un retour à la ligne.
    }
    return (0);
}
