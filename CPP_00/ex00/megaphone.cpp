#include "iostream"

int main(int ac, char **argv)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i = 0;
        while (argv[++i])
        {
            int j = -1;
            while (argv[i][++j])
            {
                std::cout << (char)std::toupper(argv[i][j]);
            }
        }
        std::cout << std::endl;
    }
    return (0);
}