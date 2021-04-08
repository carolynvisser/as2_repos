//Carolyn Visser
#include <stdio.h>

int main()
{
 int input ;
 double sideLen , area , radius , volume , edge ,SA; 
 do
    {
        printf("\n1) Compute the area of a square\n2) Compute the volume of a sphere\n3) Compute the surface area of a cube\n4) Quit\n");
        printf("Enter an option: ");
        scanf("%d" , &input);
        switch (input)
        {
            case 1 :
            
                printf("\nEnter the side length (cm): ");
                scanf("%lf", &sideLen) ;
                area = sideLen * sideLen ;
                printf("Area of the square: " "%.2lf", area );
                printf(" (cm)\n");
                break;
            
            case 2 :
            
                printf("\nEnter the radius (cm): ");
                scanf("%lf", &radius) ;
                volume = (4.0/3.0)*3.14159265358979323846* radius * radius * radius ;
                printf("Volume of the sphere: " "%.2lf", volume );
                printf(" (cm)\n");
                break;
            
            case 3 :
            
                printf("\nEnter the edge of the cube (cm): ");
                scanf("%lf", &edge) ;
                SA = edge * edge *6 ;
                printf("Surface area of the cube: " "%.2lf",SA);
                printf(" (cm)\n\n");
                break;
            
            default :
                printf("\nGoodbye!\n");
        }
    } while (input != 4);
    
    
    return 0;
}
