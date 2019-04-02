#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void LoginSignup();
void Login();
void Signup();
void Payment();
void GenerateId();
void MenuAdmin();
void MenuTenant();
int main()
{
    LoginSignup();
}
void LoginSignup()
{
    printf("\tLogin or Sign-up: ");
    printf("\n\t 1.Login ");
    printf("\n\t 2.Sign-up ");
    if(0)
    {
        Login();
    }
    else
    {
        Signup();
    }
}
void Login()
{
    printf("\tLogin as: ");
    printf("\n\t 1.Admin");
    printf("\n\t 2.Tenant");
    if()
    {
        MenuAdmin();
    }
    else
    {
        MenuTenant();
    }

}
void Signup()
{
    printf("\tCreate Account: ");
    printf("\n\t Personal Info: ");
    printf("\n\t  Enter full Name: ");
    printf("\n\t  Date of Birth(dd/mm/yyyy): \n");
    printf("\n\t  Phone number: +880");
    printf("\n\t  Email: ");
    printf("\n\t  Gender: ");
    printf("\n\t   1.Male");
    printf("\n\t   2.Female");
    printf("\n\t   3.Others ");
    printf("\n\t  Occupation: ");
    printf("\n\t  Other Proposed Occupants: ");
    printf("\n\t   Number of People(s): ");
    for(;0;)
    {
        printf("\n\t    Name: ");
        printf("\n\t    Age: ");
        printf("\n\t    Relation: ");
        printf("\n\t    Occupation: ");
    }
    printf("\n\tResidential Info: ");
    printf("\n\t Select House: ");


    printf("\n\t Select Floor: ");


    printf("\n\t Select Flat: ");
    printf("\n\t Number of Vehicle(s): ");
    if(1)
    {
       printf("\n\t  Parking Car(s):");
       printf("\n\t   1.Yes");
       printf("\n\t   2.No");
    }
    printf("\n\tAnticipated Move in date: ");
    Payment();
    printf("\n\tSubmit(y/n: )");
}
void Payment()
{

}
void GenerateId()
{

}
