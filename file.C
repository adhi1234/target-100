#include <stdio.h>


main()
{
  FILE *fp;

  fp=fopen("DATA.dat","w");
  fprintf(fp, "This is the text that we are printing\n");
  fclose(fp);

return 0;
}
