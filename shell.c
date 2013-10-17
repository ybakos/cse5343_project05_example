/* shell.c
   A simple REPL / shell for Unix, for CSE 5343 Project 5
   Yong Bakos
*/

#include <stdio.h>

int commandIsNotExit(char* command);

/* exit: should terminate the shell

*/
int main(int argc, char** argv) {
  printf("yash: yet another shell!\n");

  char command[100] = {0};
  while (commandIsNotExit(command)) {
    printf("> ");
    scanf("%s", command);
    printf("%s\n", command);
  }

  return 0;
}

int commandIsNotExit(char* command) {
  return 1;
}
