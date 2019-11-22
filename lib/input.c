#include <stdio.h>

void input(int edge[][2], int cor[][3])
{
    
    printf("Please start scanning with the red center on the front and the blue center on top\n");
    for (int i = 0; i < 24; i++)
    {
        scanf("%i", &cor[i][0]);
        scanf("%i", &edge[i][0]);
    }
    
    //Corner TLB
    cor[0][1] = cor[17][0];
    cor[0][2] = cor[4][0];   
    cor[17][1] = cor[4][0];
    cor[17][2] = cor[0][0];   
    cor[4][1] = cor[0][0];
    cor[4][2] = cor[17][0];   
    
    //Corner TRB
    cor[1][1] = cor[13][0];
    cor[1][2] = cor[16][0];   
    cor[13][1] = cor[16][0];
    cor[13][2] = cor[1][0];   
    cor[16][1] = cor[1][0];
    cor[16][2] = cor[13][0];   
    
    //Corner TRF
    cor[2][1] = cor[9][0];
    cor[2][2] = cor[12][0];   
    cor[9][1] = cor[12][0];
    cor[9][2] = cor[2][0];   
    cor[12][1] = cor[2][0];
    cor[12][2] = cor[9][0];   
    
    //Corner TLF
    cor[3][1] = cor[5][0];
    cor[3][2] = cor[8][0];   
    cor[5][1] = cor[8][0];
    cor[5][2] = cor[3][0];   
    cor[8][1] = cor[3][0];
    cor[8][2] = cor[5][0];   
    
    //Corner DLF
    cor[20][1] = cor[11][0];
    cor[20][2] = cor[6][0];   
    cor[11][1] = cor[6][0];
    cor[11][2] = cor[20][0];   
    cor[6][1] = cor[20][0];
    cor[6][2] = cor[11][0];   
    
    //Corner DRF
    cor[21][1] = cor[15][0];
    cor[21][2] = cor[10][0];   
    cor[15][1] = cor[10][0];
    cor[15][2] = cor[21][0];   
    cor[10][1] = cor[21][0];
    cor[10][2] = cor[15][0];   
    
    //Corner DRB
    cor[22][1] = cor[19][0];
    cor[22][2] = cor[14][0];   
    cor[19][1] = cor[14][0];
    cor[19][2] = cor[22][0];   
    cor[14][1] = cor[22][0];
    cor[14][2] = cor[19][0];   
    
    //Corner DLB
    cor[23][1] = cor[7][0];
    cor[23][2] = cor[18][0];   
    cor[7][1] = cor[18][0];
    cor[7][2] = cor[23][0];   
    cor[18][1] = cor[23][0];
    cor[18][2] = cor[7][0];

    edge[0][1] = edge[16][0];
    edge[16][1] = edge[0][0];
    
    edge[1][1] = edge[12][0];
    edge[12][1] = edge[1][0];
    
    edge[2][1] = edge[8][0];
    edge[8][1] = edge[2][0];
    
    edge[3][1] = edge[4][0];
    edge[4][1] = edge[3][0];
    
    edge[5][1] = edge[11][0];
    edge[11][1] = edge[5][0];
    
    edge[9][1] = edge[15][0];
    edge[15][1] = edge[9][0];
    
    edge[13][1] = edge[19][0];
    edge[19][1] = edge[13][0];
    
    edge[7][1] = edge[17][0];
    edge[17][1] = edge[7][0];
    
    edge[20][1] = edge[10][0];
    edge[10][1] = edge[20][0];
    
    edge[21][1] = edge[14][0];
    edge[14][1] = edge[21][0];
    
    edge[22][1] = edge[18][0];
    edge[18][1] = edge[22][0];
    
    edge[23][1] = edge[6][0];
    edge[6][1] = edge[23][0];
}
