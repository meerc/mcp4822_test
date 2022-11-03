#include "mcp4822.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main()
{
    bool chk=true;
    int i=0;
    uint16_t u=1000u;

    chk=mcp4822_initialize();


    while(chk== true&& u<4095u&& i<10000000)
    {

    chk=mcp4822_set_voltage(MCP_4822_CHANNEL_A,u);
        i++;
        
    }


    mcp4822_deinitialize();

    return(0);
}
