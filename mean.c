double mean(char *str)
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
