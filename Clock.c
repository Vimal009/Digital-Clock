#include<stdio.h>
#include <conio.h>

int main()
{
    int h, m, s;
    int D = 1000;
    
    printf("SET TIME:\n");
 
    printf("Enter Hour");
    scanf("%d", &h);

    printf("Enter Minute");
    scanf("%d", &m);

    printf("Enter Second");
    scanf("%d", &s);
    if (h > 24) 
    { 
        printf("ERROR!\n"); 
        exit(0); 
        } 
        if (m > 60) 
        {
            printf("ERROR!\n");
            exit(0); 
            }
            if (s > 60)
            { 
                printf("ERROR!\n"); 
                exit(0);
                } 
                
                while (1)
                {
                    
                    s += 1;
                    
                    if (s > 59)
                    {
                        m += 1;
                        s = 0;
                        }
                        
                        if (m > 59)
                        { 
                            h += 1;
                            m = 0; 
                            }
                            
                            if (h > 24)
                            {
                                h = 1;
                                m = 0;
                                s = 0;
                                }
                                
                                printf("\n DATE:");
                                
                                printf("27 FEBRUARY 2021");
                                
                                printf("\n TIME:");
                                
                                printf("%d:%d:%d", h, m, s);
                                
                                Sleep(D);
                                
                                system("cls");

                                }
                                return 0;
                                
                                getchar();
                                }
