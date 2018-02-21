#include <string.h>
#include <ctype.h>
int c_to_n(char c)
{
    int n = -1;
    static const char * const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p = strchr(alphabet, toupper((unsigned char)c))
    if (p)
    {
        n = p - alphabet;
    }
    return n;
}
