/*
 *--------------------------------------
 * Program Name: ItzzC
 * Author: Itzz-Me
 * License: GPL 3.0
 * Description: something
 *--------------------------------------
*/

#include <graphx.h>
#include "./OPTIX-main/src/optix.c"

int menu( void ){
    gfx_Begin();

    //this does not work :<
    delay(1000);
    optix_Menu("TEST", "Play`Statistics`Options`", 12, 150, 3);

    gfx_End();
    return 0;
}