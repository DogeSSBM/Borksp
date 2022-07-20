#include "Includes.h"

uint min()

typedef enum{T_INT, T_EXP}Typ;

typedef (Exp*)(*Bin)(Exp* a, Exp* b);
typedef (Exp*)(*Uny)(Exp* a);

typedef struct Exp{
    Typ t;
    union{
        struct{
            char *name;
            *Exp e;
        };
        int i;
    }
    struct Exp *n;
}Exp;

char *skipSpace(char *pos)
{
    while(*pos != '\0' && isspace(*pos))
        pos++;
    return pos;
}

Exp* newExp(char **src)
{
    char *pos = *src;
    while(isalpha(*pos))
        pos++;
    if(pos == *src)
        panic("Err parsing expr name at \".%s\"")
}

Exp* parseExp(char **src, Exp *exp)
{
    Exp *ret = NULL;
    while(**src != '\0'){
        switch(**src){
            case 'a'..'z':
            case 'A'..'Z':

                break;
        }
    }
    *src = skipSpace(*src);
    return ret;
}

Exp* parseSrc(char *src)
{
    Exp *exp = NULL;
    char **pos = &src;
    while(**src != '\0'){
        exp = append(parseExp(pos, exp));
    }
}

int main(int argc, char **argv)
{
    if(argc != 2)
        panic("Usage: %s <Source File>\n", argv[0]);

    char *src = fileReadText(argv[1]);
    printf("src -\n%s\n", src);
    free(src);

    return 0;
}
