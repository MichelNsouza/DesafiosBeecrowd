#include <stdio.h>

int main() {
    
    int total, m1, m2, m3, m4, m5, pm1 = 300, pm2 =1500 , pm3 = 600, pm4 =1000 , pm5 = 150;
    
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    
    total = ((m1*pm1) + (m2*pm2) + (m3*pm3) + (m4*pm4) + (m5*pm5)) + 225;
	
	printf("%d\n",total);
        
    return 0;
}

