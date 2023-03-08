#include <stdio.h>
 
#include <stdio.h>
 
// Driver code
int main()
{
    char name, birthday;
   
      printf("Enter your name: ");
      scanf("%s", &name);
   
      printf("Enter your birthday: ");
      scanf("%s", &birthday);

      printf("Your name is %s and your birthday is the %s", &name, &birthday);
   
    return 0;
}