/*
 *--------------------------------------
 * Program Name: ItzzC
 * Author: Itzz-Me
 * License: GPL 3.0
 * Description: something
 *--------------------------------------
*/

#include <tice.h>
#include <graphx.h>

int main( void ){
    gfx_Begin();
    gfx_SetDrawBuffer();

    while ( !os_GetCSC() ){
        gfx_FillScreen(255);
        
        gfx_SwapDraw();
    }

    gfx_End();
    return 0;
}
