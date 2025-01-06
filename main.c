// ================================ V1 ================================

// #include <stdio.h>

// int main(){
//   char ch;
//   int count = 0;
//   printf("Enter the string after finish press 'Enter': ");
//   while((ch = getchar()) != '\n'){
//     count++;
//   }
//   printf("String length including space(s): %d", count);
//   return 0;
// }


// ================================ V2 ================================

// #include <stdio.h>

// void length(char *a){
//   int count = 0;
//   while(*a != '\0'){
//     count++;
//     a++;
//   }
//   printf("String length including space(s): %d\n", count);
// }

// int main(){
//   // here the string is pre defined
//   char ch[] = "This is a alternative way to find string length!";
//   length(ch);
//   return 0;
// }

