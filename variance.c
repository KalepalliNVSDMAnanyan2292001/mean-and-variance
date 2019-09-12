double variance(char *str)
{
int i=0,c;
FILE *fp;
double x, temp=0.0;

fp=fopen(str,"r");
while(fscanf(fp,"%lf",x)!=EOF)
{
i=i+1;
temp=temp+x;
}
fclose(fp);
temp=temp/(i-1);
return temp;
}

{
int j=0,c;
FILE *fp;
double y, temp2=0.0;

fp=fopen(str,"r");
while(fscanf(fp,"%lf",x)!=EOF)
y=((x-temp)*(x-temp))
{
j=j+1;
temp2=temp2+y;
}
fclose(fp);
temp2=temp2/(j-1);
return temp2;
}


	
