 #include "libft.h"

char **ft_split(char const *s, char c)
{
        char **result;
        unsigned int first;
        unsigned int i;
        unsigned int j

        i = 0;
        j = 0;
        first = 1;
        //Nessa parte a função count_total aloca a memoria para o retorno da matriz
        **result = malloc(count_total(*s, c) * sizeof(char *));
        //aqui ira percorrer a string procurando as palavras e incluindo na matriz
        while (!s[i] == '\0')
        {
                //caso seja um delimitador ele pula
                if (s[i] == c)
                        i++;
                //caso seja uma palavra, ele vai alocar espaço na memoria e depois
                //ir copiando até achar um delimitador
                else
                {
                        result[j] = malloc(count_word(s[i], c) * sizeof(char));
                        while (s[i] != c)
                        {
                                result[j] = s[i];
                                i++;
                                result[j]++;
                        }
		j++;
                }
        }
        result[j] == '\0'
        return (result);
}
//Essa função conta quantas palavras tem dentro da string e retorna o valor
int count_total(char const *s, char c)
{
        int i;
        int result;
        int first;

        first = 1;
        result = 1;
        i = 0;
        while (s[i])
        {
                if(first && s[i] != c)
                {
                        first = 0;
                        result++;
                }
                if (s[i] == c && s[i + 1] != c)
                        result++;
                i++;
        }
        return (result);
}
//essa função consta quantas letras tem dentro da palavra e retorna a quantidade
int count_word(char const *s, char c)
{
        int i;

        i = 0;
        while (*s)
        {
                if (*s != c)
                        i++;
                else
                        return (i);
                s++;
        }
        return (i);
}
