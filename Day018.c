#include <stdio.h>

void addDays(int day, int month, int year, int addDay){
  int i, maxDaysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for(i = 0; i < addDay; i++){
    if(day < maxDaysInMonth[month - 1]){
      ++day;
    }else{
      day = 1;
      ++month;
      if(month > 12){
        month = 1;
        ++year;
      }
    }
  }
  
  printf("The date is %d-%d-%d", day, month, year);
}

int main(void)
{
    int day, month, year, y, ch, addDay;
    
    printf("Enter the date in DD format\n");
    scanf("%d",&day);
        printf("Enter the month in MM format\n");
    scanf("%d",&month);
        printf("Enter the year in YY format\n");
    scanf("%d",&year);
    
    if(day >31 && month>12)
    {
        printf("Enter the Correct date");
    }
    
    if(year > 99)
    {
        printf("check the format, it should be in YY format");
    }
    
    printf("\nChoose century\n 1.19th\n 2.20th\n 3.21st\n");
    scanf("%d",&y);
    switch(y)
    {
        case 1:
            year=year+1800;
            break;
        
        case 2:
            year=year+1900;
            break;
            
        case 3:
            year=year+2000;
            break;
        default:
            printf("Invalid Year");
            break;
    }
    
    printf("Choose the format\n 1.MM-DD-YYYY\n 2.DD-MM-YYYY\n 3.YYYY-MM-DD\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
            printf("The date is %d-%d-%d\n",month,day,year);
            break;
        
        case 2:
            printf("The date is %d-%d-%d\n",day,month,year);
            break;
        
        case 3:
            printf("The date is %d-%d-%d\n",year,month,day);
            break;
        
        default:
            printf("Invalid Choice\n");
            break;
    }
    
    printf("How many days you want to add\n");
    scanf("%d",&addDay);
    
    //please have your logic for add_days part here
    addDays(day, month, year, addDay);
    
    
    return 0;
    }
