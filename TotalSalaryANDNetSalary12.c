#include<Stdio.h>
void main(){
    
    float bs ,pf=7.8/100 ,hra ,ca , total_salary,net_salary; 

    printf("Please enter Basic Salary:\n");
    scanf("%f",&bs);


    if(bs >= 35000){
        hra = (bs * 50) /100;
        ca = (bs * 25) /100;
        
    }
    
    else if(bs >= 20000 &&  bs < 35000){
        hra = (bs * 25) /100;
        ca = (bs * 12.5) /100;
    }
    
    else if(bs >= 10000 && bs < 20000){
        hra = (bs * 17) /100;
        ca = (bs * 8) /100;
    }
    
    else{
        hra = 0;        // hra = (bs * 0) /100;
        ca = 0;         // ca = (bs * 0) /100;
    }

    pf = (bs*7.8)/100;
    total_salary = bs + hra + ca ;
    net_salary = total_salary - pf;
    printf("Basic Salary = %f\nHRA = %f\nCA = %f\nPF = %f\nTotal Salary = %f\nNet Salary = %f\n",bs,hra,ca,pf,total_salary , net_salary);

}

