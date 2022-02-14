/*
 *--------------------------------------
 * Program Name: ItzzC
 * Author: Itzz-Me
 * License: GPL 3.0
 * Description: something
 *--------------------------------------
*/

#include <graphx.h>
#include "./OPTIX-main/optix.c"

int menu( void ){
    gfx_Begin();
    gfx_FillScreen(255);

    // still doesnt work but it does run.
    optix_Menu("TEST", "Play`Statistics`Options`", 12, 150, 3);
    gfx_End();
    return 0;
}