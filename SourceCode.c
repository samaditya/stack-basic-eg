#include<stdio.h>
#include <stdlib.h>

int stack[100],choice,choice1,top,x,i,bill=0,flag=0;
void push();
void check4discount();

int main()
{	
    top=-1;
    printf("Welcome!\n\n");
    
    do
     {	 
     	   xx: 	printf("Please enter your name (Example:[1,2,3,4])\n");
    			top++;
    			scanf("%d",&x);//push
    			push();
    			printf("\n1.TO BUY A SOLAR DEVICE\n2.TO BUY PARTS\n3.EXIT\n");
    			scanf("%d" , &choice);

     	 
    switch(choice){

    	case 1:
    		{	
    			bill+=4999;
    			check4discount();
    			flag = 1;
    			goto xx;
    			break;
    			

			}

	case 2:
			{	printf("\n1.SOLAR PANELS\n2.INVERTER\n3.STORAGE UNIT\n4.EXIT\n");
				scanf("%d" , &choice1);

				switch(choice1){

					case 1:
						{
							bill+=2599;
							check4discount();
							flag = 1;
							goto xx;
							break;
						}
					case 2:
						{
							bill+=2999;
							check4discount();
							flag = 1;
							goto xx;
							break;
						}

					case 3:
						{
							bill+=1999;
							check4discount();
							flag = 1;
							goto xx;
							break;
						}

					case 4:
						{
							exit(0);
						}

					default:
					printf("ENTER A VALID CHOICE\n");
				}

			case 3:
				{
					exit(0);
					break;
				}
			default:
					printf("ENTER A VALID CHOICE\n");

			
		}
		
	}

	

}
	while((choice==3)||(choice1==4));  
		}
		

void push()
{
        top++;
        stack[top]=x;  
}

void check4discount()
{		
	if(flag == 1){
	        for(i=top; i>=0; i--){
	        	if(stack[i] == x){
	            printf("\nCONGRATULATIONS YOU GET A SPECIAL DISCOUNT!!!\n");
	        	bill -= 999;
	        		        }
	 	}
	}
	printf("YOUR TOTAL BILL AMOUNT = %d\n",bill);

}

