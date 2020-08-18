#include<stdio.h>

int TOWER(int n, char beg, char aux, char end)
{
      if(n == 1)
      {
            printf("\nMove Disk %d From %c To %c\n", n, beg, end);
            return 0;
      }
      TOWER(n - 1, beg, end, aux);
      printf("Move Disk %d From %c To %c\n", n, beg, end);
      TOWER(n - 1, aux, beg, end);
      return 0;
}

int main()
{
      char beg = 'A', aux = 'B', end = 'C';
      int n;
      printf("Enter The Number of Disks: ");
      scanf("%d", &n);
      printf("\nSequence of Disks: \n");
      TOWER(n, beg, aux, end);
      printf("\n");
      return 0;
}
