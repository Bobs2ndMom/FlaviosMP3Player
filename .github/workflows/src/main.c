#include <3ds.h>
#include <citro2d.h>

int main()
{
    gfxInitDefault();
    PrintConsole topScreen;
    consoleInit(GFX_TOP, &topScreen);
    
    printf("Flavios MP3 Player\n");
    printf("Build in Progress...\n\n");
    printf("Press START to exit");
    
    while(aptMainLoop())
    {
        hidScanInput();
        if(hidKeysDown() & KEY_START) break;
        gfxFlushBuffers();
        gfxSwapBuffers();
    }
    
    gfxExit();
    return 0;
}
