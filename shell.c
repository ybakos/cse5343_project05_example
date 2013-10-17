/* shell.c
   A simple REPL / shell for Unix, for CSE 5343 Project 5
   Yong Bakos
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void error(char* command);
bool commandIsExit(char* command);
int commandIsType(char* command);
int commandIsCopy(char* command);
int commandIsDelete(char* command);
int commandIsExecutable(char* command);
void type(char* filename);
char* firstFileName(char* command);
char* secondFileName(char* command);
void copy(char* source, char* dest);
void delete(char* filename);
void execute(char* filename);

/* exit:             should terminate the shell
   type file:        print the contents of `file` to stdout
   copy source dest: copy `source` to `dest`
   delete file:      deletes `file`
   attempt to execute a program if not one of the above commands
*/
int main(int argc, char** argv) {
  printf("yash: yet another shell!\n");
  char command[100] = {0};
  while (true) {
    printf("> ");
    scanf("%s", command);
    if (commandIsExit(command)) {
      break;
    } else if (commandIsType(command)) {
      type(firstFileName(command));
    } else if (commandIsCopy(command)) {
      copy(firstFileName(command), secondFileName(command));
    } else if (commandIsDelete(command)) {
      delete(firstFileName(command));
    } else if (commandIsExecutable(command)) {
      execute(command);
    } else {
      error(command);
    }
  }
  return 0;
}

// Displays an error message on stdout
void error(char* command) {
  printf("Command not found: %s\n", command);
}

// Returns 1 if `command` is 'exit'
bool commandIsExit(char* command) {
  // strcmp returns 0 when strings are equal
  return !strcmp(command, "exit");
}

// Returns 1 if the first word in `command` is 'type'
int commandIsType(char* command) {
  // TODO
  return 0;
}

// Returns 1 if the first word in `command` is 'copy'
int commandIsCopy(char* command) {
  // TODO
  return 0;
}

// Returns 1 if the first word in `command` is 'delete'
int commandIsDelete(char* command) {
  // TODO
  return 0;
}

// Returns 1 if `command` is an executable file on the filesystem
int commandIsExecutable(char* command) {
  // TODO
  return 0;
}

// Prints the contents of `filename` to stdout
void type(char* filename) {
  // TODO
}

// Copies the bytes from `source` to `dest`
void copy(char* source, char* dest) {
  // TODO
}

// Deletes a file named `filename`
void delete(char* filename) {
  // TODO
}

// Executes a program named `filename`
void execute(char* filename) {
  // TODO
}

// Returns the second word in a command phrase
char* firstFileName(char* command) {
  // TODO
  return 0;
}

// Returns the third word in a command phrase
char* secondFileName(char* command) {
  // TODO
  return 0;
}
