#include <3ds.h>
#include <stdio.h>

int main()
{
    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);
    
    printf("========================\n");
    printf("  FLAVIOS MP3 PLAYER\n");
    printf("========================\n");
    printf("Build: GitHub Actions\n");
    printf("Status: Laeuft!\n");
    printf("START = Beenden\n");
    
    while(aptMainLoop()) 
    {
        hidScanInput();
        if(hidKeysDown() & KEY_START) break;
        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }
    
    gfxExit();
    return 0;
}
