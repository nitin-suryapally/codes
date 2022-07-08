#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
    date d1,d2;

void display(date d1, date d2){
    printf("%d/%d/%d \n ", d1.date,d1.month,d1.year);
    printf("%d/%d/%d \n ", d2.date,d2.month,d2.year);
}

int compare(date d1, date d2){
    if(d1.year<d2.year){
        return 1;
    }
    if(d1.year>d2.year){
        return -1;
    }
    if(d1.month<d2.month){
        return 1;
    }
    if(d1.month>d2.month){
        return -1;
    }
    if(d1.date<d2.date){
        return 1;
    }
    if(d1.date>d2.date){
        return -1;
    }
    else{
        return 0;
    }

}


int main(){
    int c;
    date d1={2,5,21};
    date d2={2,5,22};

    display(d1,d2);
    c=compare(d1, d2);
    printf("%d\n",c);

return 0;
}