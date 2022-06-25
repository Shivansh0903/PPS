#include <stdio.h>
#include <stdlib.h>

float Volume (); 

int main()
{
    int sel;
    float volume;
    printf("What shape do you want to calculate the volume for?\n1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5. Cone\n");
    volume=Volume(sel);
    printf("Volume is %.2f ",volume);
    return 0;
}

float Volume()
{
    int n;
    float side,length,width,height,radius,volume;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter the side of the cube: ");
            scanf("%f",&side);
            volume = side*side*side;
            break;
        case 2:
            printf("Enter the length of the cuboid: ");
            scanf("%f",&length);
            printf("Enter the width of the cuboid: ");
            scanf("%f",&width);
            printf("Enter the height of the cuboid: ");
            scanf("%f",&height);
            volume = length*width*height;
            break;
        case 3:
            printf("Enter the radius of the sphere: ");
            scanf("%f",&radius);
            volume = 4/3*3.14*radius*radius*radius;
            break;
        case 4:
            printf("Enter the radius of the cylinder: ");
            scanf("%f",&radius);
            printf("Enter the height of the cylinder: ");
            scanf("%f",&height);
            volume = 3.14*radius*radius*height;
            break;
        case 5:
            printf("Enter the radius of the cone: ");
            scanf("%f",&radius);
            printf("Enter the height of the cone: ");
            scanf("%f",&height);
            volume = 3.14*radius*radius*height/3;
            break; 
        default:
            printf("Invalid input");
            break;
    }
    return volume;
}