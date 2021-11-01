//
//  main.c
//  lab22
//
//  Created by Катерина ... on 16.09.2021.
//
#include <stdio.h>

int findOddOrEvenNumber(void);

void main(void)
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
     int FoundAnswer;
     for(index2=0;index2<size;index2++){
        FoundAnswer=1;
        for(index2=0;index2<size;index2++){
          if(myArray[index1]*-1==myArray[index2]){
            FoundAnswer=0;
            break;
            }
            }
          if (FoundAnswer==1){
              printf("Our element is:%d\n",myArray[index1]);
            }
            }
    return 0;
}
