#include <stdio.h>
#include <string.h>

// create a program in c that get's a user's name, stores it to a string
// then is able to get the first letter of each of the names entered by the user
// finally, it will be able to print out those letters along with the entire name
void printName(char n[]) {
  printf("Hello, %s", n);
}
void getFirstLetter(char n[]) {
  int count = 1;
  // print first letter
  printf("Letter %i: %c\n", count, n[0]);
  
  for (int i = 0; i < strlen(n); i++) {
    if (n[i] == ' ') {
      count++;
      printf("Letter %i: %c\n", count, n[i+1]);
    }
  }
}

int main() { 
  // variable declaration
  // string
  char name[40]; // need array size
  // name size
  int nameLen = strlen(name); 
  
  // get user input
  printf("Please enter your full name: ");
  fgets(name, sizeof(name), stdin); 
  // printname function
  printName(name);

  // get letters function
  getFirstLetter(name);

  return 0;
}
