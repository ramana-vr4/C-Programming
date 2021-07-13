#include<stdio.h>
int main()
{
	printf("Pick The Item: \n1 Chicken kothu parotta - ₹180\n2 chicken kizhi parotta - ₹300\n3 Chicken Biryani - ₹200\n4 Chicken kari Dosai - ₹150");
	int Item=0;
	scanf("%d",&Item);
	
	switch(Item)
	{
		case 1 :
		        printf("You Picked Chicken Kothu Parotta - ₹180");
		        break;
		case 2 :
	             printf("You Picked Chicken Kizhi Parotta - ₹300");
	             break;
	    case 3 : 
	             printf("You Picked Chicken Biryani - ₹200");
	             break;
	     case 4 : 
	              printf("You Picked Chicken Kari Dosai- ₹150");
	              break;
	      default : printf("OOPS;Invalid");
	 }
}	                      