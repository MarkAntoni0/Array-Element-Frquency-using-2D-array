#include <stdio.h>
#include <stdlib.h>
int main()
{
    //gathering the array size
    int originalArraySize;
    printf("Insert the number of elements in your array: \n");
    scanf("%d",&originalArraySize);
    
    //initializing the array and th frequency array
    int originalArray[originalArraySize][originalArraySize];
    
    //filling the original array
    for(int i=0; i<originalArraySize;i++){
        printf("insert the element number [%d] in the array: ", (i+1));
        scanf("%d",&originalArray[i][1]);
        originalArray[i][2]=-1;
    }
    
    //discovering the elements frequency
    for(int i=0; i<originalArraySize;i++){
            int count=1;
        for(int j=i+1;j<originalArraySize;j++){
            if(originalArray[i][1]==originalArray[j][1]){
                count++;
                originalArray[j][2] = 0; // marking those repeated items to avoid double counting them
            }
        }
        if(originalArray[i][2]!=0){
            originalArray[i][2]=count; //assigning the frequency to its related item
            printf("the item %d appeared %d times.\n",originalArray[i][1],originalArray[i][2]);
        }
    }
    return 0;
}
