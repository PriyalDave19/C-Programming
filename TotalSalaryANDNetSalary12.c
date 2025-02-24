#include<Stdio.h>
void main(){
    
    float bs ,pf=7.8/100 ,hra ,ca , total_salary,net_salary; 

    printf("Please enter Basic Salary:\n");
    scanf("%f",&bs);


    if(bs >= 35000){
       bs = bs * pf;
        hra = (bs * 50) /100;
        ca = (bs * 25) /100;
        total_salary = bs + hra + ca ;
        net_salary = total_salary - pf;
        printf("Total Salary = %f \n Net Salary = %f",total_salary , net_salary);
    }
    
    else if(bs >= 20000 &&  bs < 35000){
        bs = bs * pf;
        hra = (bs * 25) /100;
        ca = (bs * 12.5) /100;
        total_salary = bs + hra + ca ;
        net_salary = total_salary - pf;
        printf("Total Salary = %f \n Net Salary = %f",total_salary , net_salary);
    }
    
    else if(bs >= 10000 && bs < 20000){
        bs = bs * pf;
        hra = (bs * 17) /100;
        ca = (bs * 8) /100;
        total_salary = bs + hra + ca ;
        net_salary = total_salary - pf;
        printf("Total Salary = %f \n Net Salary = %f",total_salary , net_salary);
    }
    
    else{
        bs = bs * pf;
        hra = (bs * 0) /100;
        ca = (bs * 0) /100;
        total_salary = bs + hra + ca ;
        net_salary = total_salary - pf;
        printf("Total Salary = %f \n Net Salary = %f",total_salary , net_salary);
    }
     

}

