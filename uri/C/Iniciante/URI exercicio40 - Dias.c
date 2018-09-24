#include<stdio.h>
main(){
		//                  Y1				Y2     	Y3      	Y4
	int time[3][4];/* X1	dias 0,0    horas 0,1 minutos 0,2 segundos 0,3
					  X2	dias 1,0    horas 1,1 minutos 1,2 segundos 1,3
					  X3	resultado 2,0
					*/

		scanf("Dia %d\n%d : %d : %d\n",&time[0][0],&time[0][1],&time[0][2],&time[0][3]);
		scanf("Dia %d\n%d : %d : %d",&time[1][0],&time[1][1],&time[1][2],&time[1][3]);
		
		time[2][0] = time[1][0] - time [0][0];
		time[2][1] = time[1][1] - time [0][1];if(time[2][1]<0){time[2][0]--;time[2][1]=time[2][1]+24;}
		time[2][2] = time[1][2] - time [0][2];if(time[2][2]<0){time[2][1]--;time[2][2]=time[2][2]+60;}
		time[2][3] = time[1][3] - time [0][3];if(time[2][3]<0){time[2][2]--;time[2][3]=time[2][3]+60;}
	
		printf("%d dia(s)\n",time[2][0]);
		printf("%d hora(s)\n",time[2][1]);
		printf("%d minuto(s)\n",time[2][2]);
		printf("%d segundo(s)\n",time[2][3]);

	 
	
}
