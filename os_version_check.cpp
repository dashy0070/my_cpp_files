#include <iostream>

bool PlgxUtilsIsUbuntu18rGreater()
{
    FILE *cmd = popen("cat /etc/os-release | grep VERSION_ID | cut -d = -f 2 | xargs", "r");
	char result[24] = {0x0};
    //char* result = { 0 };
    int rescode = -1;
    printf("Befre crash ...0");
    while (fgets(result, sizeof(result), cmd) !=NULL)
           printf("%s%lf\n", result, (atof(result)));
    printf("Befre crash ...1");
	if(atof(result) >= 18.00)
    {
        printf("\n OS Version okay \n");
        rescode = true;
    }
    else
    {
        printf("\n OS Version not okay, please upgrade your OS");
        rescode = false;
    }
    pclose(cmd);
    return rescode;
}


int main()
{
PlgxUtilsIsUbuntu18rGreater();
return 0;
}

