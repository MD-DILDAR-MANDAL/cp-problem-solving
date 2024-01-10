//program for day of date
 
#include <bits/stdc++.h>
using namespace std;

int main(){
	clrscr();
	   int i,j,d;
	   int date,month,year;
	   cout<<"range of year is 1000 - 9999"<<"\n";
	   cout<<"enter in numbers date month year"<<"\n";
	   cin>>date>>month>>year;
	   if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		   if(date>31)
	    {
		   exit(0);
	    }
	   }else if(month==4||month==6||month==9||month==11) {
		    if(date>30){
		    exit(0);
	    }
	   }
	   if(year % 4==0){
		   if(month==2){
			   if(date>29)
			   {
				   exit(0);
			   }
		   }
	   }else {
		   if(month==2)
		   {
			   if(date>28)
			   {exit(0);
			   }
		   }
	   }

	   if(month>12)
	   {exit(0);
	   }
	   if(year<1000||year>9999)
	   {exit(0);
	   }

	   int year_prefix =year/100;
	   
	   int ars[22];
	   int p=13;
	   for( i=0;i<22;i++){
	   ars[i]=p;
	   p+=4;
	   }
	 for( j=0;j<22;j++){
	 if(year_prefix==ars[j])
	 d=0;
	
	  }
  	int art[22];
	int p2=12;
	for(i=0;i<22;i++){
		art[i]=p2;
		p2+=4;
	}
	for(j=0;j<22;j++){
		if(year_prefix==art[j])
		d=2;
	}
  	int arf[23];
	int p3=10;
	for(i=0;i<23;i++){
		arf[i]=p3;
		p3+=4;
	}
	for(j=0;j<23;j++){
		if(year_prefix==arf[j])
		d= 5;
	}
	int arw[23];
	int p4=11;
	for(i=0;i<23;i++){
		arw[i]=p4;
		p4+=4;
	}
	for(j=0;j<23;j++){
		if(year_prefix==arw[j])
		d= 3;
	}
	   int leapyear =(year - year_prefix*100)/4;
	   int sum = d + year - year_prefix*100+leapyear;
	   
	   if(month==12){
		   if(date>=12)
		   {
			   sum = (date -12) +sum;

		   }
		   if(date<12){
			   sum=sum+7-(12-date);
		   }

	   }else  if(month==10){
		   if(date>=10)
		   {
			   sum = (date -10) +sum;
		   }
		    if(date<10){
			   sum=sum+7-(10-date);
		   }

	   }else  if(month==8){
		   if(date>=8)
		   {
			   sum = (date -8) +sum;

		   } if(date<8){
			   sum=sum+7-(8-date);
		   }

	   }else  if(month==6){
		   if(date>=6)
		   {
			   sum = (date -6) +sum;
		   }
		    if(date<6){
			   sum=sum+7-(6-date);
		   }

	   }else if(month==4){
		   if(date>=4)
		   {
			   sum = (date -4) +sum;
		   }
		    if(date<4){
			   sum=sum+7-(4-date);
		   }

	   }else if(month==11){
		   if(date>=7)
		   {
			   sum = (date -7) +sum;
		   }
		    if(date<7){
			   sum=sum+7-(7-date);
		   }
	   }else if(month==9){
		   if(date>=5)
		   {
			   sum = (date -5) +sum;
		   }
		    if(date<5){
			   sum=sum+7-(5-date);
		   }
	   }else if(month==7){
		   if(date>=11)
		   {
			   sum = (date -11) +sum;
		   }
		    if(date<11){
			   sum=sum+7-(11-date);
		   }
	   }else if(month==5){
		   if(date>=9)
		   {
			   sum = (date -9) +sum;
		   }
		    if(date<9){
			   sum=sum+7-(9-date);
		   }
	   }else if(month==2){
			if(year % 4==0){
				if(date==29){
			   sum = (date -29) +sum;
		   }
		    if(date<29){
			   sum=sum+7-(29-date);
		   }
	     }else {
			 if(date==28)
		   {
			   sum = (date -28) +sum;
		   }
		    if(date<28){
			   sum=sum+7-(28-date);
		   }
		 }

	   }else if(month==1)
	   {
		   if(year % 4==0){
				if(date>=4){
			   sum = (date -4) +sum;
		   }
		    if(date<4){
			   sum=sum+7-(4-date);
		   }
	     }else {
			 if(date>=3)
		   {
			   sum = (date -3) +sum;
		   }
		    if(date<3){
			   sum=sum+7-(3-date);
		   }
		 }

	   }
	  int repdel;
	   if(sum >= 7){
	   repdel= sum % 7;
	  }else repdel =sum;
	  cout<<"\n";
	  switch (repdel)
	  {
	  		case 0:
			cout<<" SUNDAY ";
			  break;
		  	case 1:
			cout<<" MONDAY "; 
	  		break;
		  case 2:
		  cout<<" TUESDAY ";
		  break;
		  case 3:
		  cout<<" WEDNESDAY ";
		  break;
		  case 4:
		  cout<<" THURSDAY ";
		  break;
		  case 5:
		  cout<<" FRIDAY ";
		  break;
		  case 6:
		  cout<<" SATURDAY ";
		  break;
	  default:
	  cout<<"**invalid**";
		  break;
	  }   
	getch();
	return 0;
}


