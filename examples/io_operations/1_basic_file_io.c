#ifdef _WIN32 
#define _CRT_SECURE_NO_DEPRECATE 
#endif

#include <stdio.h>
#include <stdlib.h>
#define EOF (-1)

// input: stdin(console)
// output: a text file "outputfile"

// write

// open(create) a file with w+ mode
// get input chars from stdin via getchar()
// write char with fputc()
// int char is '#' close file

// read:

// open file with 'r' readonly mode
// while char is not EOF
// printf char by fgetc()
// close file

int main(void) {

  // 1 write chars to a file
  FILE * fp0  = fopen("outputfile", "w+");
    if (fp0 == NULL) {
    printf("Can not open file.");
    exit(1);
  }

  char ch = 0;
  while((ch = getchar()) != '#') {
    fputc(ch, fp0);
  }
  fclose(fp0);

  printf("\nwrite successfully. Now opening ...");


  FILE * fp1 = fopen("outputfile", "r+");
  if (fp1 == NULL) {
    printf("Can not open file.");
    exit(1);
  }

  printf("\nopen succeeded, now reading");
  int position = ftell(fp1);

  printf("\nCurrent position: %d\n", position);

  char och = 0;
  while((och = fgetc(fp1)) != EOF) {
    printf("%c", och);
  }

  printf("The last char: |%c|, the ascii of the last char |%d|", och, och);

  fclose(fp1);
  getchar();  // consume the last EOF


  printf("copying file content to another file...");

  FILE * src = fopen("outputfile", "r");
  FILE * target = fopen("target_file", "w+");
  if (src == NULL || target ==  NULL) {
    printf("Can not open file.");
    exit(1);
  }

  char read_ch = 0;
  while ((read_ch = fgetc(src)) != EOF) {
    putc(read_ch, target);
  }

  fclose(src);

  printf("Finished copying, now validating results...\n");

  // try to use fgetc and fail, then introduce ftell fseek and rewind
  char check_ch = 0;
  rewind(target);  // if there's not rewind() here the while statement falls into an infinite loop
   // or we could have first called fclose() on target then repoen it

  while ((check_ch = fgetc(target)) != EOF) {
    printf("%c", check_ch);
  }

  getchar(); // cosume the eof char
  fclose(target);

  getchar();

  return 0;
}

// hello#

// write successfully. Now opening ...
// open succeeded, now reading
// Current position: 0
// helloThe last char: ||, the ascii of the last char |-1|


// https://stackoverflow.com/questions/14386/fopen-deprecated-warning