#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu (void)
{
  int c;

  printf ("Select an order\n");
  printf ("\t1) On\n");
  printf ("\t2) Off\n");
  printf ("\t3) Change color\n");
  printf ("\t4) Change intensity\n");
  printf ("Choice : ? ");
  do
    scanf ("%d", &c);
  while (c < 1 || c > 4);
  return c;
}

void display_light (unsigned char light)
{

  printf("DISPLAY LIGHT :\n" );
  if ( light & 1) {
    printf("Light is ON.\n");
  }else{
    printf("Light is OFF.\n");
  }

  unsigned char a = light;
  a=a>>1;
  unsigned char b = 3;
  a = a & b ;

  if ( a == 0) {
    printf("Light is WHITE.\n");
  }if ( a == 1) {
    printf("Light is BLUE.\n");
  }if ( a == 2 ) {
    printf("Light is RED.\n");
  }if ( a == 3 ) {
    printf("Light is PINK.\n");
  }
}


unsigned char  set_color (unsigned char light, int color)
{
  unsigned char a = 249;
  light = light & a ;
  light += color<<1;
  return light;
}


unsigned char menu_color (unsigned char light)
{
  printf ("\n0: white\n1: blue\n2: red\n3: pink\n");
  printf ("Color : ? ");
  int color;
  do
    scanf ("%d", &color);
  while (color < 0 || color > 3);
  return set_color (light, color);
}

unsigned char set_intensity (unsigned char light, int intensity)
{
  printf ("DEBUG: set_intensity\n");

  return light;
}

unsigned char menu_intensity (unsigned char light)
{
  int intensity;
  printf ("Intensity : ? ");
  scanf ("%d", &intensity);

  return set_intensity (light, intensity);
}


unsigned char on (unsigned char light)
{
  light = light | 1 ;
  printf("Light ON.\n");
  return light;
}


unsigned char off (unsigned char light)
{
  light = light >> 1 ;
  light = light << 1 ;

  printf("Light OFF.\n");
  return light;
}

int main (int argc, char **argv)
{
  unsigned char light = 0x65;
  int c;

  while (1) {
    display_light (light);


    c = menu ();

    if (1 == c)
      light = on (light);
    else if (2 == c)
      light = off (light);
    else if (3 == c)
      light = menu_color (light);
    else if (4 == c)
      light = menu_intensity (light);
  }

  return EXIT_SUCCESS;
}
