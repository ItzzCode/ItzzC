/*
 *--------------------------------------
 * Program Name: ItzzC
 * Author: Itzz-Me
 * License: GPL 3.0
 * Description: something
 *--------------------------------------
*/

#include <tice.h>
#include <keypadc.h>
#include <graphx.h>
#include <debug.h>

int main( void ){
    kb_key_t key;
    int curr_color = 255;
    dbg_sprintf(dbgout, "hey\n");

    gfx_Begin();

    do{
        dbg_sprintf(dbgout, "ho\n");
        kb_Scan();
        key = kb_Data[7];

        gfx_FillScreen(curr_color);

        gfx_SwapDraw();

        if ( kb_Data[1] == kb_2nd ){
            curr_color--;
        }
    } while ( kb_Data[1] != kb_Clear );

    gfx_End();
    return 0;
}