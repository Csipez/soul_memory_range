#include <iostream>
/*
        Soul memory for everything
Usage: ./a.out <host_soulmemory> <summon_soulmemory> <item>
Items:
        0: White Sign Soapstone
        1: White Sign Soapstone with Name-Engraved Ring
        2: Small White Sign Soapstone
        3: Small White Sign Soapstone with Name-Engraved Ring
        4: Cracked Red Eye Orb & Bell Keepers
        5: Cracked Red Eye Orb
        6: Red Sign Soapstone
        7: Dragon Eye
        8: Rat King Covenant
*/
int main(int argc, char** argv){
        if(argc != 4){
                printf("Usage: ./soul_memory_range <host_soulmemory> <summon_soulmemory> <item>\nItems:\n0: White Sign Soapstone\n1: White Sign Soapstone with Name-Engraved Ring\n2: Small White Sign Soapstone\n3: Small White Sign Soapstone with Name-Engraved Ring\n4: Cracked Red Eye Orb & Bell Keepers\n5: Cracked Red Eye Orb\n6: Red Sign Soapstone\n7: Dragon Eye\n8: Rat King Covenant\nFor example:./soul_memory_range 70000 20000 1\n");
                exit(1);
        }
        int modes[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
        int input_host=atoi(argv[1]);
        int input_summon=atoi(argv[2]);
        int input_mode=atoi(argv[3]);
        int souls[44][2] = 
        {
        {0, 9999}, 
        {10000, 19999},
        {20000, 29999},
        {30000, 39999},
        {40000, 49999},
        {50000, 69999},
        {70000, 89999},
        {90000, 109999},
        {110000, 129999},
        {130000, 149999},
        {150000, 179999},
        {180000, 209999},
        {210000, 239999},
        {240000, 269999},
        {270000, 299999},
        {300000, 349999},
        {350000, 399999},
        {400000, 449999},
        {450000, 499999},
        {500000, 599999},
        {600000, 699999},
        {700000, 799999},
        {800000, 899999},
        {900000, 999999},
        {1000000, 1099999},
        {1100000, 1199999},
        {1200000, 1299999},
        {1300000, 1399999},
        {1400000, 1499999},
        {1500000, 1749999},
        {1750000, 1999999},
        {2000000, 2249999},
        {2250000, 2499999},
        {2500000, 2749999},
        {2750000, 2999999},
        {3000000, 4999999},
        {5000000, 6999999},
        {7000000, 8999999},
        {9000000, 11999999},
        {12000000, 14999999},
        {15000000, 19999999},
        {20000000, 29999999},
        {30000000, 44999999},
        {45000000, 999999999},
        };
        switch(input_mode){
                case 0:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-2][0] && input_summon <= souls[host_bracket+1][1]){
		                printf("Matchable (using: White Sign Soapstone)\n");		
	                }
	                else{
		                printf("Not matchable (using: White Sign Soapstone)\n");
	                }
                        break;
                }
                case 1:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-5][0] && input_summon <= souls[host_bracket+1][4]){
		                printf("Matchable (using: White Sign Soapstone with Name-Engraved Ring)\n");		
	                }
	                else{
		                printf("Not matchable (using: White Sign Soapstone with Name-Engraved Ring)\n");
	                }
                        break;
                }
                case 2:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-3][0] && input_summon <= souls[host_bracket+1][1]){
		                printf("Matchable (using: Small White Sign Soapstone)\n");		
	                }
	                else{
		                printf("Not matchable (using: Small White Sign Soapstone)\n");
	                }
                        break;
                }
                case 3:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-6][0] && input_summon <= souls[host_bracket+5][1]){
		                printf("Matchable (using: Small White Sign Soapstone with Name-Engraved Ring)\n");		
	                }
	                else{
		                printf("Not matchable (using: Small White Sign Soapstone with Name-Engraved Ring)\n");
	                }
                        break;
                }
                case 4:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket][0] && input_summon <= souls[host_bracket+3][1]){
		                printf("Matchable (using: Cracked Red Eye Orb & Bell Keepers)\n");		
	                }
	                else{
		                printf("Not matchable (using: Cracked Red Eye Orb & Bell Keepers)\n");
	                }
                        break;
                }
                case 5:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-2][0] && input_summon <= souls[host_bracket+2][1]){
		                printf("Matchable (using: Cracked Blue Eye Orb)\n");		
	                }
	                else{
		                printf("Not matchable (using: Cracked Blue Eye Orb)\n");
	                }
                        break;
                }
                case 6:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-3][0] && input_summon <= souls[host_bracket+2][1]){
		                printf("Matchable (using: Red Sign Soapstone)\n");		
	                }
	                else{
		                printf("Not matchable (using: Red Sign Soapstone)\n");
	                }
                        break;
                }
                case 7:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-4][0] && input_summon <= souls[host_bracket+4][1]){
		                printf("Matchable (using: Dragon Eye)\n");		
	                }
	                else{
		                printf("Not matchable (using: Dragon Eye)\n");
	                }
                        break;
                }
                case 8:{
                        int i;
	                int host_bracket;
    	                for (i = 0; i < sizeof(souls) / sizeof(souls[0]); i++) {
        	                if (input_host >= souls[i][0] && input_host <= souls[i][1]) {
            	        	host_bracket=i;
            	        	break;
        	                }
    	                }
	                if(input_summon >= souls[host_bracket-1][0] && input_summon <= souls[host_bracket+3][1]){
		                printf("Matchable (using: Rat King Covenant)\n");		
	                }
	                else{
		                printf("Not matchable (using: Rat King Covenant)\n");
	                }
                        break;
                }

        }
    	return 0;
}
