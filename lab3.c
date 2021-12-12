//
//  main.c
//  lab3.c
//
//  Created by Катерина ... on 12.12.2021.
//
#include <stdio.h>
#include <stdbool.h>

int findOddOrEvenNumber(void);

int main(void)
{
    findOddOrEvenNumber();
    findOddOrEvenNumber();
    findOddOrEvenNumber();
}
int findOddOrEvenNumber(void)
{
     int index1, index2, size;
     printf("Enter the size of the arrays: ");
     scanf("%d", &size);
     int myArray[size];
     printf("Enter the array elements:\n");
     for(index1=0;index1<size;index1++){
      scanf("%d",&myArray[index1]);
    }
     bool FoundAnswer=true;
     for(index2=0;index2<size;index2++){
        FoundAnswer=true;
        for(index2=0;index2<size;index2++){
          if(myArray[index1]*-1==myArray[index2]){
            FoundAnswer=false;
            break;
            }
            }
            if (FoundAnswer==true){
              printf("Our element is:%d\n",myArray[index1]);
            }
            }
    return 0;
}
