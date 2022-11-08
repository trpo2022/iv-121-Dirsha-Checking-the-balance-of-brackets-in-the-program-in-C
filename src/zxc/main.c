#include "../libzxc/header.h"

int main(int argc, char* argv[]) 
{
    int i;
    for( i = 1; i < argc; i++) 
    {
        printf("Argument %d: %s\n", i, argv[i]);
        int f = search(argv[i]);
        printf("%d\n", f);
    }
    
    if(argc == 1)
    {
        printf("Command line has no additional arguments\n");
    }

    return 0;
}
