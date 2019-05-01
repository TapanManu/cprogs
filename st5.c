#include<stdio.h>
void main()
{
         char a[100],b[100],c[100],d[100];
         int i,j,k,l1,l2,l3,m,count=-1;
         printf("\t\t\t   REPLACE OF STRING ");
         printf("\n\t\t\t********************");
         printf("\n\n\t INPUT");
         printf("\n\t*******");
         printf("\n\nEnter the First String : ");
         scanf("%[a-z ]s",a);
         printf("\nEnter the Substring : ");
         scanf("%s",b);
         printf("\nEnter the Replace String : ");
         scanf("%s",c);
         printf("\n\n\tOUTPUT");
         printf("\n\t*******");
         for(i=0;a[i]!='\0';i++)
              l1=i;
              for(i=0;b[i]!='\0';i++)
                   l2=i;
                   for(i=0;c[i]!='\0';i++)
                        l3=i;
                        for(i=0;a[i]!='\0';i++)
                             d[i]=a[i];
                             d[i]='\0';
                             if(l1>=l2)
                              {
                                 do
                                   {
                                       for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++ )
                                           {
                                                 if(a[i]==b[j])
                                                   {
                                                      count++;
                                                      j++;
                                                    }
                                                   else
                                                    {
                                                            count=-1;
                                                             if(j>0)
                                                                i--;
                                                                j=0;
                                                     }
                                              }
                                                                m=i;
                                                     if(count==l2)
                                                       {
                                                            i=i-j;
                                                            for(k=0;c[k]!='\0';i++,k++)
                                                                  a[i]=c[k];
                                                                  if(l2!=l3)
                                                                    {
                                                                        for( ;d[m]!='\0';m++,i++)
                                                                             {
                                                                                  a[i]=d[m];
                                                                              }
                                                                     }
                                                                                  //a[i]='\0';
                                                                                  //printf("\nReplaced string:%s",a);
                                                          }
                                                                                   else
                                                                                   break;
                                                                                   //printf("\nThe substring is not there");
                                     }while(a[i]!='\0');
                                       printf("\nReplaced string:%s",a);
                               }
            
}
