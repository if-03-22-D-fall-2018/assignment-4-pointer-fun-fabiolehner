/*----------------------------------------------------------
 *               HTBLA-Leonding / 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title: Pointer Fun C
 * Author: Fabio Lehner
 * ----------------------------------------------------------
 * Description:
 * This assignment lets you practise a bit more with the
 * difference between references and values.
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <float.h>
#include <string.h>

void print_integers(int int_value, int *int_pointer) {
  printf("Got an integer value %d and an address to an integer with value %d \n", int_value, *int_pointer );
}

void change_integers(int int_value, int *int_pointer){
  int_value = 20;
  int_pointer = &int_value;
  /*
  In this function we try to change our integers, but it doesn't work, because this function
  causes a "call by value". What means the value of the int_value get copied in this function but can't
  get changed.
  */
}

int main(int argc, char const *argv[]) {

  int int_value;
  int_value = 12;
  int *int_pointer;

  int_pointer = &int_value;

  /*
  with the "&" the int_pointer goes to the adress of int_value and can touch the value
  of it. This is the effect we wanted so it takes the value and copies it to its own one.
  */
  printf("Int_Value = %d\n", int_value);
  printf("Int_Pointer = %d\n", *int_pointer);

  print_integers(int_value, int_pointer);

  change_integers(int_value, int_pointer);

  printf("Int_Value = %d\n", int_value);
  printf("Int_Pointer = %d\n", *int_pointer);

  print_integers(int_value,int_pointer);
  return 0;

}
