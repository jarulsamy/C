#include <stdio.h>

/*
Essentially just the unix cat command.
*/

int main(int argc, char *argv[])
{
    FILE *fp;
    void filecopy(FILE *, FILE *);
    // Program name for errors
    char *prog = argv[0];
    // No args; copy standard input
    if (argc == 1)
        filecopy(stdin, stdout);
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL)
            {
                fprintf(stderr, "%s: can't open %s\n",
                        prog, *argv);
                return 1;
            }
            else
            {
                filecopy(fp, stdout);
                fclose(fp);
            }
    if (ferror(stdout))
    {
        fprintf(stderr, "%s: error writing stdout\n", prog);
        return 2;
    }

    return 0;
}

void filecopy(FILE *ifp, FILE *ofp)
{
    int c;
    while ((c = getc(ifp)) != EOF)
        putc(c, ofp);

    return;
}
