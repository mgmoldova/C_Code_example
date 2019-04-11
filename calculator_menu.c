/*
Created by John Lex sd      
Modified by mgmoldova
*/
#include <stdio.h>
double multiply_two_float(double first,double second);
double sum_two_num(double first,double second);
double sub_num(double first,double second);
double division(double first,double second);
void in_save();
void out_print(double result,int flag);

double first_num,second_num,result;
int flag;

int main()
{ int chose;
	while(1)
	{printf("-----------Introduceti  functia dorita ------------\n");
     printf("1->Adition\n");
     printf("2->Substraction\n");
     printf("3->Multiply\n");
     printf("4->Division\n");
     scanf("%d",&chose);
     switch(chose)
     {
     	case 1 :
     	flag=1;
         in_save();
         sum_two_num(first_num,second_num);
         out_print(sum_two_num(first_num,second_num),flag);

     	break;
     	case 3:
     	flag=2;
     	in_save();
        multiply_two_float(first_num,second_num);
        out_print(multiply_two_float(first_num,second_num),flag);
     	break;
        case 2:
        flag =3;
        in_save();
        sub_num(first_num,second_num);
        out_print(sub_num(first_num,second_num),flag);
        break;
        case 4:
        flag=4;
        in_save();
        division(first_num,second_num);
        out_print(division(first_num,second_num),flag);
        break;
     }
	}


return 0;
}
double multiply_two_float(double first,double second)
{
 return first*second;
}

double sum_two_num(double first,double second)
{
 return first+second;
}
double sub_num(double first,double second)
{
 return first-second;
}
double division(double first,double second)
{
 return first/second;
}
//IN_out_block//
void in_save()
{
 printf("Introduce first float number:\n");
 scanf("%lf",&first_num);
 printf("Introduce second float number:\n");
 scanf("%lf",&second_num);

}
void out_print(double result,int flag)
{
    printf("<<<Result of your chose>>>\n");
  if (flag==1)
  {
  	printf("->> %.2lf+%.2lf=%.2lf \n",first_num,second_num,result);
  }
  else if (flag==2)
  {
    printf("->> %.2lf*%.2lf=%.2lf \n",first_num,second_num,result);
  }
  else if (flag==3)
  {
     printf("->> %.2lf-%.2lf=%.2lf \n",first_num,second_num,result);
  }
  else if (flag==4)
  {
    printf("->> %.2lf/%.2lf=%.2lf \n",first_num,second_num,result);
  }

}
