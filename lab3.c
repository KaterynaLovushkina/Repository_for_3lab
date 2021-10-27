//
//  main.c
//  laboratorna3
//
//  Created by Катерина ... on 27.10.2021.
//

#include <stdio.h>

int findOdd_or_EvenNumber(void);

void main(void)

{
    findOdd_or_EvenNumber();
    findOdd_or_EvenNumber();
    findOdd_or_EvenNumber();
       
}
int findOdd_or_EvenNumber(void)
{
     int i, j, size;
     printf("Enter the size of the arrays: ");
     scanf("%d", &size);
     int myArray[size];
     printf("Enter the array elements:\n");
     for(i=0;i<size;i++)
         scanf("%d",&myArray[i]);
     int FoundAnswer;
           for(i=0;i<size;i++){
                    FoundAnswer=1;
               for(j=0;j<size;j++){
                   if(myArray[i]*-1==myArray[j]){
                       FoundAnswer=0;
                       break;
                   }
                       
               }
               if (FoundAnswer==1){
                   printf("Our element is:%d\n",myArray[i]);
   
     
}
}
    return 0;
}
